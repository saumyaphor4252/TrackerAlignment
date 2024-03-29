void SummaryChart_TrackRate_TECplus()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Sun Oct  3 21:08:21 2021) by ROOT version 6.22/09
   TCanvas *canvas = new TCanvas("canvas", "canvas",1,1,986,846);
   gStyle->SetOptStat(0);
   canvas->Range(-1.881491,-0.008462998,9.910786,0.1583724);
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
   
   TH1F *hb_TECp__3 = new TH1F("hb_TECp__3","Rate Summary TEC+",9,0,9);
   hb_TECp__3->SetBinContent(1,0.1385639);
   hb_TECp__3->SetBinContent(2,0.1167837);
   hb_TECp__3->SetBinContent(3,0.09801199);
   hb_TECp__3->SetBinContent(4,0.07824039);
   hb_TECp__3->SetBinContent(5,0.06743523);
   hb_TECp__3->SetBinContent(6,0.05272183);
   hb_TECp__3->SetBinContent(7,0.0370919);
   hb_TECp__3->SetBinContent(8,0.02526585);
   hb_TECp__3->SetBinContent(9,0.01442736);
   hb_TECp__3->SetBarOffset(0.25);
   hb_TECp__3->SetBarWidth(0.6);
   hb_TECp__3->SetEntries(9);
   hb_TECp__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hb_TECp__3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   hb_TECp__3->SetLineColor(ci);
   hb_TECp__3->GetXaxis()->SetBinLabel(1,"TEC_1+");
   hb_TECp__3->GetXaxis()->SetBinLabel(2,"TEC_2+");
   hb_TECp__3->GetXaxis()->SetBinLabel(3,"TEC_3+");
   hb_TECp__3->GetXaxis()->SetBinLabel(4,"TEC_4+");
   hb_TECp__3->GetXaxis()->SetBinLabel(5,"TEC_5+");
   hb_TECp__3->GetXaxis()->SetBinLabel(6,"TEC_6+");
   hb_TECp__3->GetXaxis()->SetBinLabel(7,"TEC_7+");
   hb_TECp__3->GetXaxis()->SetBinLabel(8,"TEC_8+");
   hb_TECp__3->GetXaxis()->SetBinLabel(9,"TEC_9+");
   hb_TECp__3->GetXaxis()->SetLabelFont(42);
   hb_TECp__3->GetXaxis()->SetLabelOffset(0.012);
   hb_TECp__3->GetXaxis()->SetLabelSize(0.06);
   hb_TECp__3->GetXaxis()->SetTitleSize(0.05);
   hb_TECp__3->GetXaxis()->SetTitleOffset(1);
   hb_TECp__3->GetXaxis()->SetTitleFont(42);
   hb_TECp__3->GetYaxis()->SetTitle("Average Track Rate (Hz)");
   hb_TECp__3->GetYaxis()->SetLabelFont(42);
   hb_TECp__3->GetYaxis()->SetLabelSize(0.05);
   hb_TECp__3->GetYaxis()->SetTitleSize(0.05);
   hb_TECp__3->GetYaxis()->SetTitleFont(42);
   hb_TECp__3->GetZaxis()->SetLabelFont(42);
   hb_TECp__3->GetZaxis()->SetTitleOffset(1);
   hb_TECp__3->GetZaxis()->SetTitleFont(42);
   hb_TECp__3->Draw("bTEXT");
   
   TPaveText *pt = new TPaveText(0.2746232,0.9351425,0.7253768,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Rate Summary TEC+");
   pt->Draw();
   canvas->Modified();
   canvas->cd();
   canvas->SetSelected(canvas);
}
