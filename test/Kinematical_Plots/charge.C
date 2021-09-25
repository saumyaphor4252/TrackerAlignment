void charge()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Sep 25 06:10:21 2021) by ROOT version 6.22/09
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,856,836);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-7.43865,-231501.1,5.506135,1557370);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(3);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.1883886);
   c1->SetRightMargin(0.03909953);
   c1->SetTopMargin(0.0875817);
   c1->SetBottomMargin(0.1294118);
   c1->SetFrameLineWidth(3);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(3);
   c1->SetFrameBorderMode(0);
   
   TH1D *h_charge__9 = new TH1D("h_charge__9","h_charge",10,-5,5);
   h_charge__9->SetBinContent(5,1333998);
   h_charge__9->SetEntries(1333998);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   h_charge__9->SetLineColor(ci);
   h_charge__9->SetLineWidth(3);
   h_charge__9->GetXaxis()->SetTitle("Track charge (e)");
   h_charge__9->GetXaxis()->SetLabelFont(42);
   h_charge__9->GetXaxis()->SetLabelSize(0.05);
   h_charge__9->GetXaxis()->SetTitleSize(0.05);
   h_charge__9->GetXaxis()->SetTitleOffset(1.12);
   h_charge__9->GetXaxis()->SetTitleFont(42);
   h_charge__9->GetYaxis()->SetTitle("Tracks (#)");
   h_charge__9->GetYaxis()->SetLabelFont(42);
   h_charge__9->GetYaxis()->SetLabelSize(0.05);
   h_charge__9->GetYaxis()->SetTitleSize(0.06);
   h_charge__9->GetYaxis()->SetTitleFont(42);
   h_charge__9->GetZaxis()->SetLabelFont(42);
   h_charge__9->GetZaxis()->SetTitleOffset(1);
   h_charge__9->GetZaxis()->SetTitleFont(42);
   h_charge__9->Draw("");
   TLatex *   tex = new TLatex(0.63,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.039);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
