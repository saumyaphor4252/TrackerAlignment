void SummaryChart()
{
//=========Macro generated from canvas: can/can
//=========  (Sun Oct  3 21:08:21 2021) by ROOT version 6.22/09
   TCanvas *can = new TCanvas("can", "can",0,0,953,866);
   gStyle->SetOptStat(0);
   can->Range(-1.634179,-0.5274773,8.523364,4.747295);
   can->SetFillColor(0);
   can->SetBorderMode(0);
   can->SetBorderSize(2);
   can->SetGridx();
   can->SetGridy();
   can->SetTickx(1);
   can->SetTicky(1);
   can->SetLeftMargin(0.1608833);
   can->SetRightMargin(0.05152471);
   can->SetFrameLineWidth(3);
   can->SetFrameBorderMode(0);
   can->SetFrameLineWidth(3);
   can->SetFrameBorderMode(0);
   
   TH1F *h1b__1 = new TH1F("h1b__1","Track Rate Summary",8,0,8);
   h1b__1->SetBinContent(1,4.018874);
   h1b__1->SetBinContent(2,2.282187);
   h1b__1->SetBinContent(3,0.04455344);
   h1b__1->SetBinContent(4,0.125696);
   h1b__1->SetBinContent(5,1.059521);
   h1b__1->SetBinContent(6,0.286736);
   h1b__1->SetBinContent(7,2.181423);
   h1b__1->SetBinContent(8,0.3493093);
   h1b__1->SetBarOffset(0.25);
   h1b__1->SetBarWidth(0.6);
   h1b__1->SetEntries(8);
   h1b__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   h1b__1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   h1b__1->SetLineColor(ci);
   h1b__1->GetXaxis()->SetBinLabel(1,"Event");
   h1b__1->GetXaxis()->SetBinLabel(2,"Track");
   h1b__1->GetXaxis()->SetBinLabel(3,"FPIX");
   h1b__1->GetXaxis()->SetBinLabel(4,"BPIX");
   h1b__1->GetXaxis()->SetBinLabel(5,"TIB");
   h1b__1->GetXaxis()->SetBinLabel(6,"TID");
   h1b__1->GetXaxis()->SetBinLabel(7,"TOB");
   h1b__1->GetXaxis()->SetBinLabel(8,"TEC");
   h1b__1->GetXaxis()->SetBit(TAxis::kLabelsDown);
   h1b__1->GetXaxis()->SetLabelFont(42);
   h1b__1->GetXaxis()->SetLabelOffset(0.012);
   h1b__1->GetXaxis()->SetLabelSize(0.06);
   h1b__1->GetXaxis()->SetTitleSize(0.05);
   h1b__1->GetXaxis()->SetTitleOffset(1);
   h1b__1->GetXaxis()->SetTitleFont(42);
   h1b__1->GetYaxis()->SetTitle("Average Track Rate (Hz)");
   h1b__1->GetYaxis()->SetLabelFont(42);
   h1b__1->GetYaxis()->SetLabelSize(0.05);
   h1b__1->GetYaxis()->SetTitleSize(0.05);
   h1b__1->GetYaxis()->SetTitleFont(42);
   h1b__1->GetZaxis()->SetLabelFont(42);
   h1b__1->GetZaxis()->SetTitleOffset(1);
   h1b__1->GetZaxis()->SetTitleFont(42);
   h1b__1->Draw("bTEXT");
   
   TPaveText *pt = new TPaveText(0.2644995,0.9348568,0.7355005,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Track Rate Summary");
   pt->Draw();
   can->Modified();
   can->cd();
   can->SetSelected(can);
}
