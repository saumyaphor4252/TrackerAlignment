void CosmicRateTool_HitCountVsKinematic(const char *fileName) {
  TString InputFile = Form("%s", fileName);
  TFile *file = new TFile(InputFile);

  bool IsFileExist;
  IsFileExist = file->IsZombie();
  if (IsFileExist) {
    cout << endl
         << "====================================================================================================="
         << endl;
    cout << fileName << " is not found. Check the file!" << endl;
    cout << "====================================================================================================="
         << endl
         << endl;
    exit(EXIT_FAILURE);
  }

  TDirectory *folder = (TDirectory*)file->Get("cosmicRateAnalyzer/HitCountPlots");
  TIter next(folder->GetListOfKeys());
  TH1D *hist;   
  TKey *key;

  TCanvas *c = new TCanvas("c", "c",596,159,741,738);
  gStyle->SetOptStat(0);   // Dont show statistics
  //gStyle->SetOptTitle(0);  // Dont show Title
  gStyle->SetTitleFont(62);
  c->Range(-28.55688,-7.890958,22.17317,47.50516);
  c->SetFillColor(0);
  c->SetBorderMode(0);
  c->SetBorderSize(3);
  c->SetGridx();
  c->SetGridy();
  c->SetTickx(1);
  c->SetTicky(1);
  c->SetLeftMargin(0.1686747);
  c->SetRightMargin(0.04283802);
  c->SetTopMargin(0.08201439);
  c->SetBottomMargin(0.142446);
  c->SetFrameLineWidth(3);
  c->SetFrameBorderMode(0);
  c->SetFrameLineWidth(3);
  c->SetFrameBorderMode(0);
  
  Int_t ci;      // for color index setting
  TColor *color; // for color definition with alpha
  ci = TColor::GetColor("#3399ff");
  
  TGaxis::SetMaxDigits(3);
  gSystem->Exec("mkdir -p HitCountVsKinematic_Plots");

  while ((key=(TKey*)next.Next())) 
    {          
      TString s_histName = key->GetName();       
      hist = (TH1D*)folder->Get(s_histName.Data());

      hist->SetFillColor(ci);
      hist->SetLineWidth(2);
      hist->SetMarkerStyle(21);
      hist->SetMarkerSize(1.5);
      hist->SetTitleFont(62);
      hist->GetXaxis()->CenterTitle(true);
      hist->GetXaxis()->SetLabelFont(42);
      hist->GetXaxis()->SetLabelSize(0.05);
      hist->GetXaxis()->SetTitleSize(0.05);
      hist->GetXaxis()->SetTitleOffset(1.08);
      hist->GetXaxis()->SetTitleFont(42);
      hist->GetYaxis()->SetTitle("Hits (#)");
      hist->GetYaxis()->SetLabelFont(42);
      hist->GetYaxis()->SetLabelSize(0.05);
      hist->GetYaxis()->SetTitleSize(0.05);
      hist->GetYaxis()->SetTitleOffset(0);
      hist->GetYaxis()->SetTitleFont(42);
 
      //----------------------Setting Axes Titles----------------------------//
      hist->Draw("EBAR");

      //----------------------------Saving Plots-----------------------------//
      TString PlotFormat[] = {".png", ".pdf", ".C"};
      for(int k=0; k<3; k++)
	{
	  TString Format = s_histName +  PlotFormat[k];
	  c->SaveAs(Format.Data());
	  TString cmd4 = "mv  " + Format + "  HitCountVsKinematic_Plots";
	  gSystem->Exec(cmd4.Data());
	}
    }
  c->Close();
}



