void tec_5_plus_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Oct  3 21:03:46 2021) by ROOT version 6.22/09
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,856,812);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.06995612,344951,0.4706137);
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
   
   Double_t Graph0_fx1036[158] = {
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
   Double_t Graph0_fy1036[158] = {
   0.0368762,
   0.02258836,
   0.03049834,
   0.03696719,
   0.04178543,
   0,
   0.01376878,
   0.02889021,
   0.03877449,
   0.02842389,
   0.02544416,
   0.02787449,
   0.03085089,
   0.03052246,
   0.02746036,
   0.04780731,
   0.03164326,
   0.02847572,
   0.01797465,
   0.02262696,
   0.02914912,
   0.02650435,
   0.01418518,
   0.01633649,
   0.05744923,
   0.0124196,
   0.01236013,
   0.03717082,
   0.05076701,
   0,
   0.09307903,
   0.08952364,
   0.09523381,
   0.1034402,
   0.08809104,
   0.04593596,
   0.07764624,
   0.08195285,
   0.08686499,
   0.06599016,
   0.142065,
   0.08289284,
   0.06671143,
   0.08187385,
   0.09011206,
   0.07567065,
   0.07900966,
   0.1392791,
   0.06093835,
   0.09148158,
   0.08579871,
   0.0213629,
   0.04148318,
   0.08290572,
   0.04034272,
   0.01721502,
   0.0564441,
   0.06052338,
   0.0351597,
   0.02995608,
   0.03428473,
   0.1276448,
   0.06209077,
   0.09143599,
   0.02660118,
   0.01806351,
   0.01122709,
   0.03961439,
   0.01120041,
   0.01047707,
   0.005665852,
   0.08639268,
   0.1222117,
   0.1167477,
   0.008570327,
   0.1119928,
   0.063428,
   0.009888571,
   0.1087821,
   0.07585292,
   0.05510734,
   0.1100389,
   0.06971624,
   0.06167644,
   0.06901415,
   0.002167921,
   0.0197632,
   0.02785265,
   0.07079834,
   0.08441462,
   0.03331083,
   0.1213875,
   0.08009978,
   0.1199436,
   0.08664129,
   0.2439475,
   0.07803181,
   0.08828002,
   0,
   0,
   0.05326169,
   0.003428063,
   0.04080829,
   0.1455944,
   0.0414336,
   0.003506648,
   0.001074682,
   0,
   0.04463218,
   0.04147724,
   0.05510917,
   0.04930192,
   0.181514,
   0.03893376,
   0.05105716,
   0.04928447,
   0.05571469,
   0.05409006,
   0.01109325,
   0.05253867,
   0.04955359,
   0.03801949,
   0.03981822,
   0.03321708,
   0.01964315,
   0.02770533,
   0,
   0,
   0,
   0.02323891,
   0.01304371,
   0.02941887,
   0.01007718,
   0.01795325,
   0.004265421,
   0.02246692,
   0.02300396,
   0.01513351,
   0.02284705,
   0.01817358,
   0.02110776,
   0.02053908,
   0.02990076,
   0.033081,
   0.001945935,
   0.03413881,
   0.03889752,
   0.04898034,
   0,
   0.04695222,
   0.04509846,
   0.04225402,
   0,
   0.03463125,
   0.06189297,
   0.04371391,
   0.06912254,
   0.04763016};
   Double_t Graph0_fex1036[158] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1036[158] = {
   0.01505465,
   0.007143068,
   0.002099592,
   0.005030597,
   0.003752443,
   0,
   0.0003911648,
   0.002343305,
   0.01001153,
   0.001947573,
   0.004808494,
   0.001548583,
   0.004650946,
   0.002238016,
   0.0008474451,
   0.01593577,
   0.003782092,
   0.005584547,
   0.01037767,
   0.001933151,
   0.009217762,
   0.01082036,
   0.0005092183,
   0.00146118,
   0.01393348,
   0.003927422,
   0.005527619,
   0.006902449,
   0.001141769,
   0,
   0.008163571,
   0.003036882,
   0.001769363,
   0.01954836,
   0.004233385,
   0.001021304,
   0.002336877,
   0.005794942,
   0.00194139,
   0.01989678,
   0.04283421,
   0.003243847,
   0.002744142,
   0.001350385,
   0.002782244,
   0.007025843,
   0.00437594,
   0.06228752,
   0.02487798,
   0.01161817,
   0.003814218,
   0.006755541,
   0.000995915,
   0.001713133,
   0.01344757,
   0.006506664,
   0.003004216,
   0.0070357,
   0.003569927,
   0.0005102281,
   0.01212148,
   0.01074963,
   0.000954565,
   0.003826477,
   0.006451734,
   0.006021169,
   0.007938749,
   0.009903598,
   0.006466559,
   0.003492356,
   0.002832926,
   0.006078568,
   0.003703386,
   0.001726992,
   0.001469799,
   0.001429592,
   0.0063428,
   0.001903056,
   0.01381535,
   0.0008024181,
   0.000542226,
   0.005767606,
   0.001519164,
   0.0009596033,
   0.00478527,
   0.001532951,
   0.002794938,
   0.0004061862,
   0.005983552,
   0.004956997,
   0.0005796915,
   0.03659971,
   0.004687485,
   0.02500997,
   0.007658081,
   0.1408432,
   0.00124791,
   0.007256573,
   0,
   0,
   0.01025022,
   0.001399501,
   0.004301571,
   0.08405898,
   0.01149161,
   0.001568221,
   0.0004061917,
   0,
   0.001116153,
   0.00361013,
   0.008606607,
   0.005347544,
   0.1283498,
   0.0006447895,
   0.0007819861,
   0.0009198001,
   0.005746532,
   0.00914289,
   0.01109325,
   0.02626933,
   0.007152445,
   0.008961279,
   0.00593575,
   0.0007423855,
   0.00392863,
   0.003436424,
   0,
   0,
   0,
   0.001254783,
   0.003486078,
   0.004972696,
   0.005818064,
   0.005677317,
   0.002462642,
   0.007488972,
   0.000678055,
   0.003155556,
   0.002538561,
   0.005479541,
   0.003988991,
   0.01452332,
   0.005980151,
   0.003358867,
   0.0009729675,
   0.0006878856,
   0.002948813,
   0.00755783,
   0,
   0.004056054,
   0.005921719,
   0.009008587,
   0,
   0.003946597,
   0.009028018,
   0.0008579606,
   0.01283573,
   0.001775071};
   TGraphErrors *gre = new TGraphErrors(158,Graph0_fx1036,Graph0_fy1036,Graph0_fex1036,Graph0_fey1036);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph01036 = new TH1F("Graph_Graph01036","",158,342833,344849);
   Graph_Graph01036->SetMinimum(0);
   Graph_Graph01036->SetMaximum(0.4232697);
   Graph_Graph01036->SetDirectory(0);
   Graph_Graph01036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01036->SetLineColor(ci);
   Graph_Graph01036->GetXaxis()->SetTitle("Run Number");
   Graph_Graph01036->GetXaxis()->SetNoExponent();
   Graph_Graph01036->GetXaxis()->SetNdivisions(5);
   Graph_Graph01036->GetXaxis()->SetLabelFont(42);
   Graph_Graph01036->GetXaxis()->SetLabelSize(0.04);
   Graph_Graph01036->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01036->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01036->GetXaxis()->SetTitleFont(42);
   Graph_Graph01036->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph01036->GetYaxis()->SetLabelFont(42);
   Graph_Graph01036->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01036->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01036->GetYaxis()->SetTitleFont(42);
   Graph_Graph01036->GetZaxis()->SetLabelFont(42);
   Graph_Graph01036->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01036);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TEC 5+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
