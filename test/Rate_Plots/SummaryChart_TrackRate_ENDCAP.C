void SummaryChart_TrackRate_ENDCAP()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Sat Sep 25 06:09:15 2021) by ROOT version 6.22/09
   TCanvas *canvas = new TCanvas("canvas", "canvas",1,1,986,846);
   gStyle->SetOptStat(0);
   canvas->Range(-2.508654,-0.006635778,13.21438,0.3053919);
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
   
   TH1F *hb_ENDCAP__6 = new TH1F("hb_ENDCAP__6","Rate Summary ENDCAP",12,0,12);
   hb_ENDCAP__6->SetBinContent(1,0.1202712);
   hb_ENDCAP__6->SetBinContent(2,0.0825992);
   hb_ENDCAP__6->SetBinContent(3,0.08679926);
   hb_ENDCAP__6->SetBinContent(4,0.2683447);
   hb_ENDCAP__6->SetBinContent(5,0.2363413);
   hb_ENDCAP__6->SetBinContent(6,0.2080899);
   hb_ENDCAP__6->SetBinContent(7,0.1714967);
   hb_ENDCAP__6->SetBinContent(8,0.151205);
   hb_ENDCAP__6->SetBinContent(9,0.1207407);
   hb_ENDCAP__6->SetBinContent(10,0.08596029);
   hb_ENDCAP__6->SetBinContent(11,0.0606767);
   hb_ENDCAP__6->SetBinContent(12,0.03617546);
   hb_ENDCAP__6->SetBarOffset(0.25);
   hb_ENDCAP__6->SetBarWidth(0.6);
   hb_ENDCAP__6->SetEntries(12);
   hb_ENDCAP__6->SetStats(0);
   hb_ENDCAP__6->SetFillColor(6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hb_ENDCAP__6->SetLineColor(ci);
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(1,"TID_1");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(2,"TID_2");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(3,"TID_3");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(4,"TEC_1");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(5,"TEC_2");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(6,"TEC_3");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(7,"TEC_4");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(8,"TEC_5");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(9,"TEC_6");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(10,"TEC_7");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(11,"TEC_8");
   hb_ENDCAP__6->GetXaxis()->SetBinLabel(12,"TEC_9");
   hb_ENDCAP__6->GetXaxis()->SetLabelOffset(0.012);
   hb_ENDCAP__6->GetXaxis()->SetLabelSize(0.05);
   hb_ENDCAP__6->GetXaxis()->SetTitleSize(0.05);
   hb_ENDCAP__6->GetXaxis()->SetTitleOffset(1);
   hb_ENDCAP__6->GetXaxis()->SetTitleFont(42);
   hb_ENDCAP__6->GetYaxis()->SetTitle("Average Track Rate (Hz)");
   hb_ENDCAP__6->GetYaxis()->SetLabelFont(42);
   hb_ENDCAP__6->GetYaxis()->SetLabelSize(0.05);
   hb_ENDCAP__6->GetYaxis()->SetTitleSize(0.05);
   hb_ENDCAP__6->GetYaxis()->SetTitleFont(42);
   hb_ENDCAP__6->GetZaxis()->SetLabelFont(42);
   hb_ENDCAP__6->GetZaxis()->SetTitleOffset(1);
   hb_ENDCAP__6->GetZaxis()->SetTitleFont(42);
   hb_ENDCAP__6->Draw("bTEXT");
   
   TPaveText *pt = new TPaveText(0.2384725,0.9351425,0.7615275,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Rate Summary ENDCAP");
   pt->Draw();
   canvas->Modified();
   canvas->cd();
   canvas->SetSelected(canvas);
}
