void pt()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Sep 25 06:10:20 2021) by ROOT version 6.22/09
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,856,836);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-24.3865,-206031.9,105.0613,1386032);
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
   
   TH1D *h_pt__1 = new TH1D("h_pt__1","h_pt",100,0,100);
   h_pt__1->SetBinContent(2,3074);
   h_pt__1->SetBinContent(3,11618);
   h_pt__1->SetBinContent(4,130656);
   h_pt__1->SetBinContent(5,1187235);
   h_pt__1->SetBinContent(6,1367);
   h_pt__1->SetBinContent(7,31);
   h_pt__1->SetBinContent(8,4);
   h_pt__1->SetBinContent(9,6);
   h_pt__1->SetBinContent(10,3);
   h_pt__1->SetBinContent(12,1);
   h_pt__1->SetBinContent(17,1);
   h_pt__1->SetBinContent(19,1);
   h_pt__1->SetBinContent(20,1);
   h_pt__1->SetEntries(1333998);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   h_pt__1->SetLineColor(ci);
   h_pt__1->SetLineWidth(3);
   h_pt__1->GetXaxis()->SetTitle("Track p_{T} (GeV)");
   h_pt__1->GetXaxis()->SetLabelFont(42);
   h_pt__1->GetXaxis()->SetLabelSize(0.05);
   h_pt__1->GetXaxis()->SetTitleSize(0.05);
   h_pt__1->GetXaxis()->SetTitleOffset(1.12);
   h_pt__1->GetXaxis()->SetTitleFont(42);
   h_pt__1->GetYaxis()->SetTitle("Tracks (#)");
   h_pt__1->GetYaxis()->SetLabelFont(42);
   h_pt__1->GetYaxis()->SetLabelSize(0.05);
   h_pt__1->GetYaxis()->SetTitleSize(0.06);
   h_pt__1->GetYaxis()->SetTitleFont(42);
   h_pt__1->GetZaxis()->SetLabelFont(42);
   h_pt__1->GetZaxis()->SetTitleOffset(1);
   h_pt__1->GetZaxis()->SetTitleFont(42);
   h_pt__1->Draw("");
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
