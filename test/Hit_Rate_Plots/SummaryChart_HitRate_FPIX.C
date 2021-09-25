void SummaryChart_HitRate_FPIX()
{
//=========Macro generated from canvas: canvas/canvas
//=========  (Sat Sep 25 06:09:27 2021) by ROOT version 6.22/09
   TCanvas *canvas = new TCanvas("canvas", "canvas",1,1,953,842);
   gStyle->SetOptStat(0);
   canvas->Range(-2.246996,-0.07230295,11.71963,0.6507265);
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
   
   TH1F *hb_FPIX__2 = new TH1F("hb_FPIX__2","Rate Summary FPIX",11,0,11);
   hb_FPIX__2->SetBinContent(1,0.5508796);
   hb_FPIX__2->SetBinContent(2,0.07987164);
   hb_FPIX__2->SetBinContent(3,0.03003527);
   hb_FPIX__2->SetBinContent(4,0.0141165);
   hb_FPIX__2->SetBinContent(5,0.01591877);
   hb_FPIX__2->SetBinContent(6,0.02714253);
   hb_FPIX__2->SetBinContent(7,0.01282403);
   hb_FPIX__2->SetBinContent(8,0.0143185);
   hb_FPIX__2->SetBinContent(9,0.02269384);
   hb_FPIX__2->SetBinContent(10,0.01070609);
   hb_FPIX__2->SetBinContent(11,0.01198775);
   hb_FPIX__2->SetBarOffset(0.25);
   hb_FPIX__2->SetBarWidth(0.6);
   hb_FPIX__2->SetEntries(11);
   hb_FPIX__2->SetStats(0);
   hb_FPIX__2->SetFillColor(6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hb_FPIX__2->SetLineColor(ci);
   hb_FPIX__2->GetXaxis()->SetBinLabel(1,"PIXEL");
   hb_FPIX__2->GetXaxis()->SetBinLabel(2,"FPIX");
   hb_FPIX__2->GetXaxis()->SetBinLabel(3,"FPIX_1");
   hb_FPIX__2->GetXaxis()->SetBinLabel(4,"FPIX_1+");
   hb_FPIX__2->GetXaxis()->SetBinLabel(5,"FPIX_1-");
   hb_FPIX__2->GetXaxis()->SetBinLabel(6,"FPIX_2");
   hb_FPIX__2->GetXaxis()->SetBinLabel(7,"FPIX_2+");
   hb_FPIX__2->GetXaxis()->SetBinLabel(8,"FPIX_2-");
   hb_FPIX__2->GetXaxis()->SetBinLabel(9,"FPIX_3");
   hb_FPIX__2->GetXaxis()->SetBinLabel(10,"FPIX_3+");
   hb_FPIX__2->GetXaxis()->SetBinLabel(11,"FPIX_3-");
   hb_FPIX__2->GetXaxis()->SetLabelFont(42);
   hb_FPIX__2->GetXaxis()->SetLabelOffset(0.012);
   hb_FPIX__2->GetXaxis()->SetLabelSize(0.04);
   hb_FPIX__2->GetXaxis()->SetTitleSize(0.05);
   hb_FPIX__2->GetXaxis()->SetTitleOffset(1);
   hb_FPIX__2->GetXaxis()->SetTitleFont(42);
   hb_FPIX__2->GetYaxis()->SetTitle("Average Hit Rate (Hz)");
   hb_FPIX__2->GetYaxis()->SetLabelFont(42);
   hb_FPIX__2->GetYaxis()->SetLabelSize(0.05);
   hb_FPIX__2->GetYaxis()->SetTitleSize(0.05);
   hb_FPIX__2->GetYaxis()->SetTitleFont(42);
   hb_FPIX__2->GetZaxis()->SetLabelFont(42);
   hb_FPIX__2->GetZaxis()->SetTitleOffset(1);
   hb_FPIX__2->GetZaxis()->SetTitleFont(42);
   hb_FPIX__2->Draw("bTEXT");
   
   TPaveText *pt = new TPaveText(0.2750369,0.9348568,0.7249631,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Rate Summary FPIX");
   pt->Draw();
   canvas->Modified();
   canvas->cd();
   canvas->SetSelected(canvas);
}
