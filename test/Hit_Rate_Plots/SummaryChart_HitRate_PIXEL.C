void SummaryChart_HitRate_PIXEL()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Sat Sep 25 06:09:27 2021) by ROOT version 6.22/09
   TCanvas *canvas = new TCanvas("canvas", "canvas",1,1,953,842);
   gStyle->SetOptStat(0);
   canvas->Range(-2.042724,-0.07230295,10.65421,0.6507265);
   canvas->SetFillColor(0);
   canvas->SetBorderMode(0);
   canvas->SetBorderSize(2);
   canvas->SetGridx();
   canvas->SetGridy();
   canvas->SetTickx(1);
   canvas->SetTicky(1);
   canvas->SetLeftMargin(0.1608833);
   canvas->SetRightMargin(0.05152471);
   canvas->SetFrameLineWidth(3);
   canvas->SetFrameBorderMode(0);
   canvas->SetFrameLineWidth(3);
   canvas->SetFrameBorderMode(0);
   
   TH1F *hb_PIXEL__3 = new TH1F("hb_PIXEL__3","Rate Summary PIXEL",10,0,10);
   hb_PIXEL__3->SetBinContent(1,0.5508796);
   hb_PIXEL__3->SetBinContent(2,0.4710079);
   hb_PIXEL__3->SetBinContent(3,0.0298327);
   hb_PIXEL__3->SetBinContent(4,0.08499131);
   hb_PIXEL__3->SetBinContent(5,0.1424714);
   hb_PIXEL__3->SetBinContent(6,0.2137126);
   hb_PIXEL__3->SetBinContent(7,0.07987164);
   hb_PIXEL__3->SetBinContent(8,0.03003527);
   hb_PIXEL__3->SetBinContent(9,0.02714253);
   hb_PIXEL__3->SetBinContent(10,0.02269384);
   hb_PIXEL__3->SetBarOffset(0.25);
   hb_PIXEL__3->SetBarWidth(0.6);
   hb_PIXEL__3->SetEntries(10);
   hb_PIXEL__3->SetStats(0);
   hb_PIXEL__3->SetFillColor(6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hb_PIXEL__3->SetLineColor(ci);
   hb_PIXEL__3->GetXaxis()->SetBinLabel(1,"PIXEL");
   hb_PIXEL__3->GetXaxis()->SetBinLabel(2,"BPIX");
   hb_PIXEL__3->GetXaxis()->SetBinLabel(3,"BPIX_1");
   hb_PIXEL__3->GetXaxis()->SetBinLabel(4,"BPIX_2");
   hb_PIXEL__3->GetXaxis()->SetBinLabel(5,"BPIX_3");
   hb_PIXEL__3->GetXaxis()->SetBinLabel(6,"BPIX_4");
   hb_PIXEL__3->GetXaxis()->SetBinLabel(7,"FPIX");
   hb_PIXEL__3->GetXaxis()->SetBinLabel(8,"FPIX_1");
   hb_PIXEL__3->GetXaxis()->SetBinLabel(9,"FPIX_2");
   hb_PIXEL__3->GetXaxis()->SetBinLabel(10,"FPIX_3");
   hb_PIXEL__3->GetXaxis()->SetLabelFont(42);
   hb_PIXEL__3->GetXaxis()->SetLabelOffset(0.012);
   hb_PIXEL__3->GetXaxis()->SetLabelSize(0.05);
   hb_PIXEL__3->GetXaxis()->SetTitleSize(0.05);
   hb_PIXEL__3->GetXaxis()->SetTitleOffset(1);
   hb_PIXEL__3->GetXaxis()->SetTitleFont(42);
   hb_PIXEL__3->GetYaxis()->SetTitle("Average Hit Rate (Hz)");
   hb_PIXEL__3->GetYaxis()->SetLabelFont(42);
   hb_PIXEL__3->GetYaxis()->SetLabelSize(0.05);
   hb_PIXEL__3->GetYaxis()->SetTitleSize(0.05);
   hb_PIXEL__3->GetYaxis()->SetTitleFont(42);
   hb_PIXEL__3->GetZaxis()->SetLabelFont(42);
   hb_PIXEL__3->GetZaxis()->SetTitleOffset(1);
   hb_PIXEL__3->GetZaxis()->SetTitleFont(42);
   hb_PIXEL__3->Draw("bTEXT");
   
   TPaveText *pt = new TPaveText(0.2602845,0.9348568,0.7397155,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Rate Summary PIXEL");
   pt->Draw();
   canvas->Modified();
   canvas->cd();
   canvas->SetSelected(canvas);
}
