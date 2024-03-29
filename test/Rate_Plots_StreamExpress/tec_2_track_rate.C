void tec_2_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Oct  3 21:08:16 2021) by ROOT version 6.22/09
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,856,812);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-1.469947,344951,9.888732);
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
   
   Double_t Graph0_fx1020[166] = {
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
   Double_t Graph0_fy1020[166] = {
   0.1094281,
   0.1392205,
   0.1220043,
   0.07007862,
   0.1457768,
   0.1463476,
   0.3441099,
   0.1263156,
   4.042691,
   0,
   0.1237958,
   0.1293711,
   0.1192702,
   0.1271799,
   0.1259047,
   0.1220398,
   0.1268579,
   0.1184114,
   0.1208726,
   0.1157239,
   0.1113782,
   0.137813,
   0.1270083,
   0.1372809,
   0.1212924,
   0.1185716,
   0.1210882,
   0.2164635,
   0.194385,
   0.2193731,
   0.2026969,
   0.1990103,
   0.2067167,
   0.2856231,
   0.3076151,
   0.3064732,
   0.3032477,
   0.2815414,
   0.2708751,
   0.2762583,
   0.2794704,
   0.2728996,
   0.2398687,
   0.4204673,
   0.2733689,
   0.2319037,
   0.2697712,
   0.2793143,
   0.2700219,
   0.2777452,
   0.3627265,
   0.4139986,
   0.2744447,
   0.2732611,
   0.04504028,
   0.2809824,
   0.2729748,
   0.05371377,
   0.04139296,
   0.2869556,
   0.293972,
   0.2435137,
   0.272521,
   0.0667788,
   0.3258513,
   0.3418248,
   0.3326725,
   0.07817381,
   0.00761532,
   0,
   0.0288484,
   0,
   0,
   0.003270933,
   0.07025486,
   0.03371892,
   0.05999362,
   0.007590215,
   0.001223983,
   0.004255665,
   0.3058374,
   0.3379714,
   0.3363719,
   0,
   0.3432843,
   0.001862679,
   0.3147243,
   0.3411284,
   0.3412383,
   0.3475271,
   0.3335795,
   0.3417279,
   0.2666396,
   0,
   0.05252875,
   0.2648192,
   0.2779874,
   0.2700008,
   0.262554,
   0.2566625,
   0.2633419,
   0.06220137,
   0.2574493,
   0.2666894,
   0.1893756,
   0.2616845,
   0.2592162,
   0,
   0.1734637,
   0,
   0.1758382,
   0.2949651,
   0.2166722,
   0.2100192,
   0.002377433,
   0.0005699368,
   0,
   0.1922111,
   0.1737712,
   0.1696273,
   0.1954691,
   0.2037062,
   0.1866639,
   0.1857181,
   0.1832767,
   0.1980005,
   0.1979249,
   0.1747534,
   0.1731288,
   0.1724778,
   0.1852848,
   0.170225,
   0.1296288,
   0.1115175,
   0,
   0.03836371,
   0.1018529,
   0.1080764,
   0.1031712,
   0.09466718,
   0.1085067,
   0,
   0.1037337,
   0.1011919,
   0.09069103,
   0.1024157,
   0.08358833,
   0.1014247,
   0.06848423,
   0.1337016,
   0.1269961,
   0.0027246,
   0.1838116,
   0.1804607,
   0.1931658,
   0,
   0.1780047,
   0.1772885,
   0.211152,
   0,
   0.1812081,
   0.1821512,
   0.2053622,
   0.1789787,
   0.199618,
   0.1843354};
   Double_t Graph0_fex1020[166] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1020[166] = {
   0.02579246,
   0.01988864,
   0.01645105,
   0.003182106,
   0.00998846,
   0.007008777,
   0.2433225,
   0.001665221,
   4.042691,
   0,
   0.004855671,
   0.01848159,
   0.003988993,
   0.0106727,
   0.003363745,
   0.009251816,
   0.004562761,
   0.001759707,
   0.02520369,
   0.007232744,
   0.01097442,
   0.02873601,
   0.004580036,
   0.02002447,
   0.02252343,
   0.001894782,
   0.003977057,
   0.02705794,
   0.01541573,
   0.02855995,
   0.02238413,
   0.01583241,
   0.002275048,
   0.01429904,
   0.005629408,
   0.003173887,
   0.03348811,
   0.007546101,
   0.003374097,
   0.004589666,
   0.01069364,
   0.003440397,
   0.03792658,
   0.08091896,
   0.005894256,
   0.005145797,
   0.002502821,
   0.00489799,
   0.01327085,
   0.00820454,
   0.1006022,
   0.06806095,
   0.02012326,
   0.006808164,
   0.009828596,
   0.003758142,
   0.00311529,
   0.01550583,
   0.01003927,
   0.008793056,
   0.01909553,
   0.01312938,
   0.002623671,
   0.0166947,
   0.01717387,
   0.002974077,
   0.008260218,
   0.010738,
   0.005384845,
   0,
   0.0144242,
   0,
   0,
   0.002312899,
   0.01204861,
   0.01376569,
   0.01199872,
   0.005367092,
   0.001223983,
   0.002457009,
   0.01139789,
   0.006156138,
   0.002930407,
   0,
   0.01751816,
   0.0008330155,
   0.02345816,
   0.00213251,
   0.001995,
   0.01025247,
   0.004406787,
   0.003115254,
   0.009403655,
   0,
   0.00455482,
   0.00219226,
   0.0125454,
   0.00885844,
   0.002566424,
   0.05351784,
   0.008499323,
   0.02073379,
   0.03677848,
   0.01343562,
   0.109336,
   0.002356944,
   0.01242847,
   0,
   0.01870507,
   0,
   0.008926831,
   0.1042859,
   0.02627536,
   0.2100192,
   0.002377433,
   0.0003290531,
   0,
   0.002530189,
   0.007389502,
   0.01493485,
   0.0105237,
   0.09110017,
   0.001616032,
   0.001493652,
   0.001777627,
   0.01083411,
   0.01703466,
   0.04670481,
   0.01323949,
   0.01904699,
   0.01272541,
   0.001965589,
   0.01009159,
   0.006863428,
   0,
   0.03836371,
   0.002626332,
   0.01003464,
   0.009227912,
   0.01789041,
   0.01378036,
   0,
   0.01581924,
   0.001437698,
   0.007610622,
   0.005375428,
   0.01170471,
   0.008729248,
   0.02588461,
   0.01225641,
   0.006531973,
   0.0013623,
   0.001855831,
   0.006890023,
   0.01468612,
   0,
   0.007897683,
   0.01174122,
   0.02013256,
   0,
   0.01689774,
   0.01173339,
   0.01644214,
   0.001774765,
   0.02165161,
   0.003491101};
   TGraphErrors *gre = new TGraphErrors(166,Graph0_fx1020,Graph0_fy1020,Graph0_fex1020,Graph0_fey1020);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph01020 = new TH1F("Graph_Graph01020","",166,342833,344849);
   Graph_Graph01020->SetMinimum(0);
   Graph_Graph01020->SetMaximum(8.89392);
   Graph_Graph01020->SetDirectory(0);
   Graph_Graph01020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01020->SetLineColor(ci);
   Graph_Graph01020->GetXaxis()->SetTitle("Run Number");
   Graph_Graph01020->GetXaxis()->SetNoExponent();
   Graph_Graph01020->GetXaxis()->SetNdivisions(5);
   Graph_Graph01020->GetXaxis()->SetLabelFont(42);
   Graph_Graph01020->GetXaxis()->SetLabelSize(0.04);
   Graph_Graph01020->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01020->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01020->GetXaxis()->SetTitleFont(42);
   Graph_Graph01020->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph01020->GetYaxis()->SetLabelFont(42);
   Graph_Graph01020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01020->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01020->GetYaxis()->SetTitleFont(42);
   Graph_Graph01020->GetZaxis()->SetLabelFont(42);
   Graph_Graph01020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01020);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TEC 2");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
