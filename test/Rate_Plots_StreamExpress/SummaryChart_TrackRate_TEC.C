void SummaryChart_TrackRate_TEC()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Sun Oct  3 21:08:21 2021) by ROOT version 6.22/09
   TCanvas *canvas = new TCanvas("canvas", "canvas",0,0,986,870);
   gStyle->SetOptStat(0);
   canvas->Range(-1.881491,-0.01329032,9.910786,0.3160784);
   canvas->SetFillColor(0);
   canvas->SetBorderMode(0);
   canvas->SetBorderSize(2);
   canvas->SetGridx();
   canvas->SetGridy();
   canvas->SetTickx(1);
   canvas->SetTicky(1);
   canvas->SetLeftMargin(0.1595528);
   canvas->SetRightMargin(0.07723577);
   canvas->SetTopMargin(0.07966706);
   canvas->SetFrameLineWidth(3);
   canvas->SetFrameBorderMode(0);
   canvas->SetFrameLineWidth(3);
   canvas->SetFrameBorderMode(0);
   
   TH1F *hb_TEC__2 = new TH1F("hb_TEC__2","Rate Summary TEC",9,0,9);
   hb_TEC__2->SetBinContent(1,0.2769723);
   hb_TEC__2->SetBinContent(2,0.2401433);
   hb_TEC__2->SetBinContent(3,0.2092818);
   hb_TEC__2->SetBinContent(4,0.1704801);
   hb_TEC__2->SetBinContent(5,0.1480843);
   hb_TEC__2->SetBinContent(6,0.1160947);
   hb_TEC__2->SetBinContent(7,0.08117289);
   hb_TEC__2->SetBinContent(8,0.05539585);
   hb_TEC__2->SetBinContent(9,0.03190016);
   hb_TEC__2->SetBarOffset(0.25);
   hb_TEC__2->SetBarWidth(0.6);
   hb_TEC__2->SetEntries(9);
   hb_TEC__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hb_TEC__2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   hb_TEC__2->SetLineColor(ci);
   hb_TEC__2->GetXaxis()->SetBinLabel(1,"TEC_1");
   hb_TEC__2->GetXaxis()->SetBinLabel(2,"TEC_2");
   hb_TEC__2->GetXaxis()->SetBinLabel(3,"TEC_3");
   hb_TEC__2->GetXaxis()->SetBinLabel(4,"TEC_4");
   hb_TEC__2->GetXaxis()->SetBinLabel(5,"TEC_5");
   hb_TEC__2->GetXaxis()->SetBinLabel(6,"TEC_6");
   hb_TEC__2->GetXaxis()->SetBinLabel(7,"TEC_7");
   hb_TEC__2->GetXaxis()->SetBinLabel(8,"TEC_8");
   hb_TEC__2->GetXaxis()->SetBinLabel(9,"TEC_9");
   hb_TEC__2->GetXaxis()->SetLabelFont(42);
   hb_TEC__2->GetXaxis()->SetLabelOffset(0.012);
   hb_TEC__2->GetXaxis()->SetLabelSize(0.06);
   hb_TEC__2->GetXaxis()->SetTitleSize(0.05);
   hb_TEC__2->GetXaxis()->SetTitleOffset(1);
   hb_TEC__2->GetXaxis()->SetTitleFont(42);
   hb_TEC__2->GetYaxis()->SetTitle("Average Track Rate (Hz)");
   hb_TEC__2->GetYaxis()->SetLabelFont(42);
   hb_TEC__2->GetYaxis()->SetLabelSize(0.05);
   hb_TEC__2->GetYaxis()->SetTitleSize(0.05);
   hb_TEC__2->GetYaxis()->SetTitleFont(42);
   hb_TEC__2->GetZaxis()->SetLabelFont(42);
   hb_TEC__2->GetZaxis()->SetTitleOffset(1);
   hb_TEC__2->GetZaxis()->SetTitleFont(42);
   hb_TEC__2->Draw("bTEXT");
   
   TPaveText *pt = new TPaveText(0.2873523,0.9351425,0.7126477,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Rate Summary TEC");
   pt->Draw();
   canvas->Modified();
   canvas->cd();
   canvas->SetSelected(canvas);
}
