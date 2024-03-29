void fpix_hit_rate_disk1_minus()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Oct  3 21:27:22 2021) by ROOT version 6.22/09
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,856,812);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.01361602,344951,0.09159862);
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
   
   Double_t Graph0_fx1010[166] = {
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
   Double_t Graph0_fy1010[166] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01402757,
   0.01509822,
   0.01362463,
   0.015766,
   0.01446549,
   0.009732076,
   0,
   0.01569023,
   0.01460435,
   0.008364993,
   0.01734972,
   0.01632796,
   0,
   0,
   0,
   0,
   0,
   0.0157992,
   0.002863389,
   0.006593224,
   0.006836812,
   0.007396285,
   0,
   0.0200477,
   0.02035908,
   0.0233233,
   0.002125251,
   0,
   0,
   0.003050142,
   0.01404439,
   0.01578967,
   0.00068712,
   0,
   0.0002423606,
   0,
   0,
   0.002951019,
   0.006106393,
   0,
   0.004825458,
   0.005439587,
   0,
   0,
   0,
   0,
   0.01840511,
   0.01813607,
   0.00834735,
   0.02896456,
   0.02031283,
   0.01989472,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01699097,
   0.01704434,
   0.02208271,
   0,
   0,
   0,
   0.01748468,
   0.02112972,
   0.02170573,
   0.02177716,
   0.01880387,
   0.0219242,
   0,
   0,
   0.000789906,
   0.02034418,
   0.03170529,
   0.02644787,
   0.01899039,
   0,
   0.01152121,
   0,
   0.03152441,
   0.01556816,
   0,
   0.02156822,
   0.01251389,
   0,
   0.03832337,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0003799578,
   0,
   0.01735262,
   0,
   0.02235398,
   0.02039678,
   0,
   0.01613128,
   0.01733449,
   0.01600007,
   0.02430545,
   0.01759332,
   0.04992954,
   0.02328633,
   0.004206776,
   0,
   0.01745373,
   0,
   0,
   0,
   0,
   0,
   0.01211201,
   0.008253695,
   0.04057165,
   0.008750537,
   0,
   0.01447447,
   0.0164636,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01558933,
   0,
   0,
   0,
   0,
   0,
   0.01727608,
   0,
   0.01260578,
   0.02116279,
   0.009214972,
   0.01719392,
   0.03052981,
   0.0159343};
   Double_t Graph0_fex1010[166] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1010[166] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.003136659,
   0.001574099,
   0.000596906,
   0.009102501,
   0.002557161,
   0.003244025,
   0,
   0.001609784,
   0.006531262,
   0.005914943,
   0.0007247951,
   0.001460417,
   0,
   0,
   0,
   0,
   0,
   0.0006289563,
   0.001431695,
   0.000824153,
   0.0004740476,
   0.005229963,
   0,
   0.0009179211,
   0.001245956,
   0.003089246,
   0.0003036073,
   0,
   0,
   0.0006226076,
   0.00126634,
   0.0006055062,
   0.0002429336,
   0,
   0.0002423606,
   0,
   0,
   0.002086685,
   0.001017732,
   0,
   0.0004924963,
   0.0004397645,
   0,
   0,
   0,
   0,
   0.003609538,
   0.0006768323,
   0.005902468,
   0.005120259,
   0.000724996,
   0.002020003,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.002686508,
   0.001382479,
   0.0007508345,
   0,
   0,
   0,
   0.005529142,
   0.0005307367,
   0.0005031542,
   0.002566462,
   0.001046275,
   0.0007890693,
   0,
   0,
   0.0005585479,
   0.0006076275,
   0.004236797,
   0.002772491,
   0.0006902175,
   0,
   0.001777761,
   0,
   0.01286979,
   0.003246186,
   0,
   0.0006766553,
   0.002730754,
   0,
   0.008791985,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0002686708,
   0,
   0.0007602322,
   0,
   0.005421637,
   0.003399463,
   0,
   0.0004750661,
   0.0004563289,
   0.0005252281,
   0.003795874,
   0.005078754,
   0.02496477,
   0.004855535,
   0.00297464,
   0,
   0.0006293977,
   0,
   0,
   0,
   0,
   0,
   0.003359266,
   0.002610048,
   0.01171203,
   0.003913359,
   0,
   0.005909177,
   0.0005799054,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0005404626,
   0,
   0,
   0,
   0,
   0,
   0.005758692,
   0,
   0.004456816,
   0.003999392,
   0.003482932,
   0.0005500823,
   0.008467446,
   0.001026419};
   TGraphErrors *gre = new TGraphErrors(166,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph01010 = new TH1F("Graph_Graph01010","",166,342833,344849);
   Graph_Graph01010->SetMinimum(0);
   Graph_Graph01010->SetMaximum(0.08238374);
   Graph_Graph01010->SetDirectory(0);
   Graph_Graph01010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01010->SetLineColor(ci);
   Graph_Graph01010->GetXaxis()->SetTitle("Run Number");
   Graph_Graph01010->GetXaxis()->SetNoExponent();
   Graph_Graph01010->GetXaxis()->SetNdivisions(5);
   Graph_Graph01010->GetXaxis()->SetLabelFont(42);
   Graph_Graph01010->GetXaxis()->SetLabelSize(0.04);
   Graph_Graph01010->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01010->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01010->GetXaxis()->SetTitleFont(42);
   Graph_Graph01010->GetYaxis()->SetTitle("Hit Rate (Hz)");
   Graph_Graph01010->GetYaxis()->SetLabelFont(42);
   Graph_Graph01010->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01010->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01010->GetYaxis()->SetTitleFont(42);
   Graph_Graph01010->GetZaxis()->SetLabelFont(42);
   Graph_Graph01010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01010);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"FPIX disk 1-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
