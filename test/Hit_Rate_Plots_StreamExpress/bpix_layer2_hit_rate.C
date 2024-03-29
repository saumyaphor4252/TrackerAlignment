void bpix_layer2_hit_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Oct  3 21:27:24 2021) by ROOT version 6.22/09
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,856,812);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.05430669,344951,0.3653358);
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
   
   Double_t Graph0_fx1017[166] = {
   343001,
   343004,
   343005,
   343007,
   343009,
   343018,
   343025,
   343034,
   343037,
   343040,
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
   343384,
   343385,
   343386,
   343387,
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
   343874,
   343875,
   343876,
   343877,
   343878,
   343881,
   343921,
   343923,
   343925,
   343927,
   343928,
   343932,
   343934,
   343936,
   343937,
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
   344258,
   344259,
   344260,
   344265,
   344266,
   344267,
   344270,
   344271,
   344272,
   344348,
   344349,
   344350,
   344351,
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
   344432,
   344433,
   344434,
   344436,
   344518,
   344519,
   344520,
   344529,
   344533,
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
   344676,
   344677,
   344678,
   344679,
   344680,
   344681};
   Double_t Graph0_fy1017[166] = {
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
   0.06306398,
   0.07594381,
   0.09840211,
   0.1018618,
   0.08010275,
   0.04089217,
   0.1254749,
   0.07672635,
   0.07798234,
   0,
   0,
   0,
   0,
   0,
   0.082251,
   0.1037979,
   0.08849342,
   0.09633988,
   0.1220387,
   0,
   0.04669391,
   0.0519271,
   0.04992004,
   0.06514545,
   0.1079409,
   0.10901,
   0.05719016,
   0.01667057,
   0.02187334,
   0.02722713,
   0,
   0.02811382,
   0.02790203,
   0.0223783,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.07999142,
   0.07011942,
   0,
   0.1375816,
   0.1143729,
   0.1185479,
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
   0.09090167,
   0.1153857,
   0.117817,
   0,
   0,
   0,
   0.1049081,
   0.1160335,
   0.1212768,
   0.1164473,
   0.1206242,
   0.1192484,
   0,
   0,
   0.001184859,
   0.1140073,
   0.1171963,
   0.1331113,
   0.1152719,
   0.1897071,
   0.1215213,
   0,
   0.07881102,
   0.1062696,
   0.1893756,
   0.116651,
   0.100707,
   0,
   0.06252761,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.109911,
   0,
   0.1025653,
   0.1342788,
   0.1629649,
   0.1096451,
   0.1083796,
   0.1085177,
   0.09840744,
   0.1084921,
   0.1497886,
   0.1123818,
   0.1219965,
   0,
   0.1080361,
   0,
   0,
   0,
   0,
   0,
   0.1239151,
   0.1345352,
   0.1081911,
   0.1085067,
   0,
   0.09649645,
   0.1081777,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1126291,
   0,
   0,
   0,
   0,
   0,
   0.136289,
   0,
   0.09454334,
   0.105814,
   0.09741542,
   0.1114525,
   0.1268161,
   0.1098211};
   Double_t Graph0_fex1017[166] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1017[166] = {
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
   0.018205,
   0.005859192,
   0.01031534,
   0.02470512,
   0.003637278,
   0.01092889,
   0.02290848,
   0.001524197,
   0.003191605,
   0,
   0,
   0,
   0,
   0,
   0.001435071,
   0.008619943,
   0.003019357,
   0.001779501,
   0.02124421,
   0,
   0.001400887,
   0.001989851,
   0.004519548,
   0.001680928,
   0.02544192,
   0.04120192,
   0.00269597,
   0.001379667,
   0.0007126718,
   0.001529228,
   0,
   0.002610303,
   0.02790203,
   0.01582385,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.00752496,
   0.001330848,
   0,
   0.01115934,
   0.00172033,
   0.004930943,
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
   0.00621391,
   0.003597033,
   0.001734291,
   0,
   0,
   0,
   0.01354358,
   0.001243724,
   0.001189331,
   0.005934703,
   0.002649962,
   0.001840261,
   0,
   0,
   0.0006840787,
   0.001438413,
   0.008145708,
   0.006219882,
   0.001700516,
   0.04601072,
   0.005773652,
   0,
   0.02034892,
   0.008481239,
   0.109336,
   0.001573637,
   0.007746692,
   0,
   0.01123029,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.001913306,
   0,
   0.01161324,
   0.008722343,
   0.08148247,
   0.001238552,
   0.001141028,
   0.001367846,
   0.007637899,
   0.01261196,
   0.04324025,
   0.01066681,
   0.01601893,
   0,
   0.001565905,
   0,
   0,
   0,
   0,
   0,
   0.01074481,
   0.01053761,
   0.01912566,
   0.01378036,
   0,
   0.01525743,
   0.001486496,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.001452705,
   0,
   0,
   0,
   0,
   0,
   0.01617453,
   0,
   0.01220549,
   0.008942913,
   0.01132431,
   0.001400506,
   0.01725749,
   0.002694641};
   TGraphErrors *gre = new TGraphErrors(166,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","",166,342833,344849);
   Graph_Graph01017->SetMinimum(0);
   Graph_Graph01017->SetMaximum(0.3285828);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01017->SetLineColor(ci);
   Graph_Graph01017->GetXaxis()->SetTitle("Run Number");
   Graph_Graph01017->GetXaxis()->SetNoExponent();
   Graph_Graph01017->GetXaxis()->SetNdivisions(5);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetLabelSize(0.04);
   Graph_Graph01017->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("Hit Rate (Hz)");
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01017->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"BPIX layer 2");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
