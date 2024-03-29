void bpix_hit_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Oct  3 21:35:48 2021) by ROOT version 6.22/09
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,856,812);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.4949971,344951,3.329979);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
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
   
   Double_t Graph0_fx1015[158] = {
   343001,
   343005,
   343007,
   343009,
   343018,
   343025,
   343034,
   343042,
   343045,
   343046,
   343059,
   343068,
   343070,
   343080,
   343082,
   343164,
   343167,
   343169,
   343170,
   343171,
   343259,
   343260,
   343266,
   343268,
   343375,
   343380,
   343385,
   343386,
   343387,
   343484,
   343494,
   343496,
   343498,
   343501,
   343609,
   343619,
   343621,
   343623,
   343625,
   343627,
   343629,
   343638,
   343640,
   343642,
   343644,
   343646,
   343648,
   343650,
   343652,
   343663,
   343668,
   343673,
   343677,
   343680,
   343762,
   343763,
   343767,
   343769,
   343772,
   343774,
   343854,
   343860,
   343862,
   343864,
   343866,
   343921,
   343923,
   343925,
   343927,
   343928,
   343932,
   343934,
   343936,
   343937,
   343993,
   344001,
   344049,
   344058,
   344062,
   344063,
   344064,
   344065,
   344067,
   344068,
   344121,
   344124,
   344128,
   344134,
   344184,
   344185,
   344186,
   344187,
   344188,
   344259,
   344260,
   344265,
   344266,
   344267,
   344268,
   344270,
   344271,
   344272,
   344348,
   344349,
   344350,
   344358,
   344362,
   344363,
   344366,
   344403,
   344409,
   344416,
   344419,
   344420,
   344421,
   344423,
   344424,
   344426,
   344430,
   344432,
   344433,
   344434,
   344436,
   344518,
   344519,
   344520,
   344529,
   344533,
   344536,
   344538,
   344555,
   344558,
   344560,
   344561,
   344562,
   344565,
   344566,
   344567,
   344568,
   344606,
   344607,
   344617,
   344618,
   344621,
   344625,
   344632,
   344633,
   344634,
   344654,
   344657,
   344665,
   344666,
   344675,
   344677,
   344678,
   344679,
   344680,
   344681};
   Double_t Graph0_fy1015[158] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1859173,
   0.2156262,
   0.2705193,
   0.239662,
   0.2353534,
   0.1778097,
   0.3224696,
   0.1060232,
   0.1215435,
   0,
   0,
   0,
   0,
   0.2219163,
   0,
   0.670169,
   0.5628966,
   0.5917185,
   0.5984754,
   0,
   0.04748003,
   0.08622671,
   0.09957272,
   0.5631038,
   0.6718998,
   0.69741,
   0.5350587,
   0.02099548,
   0.02539069,
   0.4146529,
   0,
   0.4202538,
   0.6128281,
   0.4265685,
   0,
   0,
   0,
   2.390961e-05,
   3.539954e-05,
   0,
   0,
   0,
   0,
   0.2653289,
   0.1963092,
   0,
   0.701594,
   0.3648988,
   0.5153083,
   0.001564775,
   0,
   0,
   0,
   0,
   0,
   0,
   0.5987611,
   0.6507859,
   0.6658196,
   0.002268616,
   0.6339266,
   0,
   0.002929947,
   0.5807563,
   0.4175306,
   0.30957,
   0.5852619,
   0.373111,
   0.3527546,
   0,
   0,
   0.007510015,
   0.2049557,
   0.5810521,
   0.634274,
   0.256106,
   0.7945364,
   0.6597259,
   0.4536997,
   0.5638453,
   1.707632,
   0.604058,
   0.5821709,
   0,
   0,
   0.4142576,
   0,
   0,
   0,
   0,
   0.001402659,
   0.0007676301,
   0,
   0.4947222,
   0,
   0.6115774,
   0.6763064,
   2.268925,
   0.4438299,
   0.5736295,
   0.5782299,
   0.5494417,
   0.5903544,
   0,
   0.6173294,
   0.5760605,
   0.6294337,
   0,
   0.437032,
   0,
   0,
   0,
   0,
   0,
   0,
   0.6642975,
   0.6884015,
   0.6281443,
   0.673247,
   0,
   0.5816435,
   0.5674043,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.4510676,
   0,
   0,
   0,
   0,
   0,
   0.7759374,
   0,
   0.3449632,
   0.5596705,
   0.56983,
   0.6125687,
   0.5934585};
   Double_t Graph0_fex1015[158] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1015[158] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.03142576,
   0.009872845,
   0.01721273,
   0.03789389,
   0.006234664,
   0.02276619,
   0.03774221,
   0.001392153,
   0.003985568,
   0,
   0,
   0,
   0,
   0.002387163,
   0,
   0.02190516,
   0.00761506,
   0.004410409,
   0.04702067,
   0,
   0.001038327,
   0.002462615,
   0.006387593,
   0.004942931,
   0.06348856,
   0.09490548,
   0.008241431,
   0.001539463,
   0.0007520074,
   0.005968237,
   0,
   0.01009223,
   0.1306554,
   0.06582094,
   0,
   0,
   0,
   2.390961e-05,
   3.539954e-05,
   0,
   0,
   0,
   0,
   0.009806838,
   0.001306147,
   0,
   0.025202,
   0.002314079,
   0.009083936,
   0.001564775,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01600256,
   0.008545975,
   0.004124244,
   0.0007562053,
   0.003401234,
   0,
   0.001035893,
   0.03192125,
   0.001882603,
   0.001285154,
   0.01330141,
   0.003514445,
   0.002294925,
   0,
   0,
   0.001722916,
   0.001101849,
   0.01714175,
   0.01358777,
   0.001607363,
   0.09363701,
   0.01345259,
   0.04864171,
   0.01953608,
   0.372636,
   0.003472056,
   0.01863484,
   0,
   0,
   0.02858649,
   0,
   0,
   0,
   0,
   0.0009918299,
   0.0003432946,
   0,
   0.003716041,
   0,
   0.02867119,
   0.01980588,
   0.4537851,
   0.002177023,
   0.002621117,
   0.003150567,
   0.01804603,
   0.03020516,
   0,
   0.09004674,
   0.02438659,
   0.03646212,
   0,
   0.002692807,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02487814,
   0.02405469,
   0.04593446,
   0.03476632,
   0,
   0.03810473,
   0.003367518,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002500419,
   0,
   0,
   0,
   0,
   0,
   0.03860433,
   0,
   0.0124559,
   0.02714801,
   0.003097634,
   0.03821099,
   0.006265705};
   TGraphErrors *gre = new TGraphErrors(158,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","",158,342833,344849);
   Graph_Graph01015->SetMinimum(0);
   Graph_Graph01015->SetMaximum(2.994982);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("Run Number");
   Graph_Graph01015->GetXaxis()->SetNoExponent();
   Graph_Graph01015->GetXaxis()->SetNdivisions(5);
   Graph_Graph01015->GetXaxis()->SetLabelFont(42);
   Graph_Graph01015->GetXaxis()->SetLabelSize(0.04);
   Graph_Graph01015->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01015->GetXaxis()->SetTitleFont(42);
   Graph_Graph01015->GetYaxis()->SetTitle("Hit Rate (Hz)");
   Graph_Graph01015->GetYaxis()->SetLabelFont(42);
   Graph_Graph01015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01015->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01015->GetYaxis()->SetTitleFont(42);
   Graph_Graph01015->GetZaxis()->SetLabelFont(42);
   Graph_Graph01015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01015);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"BPIX");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
