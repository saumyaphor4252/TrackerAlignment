void pixel_hit_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Oct  3 21:27:20 2021) by ROOT version 6.22/09
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,856,812);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.5904523,344951,3.972133);
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
   
   Double_t Graph0_fx1004[166] = {
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
   Double_t Graph0_fy1004[166] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.07645024,
   0.08221967,
   0.07981263,
   0.2522559,
   0.2942823,
   0.3319719,
   0.2995936,
   0.311162,
   0.2219861,
   0.3387822,
   0.2942186,
   0.31206,
   0,
   0,
   0,
   0,
   0,
   0.3136054,
   0.6929402,
   0.5992622,
   0.6286909,
   0.647175,
   0,
   0.1811438,
   0.1897894,
   0.1988618,
   0.5721697,
   0.6656357,
   0.8720803,
   0.5544903,
   0.08495142,
   0.1052103,
   0.4167383,
   0,
   0.4171025,
   0.6138448,
   0.4251877,
   0.02065713,
   0.02425595,
   0,
   0.02181509,
   0.02225609,
   0,
   0,
   0,
   0,
   0.5946265,
   0.6666397,
   0.00834735,
   0.8481184,
   0.7460631,
   0.7635881,
   0.00589991,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.716594,
   0.7521938,
   0.7702907,
   0,
   0,
   0,
   0.6696633,
   0.7669089,
   0.7858616,
   0.773089,
   0.7651954,
   0.7806379,
   0,
   0,
   0.01145364,
   0.7284161,
   0.7767795,
   0.7451907,
   0.7409262,
   0.8034653,
   0.7411977,
   0,
   0.4203255,
   0.6619853,
   1.325629,
   0.7513426,
   0.6739622,
   0,
   0.5244251,
   0,
   0,
   0,
   0,
   2.52023,
   0,
   0.0007599157,
   0,
   0.6761195,
   0,
   0.6561552,
   0.7529809,
   1.385202,
   0.6657335,
   0.659912,
   0.6664857,
   0.6509119,
   0.6143001,
   0.7114959,
   0.6621417,
   0.731979,
   0,
   0.6818531,
   0,
   0,
   0,
   0,
   0,
   0.7397641,
   0.7618161,
   0.6964799,
   0.715794,
   0,
   0.6513511,
   0.6637934,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.6988965,
   0,
   0,
   0,
   0,
   0,
   0.8734016,
   0,
   0.5751387,
   0.6938373,
   0.6042389,
   0.6826708,
   0.7256701,
   0.6920513};
   Double_t Graph0_fex1004[166] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1004[166] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.007322605,
   0.003673304,
   0.001444706,
   0.03641001,
   0.01153383,
   0.01894664,
   0.04236893,
   0.007168795,
   0.02546355,
   0.03764247,
   0.002984723,
   0.006384546,
   0,
   0,
   0,
   0,
   0,
   0.002802171,
   0.02227194,
   0.007857192,
   0.004545836,
   0.04892183,
   0,
   0.00275921,
   0.003804165,
   0.009020554,
   0.004981607,
   0.06317935,
   0.1165366,
   0.008394626,
   0.00311447,
   0.001563008,
   0.005982779,
   0,
   0.01005431,
   0.1308721,
   0.06897456,
   0.00552085,
   0.002028384,
   0,
   0.001047158,
   0.0008895322,
   0,
   0,
   0,
   0,
   0.02051656,
   0.004103505,
   0.005902468,
   0.02770682,
   0.004393778,
   0.01251447,
   0.002949955,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01744679,
   0.009184028,
   0.004434508,
   0,
   0,
   0,
   0.03421819,
   0.003197453,
   0.00302752,
   0.01529147,
   0.006674343,
   0.004708451,
   0,
   0,
   0.002126887,
   0.003635859,
   0.02097108,
   0.01471663,
   0.004311282,
   0.09468928,
   0.01425908,
   0,
   0.04699382,
   0.02116795,
   0.289276,
   0.003993736,
   0.0200403,
   0,
   0.03252347,
   0,
   0,
   0,
   0,
   0.7275277,
   0,
   0.0003799578,
   0,
   0.004745429,
   0,
   0.02937354,
   0.02065482,
   0.2375602,
   0.003051897,
   0.002815564,
   0.003389865,
   0.0196436,
   0.03001052,
   0.09423994,
   0.02589179,
   0.03923819,
   0,
   0.003933928,
   0,
   0,
   0,
   0,
   0,
   0.02625324,
   0.02507548,
   0.04852606,
   0.03539374,
   0,
   0.03963996,
   0.003682233,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.003618749,
   0,
   0,
   0,
   0,
   0,
   0.0409457,
   0,
   0.03010413,
   0.02290004,
   0.02820346,
   0.003466138,
   0.04128193,
   0.006764367};
   TGraphErrors *gre = new TGraphErrors(166,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph01004 = new TH1F("Graph_Graph01004","",166,342833,344849);
   Graph_Graph01004->SetMinimum(0);
   Graph_Graph01004->SetMaximum(3.572534);
   Graph_Graph01004->SetDirectory(0);
   Graph_Graph01004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01004->SetLineColor(ci);
   Graph_Graph01004->GetXaxis()->SetTitle("Run Number");
   Graph_Graph01004->GetXaxis()->SetNoExponent();
   Graph_Graph01004->GetXaxis()->SetNdivisions(5);
   Graph_Graph01004->GetXaxis()->SetLabelFont(42);
   Graph_Graph01004->GetXaxis()->SetLabelSize(0.04);
   Graph_Graph01004->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01004->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01004->GetXaxis()->SetTitleFont(42);
   Graph_Graph01004->GetYaxis()->SetTitle("Hit Rate (Hz)");
   Graph_Graph01004->GetYaxis()->SetLabelFont(42);
   Graph_Graph01004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01004->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01004->GetYaxis()->SetTitleFont(42);
   Graph_Graph01004->GetZaxis()->SetLabelFont(42);
   Graph_Graph01004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01004);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"PIXEL");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
