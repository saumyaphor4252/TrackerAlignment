void tec_7_plus_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Oct  3 21:08:20 2021) by ROOT version 6.22/09
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,856,812);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.02392215,344951,0.1609307);
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
   
   Double_t Graph0_fx1040[166] = {
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
   Double_t Graph0_fy1040[166] = {
   0.0303967,
   0.0170474,
   0.01330956,
   0.02124032,
   0.01916314,
   0.02114655,
   0,
   0.01466437,
   0,
   0,
   0.01676005,
   0.02112182,
   0.01534237,
   0.01433013,
   0.0164458,
   0.01472895,
   0.01723167,
   0.01516754,
   0.015766,
   0.01717777,
   0.01730147,
   0.01198374,
   0.01502959,
   0.008762608,
   0.004182497,
   0.01501826,
   0.0154136,
   0.03720467,
   0.03423132,
   0.0334637,
   0.02471914,
   0.02267206,
   0.02406186,
   0.05726778,
   0.05089144,
   0.05334685,
   0.05547214,
   0.04105811,
   0.0392128,
   0.04216694,
   0.04541905,
   0.03756056,
   0.03598031,
   0.09343717,
   0.03787259,
   0.03151424,
   0.03701284,
   0.04191432,
   0.03391579,
   0.03732353,
   0,
   0.0447566,
   0.04131426,
   0.03918269,
   0.008579102,
   0.04076507,
   0.03925035,
   0.008952295,
   0.00730464,
   0.03664409,
   0.04465398,
   0.03893388,
   0.03801503,
   0.01252103,
   0.07874739,
   0.0569018,
   0.06009436,
   0.01032484,
   0,
   0,
   0.0072121,
   0.00530008,
   0.005344633,
   0.001635466,
   0.02272952,
   0.00561982,
   0.009598979,
   0,
   0,
   0.001418555,
   0.05224722,
   0.05752466,
   0.05749162,
   0,
   0.05810803,
   0.001117608,
   0.05944791,
   0.05909657,
   0.05853898,
   0.06109702,
   0.06182574,
   0.05949638,
   0.0384704,
   0,
   0.007504107,
   0.03780279,
   0.03623461,
   0.03807331,
   0.0383069,
   0.02231848,
   0.0397756,
   0,
   0.04203255,
   0.03790509,
   0.06312519,
   0.0373835,
   0.04648015,
   0,
   0.03227231,
   0,
   0.02945743,
   0.03687063,
   0.0286772,
   0,
   0,
   0,
   0,
   0.0313413,
   0.02859526,
   0.03813327,
   0.02832885,
   0.04074123,
   0.03280819,
   0.0314015,
   0.03144842,
   0.03438332,
   0.03372053,
   0.02496477,
   0.03037347,
   0.01893049,
   0.02534556,
   0.02569262,
   0.01335569,
   0.01520693,
   0,
   0,
   0.01307022,
   0.008385235,
   0.01485665,
   0.003380971,
   0.008750537,
   0,
   0.01447447,
   0.01325667,
   0.01085738,
   0.01128547,
   0.01147291,
   0.01427459,
   0.009783461,
   0.01685315,
   0.01713439,
   0.00068115,
   0.0198614,
   0.02130805,
   0.01898161,
   0,
   0.02032338,
   0.02021711,
   0.02303477,
   0,
   0.02206011,
   0.02569768,
   0.03685989,
   0.01967534,
   0.04227205,
   0.02062864};
   Double_t Graph0_fex1040[166] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1040[166] = {
   0.01359382,
   0.006959574,
   0.005433605,
   0.001751872,
   0.003621494,
   0.002664215,
   0,
   0.0005673816,
   0,
   0,
   0.001786627,
   0.00746769,
   0.001430683,
   0.003582533,
   0.001215709,
   0.00321412,
   0.001681639,
   0.0006297977,
   0.009102501,
   0.002786602,
   0.004325367,
   0.008473786,
   0.001575529,
   0.005059094,
   0.004182497,
   0.0006743397,
   0.001418936,
   0.01121763,
   0.006469111,
   0.01115457,
   0.007816878,
   0.005343857,
   0.000776189,
   0.006402733,
   0.002289714,
   0.001324188,
   0.01432285,
   0.002881715,
   0.001283769,
   0.001793121,
   0.004310986,
   0.00127636,
   0.0146889,
   0.03814557,
   0.0021939,
   0.001896934,
   0.000927061,
   0.001897372,
   0.004703274,
   0.003007615,
   0,
   0.0223783,
   0.007807661,
   0.002578031,
   0.004289551,
   0.001431455,
   0.001181297,
   0.006330228,
   0.004217336,
   0.003142205,
   0.00744233,
   0.005249843,
   0.0009799121,
   0.007229017,
   0.008442606,
   0.001213426,
   0.00351075,
   0.003902424,
   0,
   0,
   0.0072121,
   0.00530008,
   0.005344633,
   0.001635466,
   0.006853207,
   0.00561982,
   0.00479949,
   0,
   0,
   0.001418555,
   0.004710973,
   0.002539776,
   0.001211492,
   0,
   0.007207414,
   0.000645251,
   0.01019523,
   0.000887592,
   0.0008262977,
   0.004298771,
   0.001897173,
   0.001299866,
   0.003571886,
   0,
   0.00172156,
   0.000828284,
   0.004529327,
   0.003326481,
   0.0009802966,
   0.01578155,
   0.003303184,
   0,
   0.01486075,
   0.005065281,
   0.06312519,
   0.0008908413,
   0.00526284,
   0,
   0.008068079,
   0,
   0.003653744,
   0.03687063,
   0.009559066,
   0,
   0,
   0,
   0,
   0.001021697,
   0.002997598,
   0.00708117,
   0.004006305,
   0.04074123,
   0.0006775024,
   0.0006141827,
   0.0007363535,
   0.004514751,
   0.007031217,
   0.01765276,
   0.005545412,
   0.006310164,
   0.004706553,
   0.0007636339,
   0.003239231,
   0.002534489,
   0,
   0,
   0.0009408153,
   0.002795078,
   0.003501746,
   0.003380971,
   0.003913359,
   0,
   0.005909177,
   0.0005203697,
   0.002633301,
   0.00178439,
   0.004336351,
   0.003274815,
   0.009783461,
   0.004351464,
   0.002399295,
   0.00068115,
   0.0006100381,
   0.002367561,
   0.004603716,
   0,
   0.00266859,
   0.003964901,
   0.006649565,
   0,
   0.005895813,
   0.004407115,
   0.006965864,
   0.0005884388,
   0.009963616,
   0.001167867};
   TGraphErrors *gre = new TGraphErrors(166,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","",166,342833,344849);
   Graph_Graph01040->SetMinimum(0);
   Graph_Graph01040->SetMaximum(0.144741);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("Run Number");
   Graph_Graph01040->GetXaxis()->SetNoExponent();
   Graph_Graph01040->GetXaxis()->SetNdivisions(5);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetLabelSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TEC 7+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
