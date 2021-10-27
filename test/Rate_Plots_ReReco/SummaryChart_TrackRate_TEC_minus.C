void SummaryChart_TrackRate_TEC_minus()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Sun Oct  3 21:03:48 2021) by ROOT version 6.22/09
   TCanvas *canvas = new TCanvas("canvas", "canvas",1,1,986,846);
   gStyle->SetOptStat(0);
   canvas->Range(-1.881491,-0.002587864,9.910786,0.1281357);
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
   
   TH1F *hb_TECm__4 = new TH1F("hb_TECm__4","Rate Summary TEC-",9,0,9);
   hb_TECm__4->SetBinContent(1,0.1126148);
   hb_TECm__4->SetBinContent(2,0.1012549);
   hb_TECm__4->SetBinContent(3,0.09140445);
   hb_TECm__4->SetBinContent(4,0.07590891);
   hb_TECm__4->SetBinContent(5,0.06672412);
   hb_TECm__4->SetBinContent(6,0.052823);
   hb_TECm__4->SetBinContent(7,0.03721531);
   hb_TECm__4->SetBinContent(8,0.02589395);
   hb_TECm__4->SetBinContent(9,0.01534784);
   hb_TECm__4->SetBarOffset(0.25);
   hb_TECm__4->SetBarWidth(0.6);
   hb_TECm__4->SetEntries(9);
   hb_TECm__4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hb_TECm__4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   hb_TECm__4->SetLineColor(ci);
   hb_TECm__4->GetXaxis()->SetBinLabel(1,"TEC_1-");
   hb_TECm__4->GetXaxis()->SetBinLabel(2,"TEC_2-");
   hb_TECm__4->GetXaxis()->SetBinLabel(3,"TEC_3-");
   hb_TECm__4->GetXaxis()->SetBinLabel(4,"TEC_4-");
   hb_TECm__4->GetXaxis()->SetBinLabel(5,"TEC_5-");
   hb_TECm__4->GetXaxis()->SetBinLabel(6,"TEC_6-");
   hb_TECm__4->GetXaxis()->SetBinLabel(7,"TEC_7-");
   hb_TECm__4->GetXaxis()->SetBinLabel(8,"TEC_8-");
   hb_TECm__4->GetXaxis()->SetBinLabel(9,"TEC_9-");
   hb_TECm__4->GetXaxis()->SetLabelFont(42);
   hb_TECm__4->GetXaxis()->SetLabelOffset(0.012);
   hb_TECm__4->GetXaxis()->SetLabelSize(0.06);
   hb_TECm__4->GetXaxis()->SetTitleSize(0.05);
   hb_TECm__4->GetXaxis()->SetTitleOffset(1);
   hb_TECm__4->GetXaxis()->SetTitleFont(42);
   hb_TECm__4->GetYaxis()->SetTitle("Average Track Rate (Hz)");
   hb_TECm__4->GetYaxis()->SetLabelFont(42);
   hb_TECm__4->GetYaxis()->SetLabelSize(0.05);
   hb_TECm__4->GetYaxis()->SetTitleSize(0.05);
   hb_TECm__4->GetYaxis()->SetTitleFont(42);
   hb_TECm__4->GetZaxis()->SetLabelFont(42);
   hb_TECm__4->GetZaxis()->SetTitleOffset(1);
   hb_TECm__4->GetZaxis()->SetTitleFont(42);
   hb_TECm__4->Draw("bTEXT");
   
   TPaveText *pt = new TPaveText(0.280224,0.9351425,0.719776,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Rate Summary TEC-");
   pt->Draw();
   canvas->Modified();
   canvas->cd();
   canvas->SetSelected(canvas);
}
