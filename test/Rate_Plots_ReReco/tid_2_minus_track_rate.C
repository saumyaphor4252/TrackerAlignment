void tid_2_minus_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Oct  3 21:03:43 2021) by ROOT version 6.22/09
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,856,812);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.1065199,344951,0.7165882);
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
   
   Double_t Graph0_fx1016[158] = {
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
   Double_t Graph0_fy1016[158] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02655961,
   0.03616372,
   0.03833269,
   0.02995775,
   0.03550946,
   0.02040439,
   0.01766957,
   0.01579381,
   0.01594441,
   0.06082859,
   0.00248392,
   0.01483216,
   0.0243533,
   0.03831278,
   0,
   0.05871139,
   0.05315788,
   0.05476684,
   0.08127443,
   0.05452286,
   0.02736176,
   0.04430899,
   0.05040101,
   0.05119914,
   0.05399195,
   0.038745,
   0.04988803,
   0.03984625,
   0.04648279,
   0.05368926,
   0.05283899,
   0.04629093,
   0,
   0.07109474,
   0.03393671,
   0.05544699,
   0.00213629,
   0.02321623,
   0.04959476,
   0.01344757,
   0.01229644,
   0.028302,
   0.03026169,
   0.02428557,
   0.01738096,
   0,
   0.05884336,
   0.03435464,
   0.04467713,
   0.004694326,
   0.002007056,
   0,
   0.007427699,
   0.007466939,
   0.001164119,
   0.001416463,
   0.0508947,
   0.05813194,
   0.06113288,
   0.003528958,
   0.05927208,
   0.04376532,
   0.0007324868,
   0.07018203,
   0.03868193,
   0.0280205,
   0.06287938,
   0.03538778,
   0.03159219,
   0.056074,
   0.004335841,
   0.004743167,
   0.016509,
   0.04601892,
   0.05152203,
   0.02039809,
   0.01103523,
   0.04142146,
   0.04171951,
   0.06768851,
   0.08131583,
   0.04540214,
   0.05368379,
   0,
   0.2929541,
   0.03353514,
   0.001714032,
   0.05305077,
   0.04853148,
   0.0382464,
   0,
   0.0009211561,
   0,
   0.03304847,
   0.03644969,
   0.04032378,
   0.04060158,
   0,
   0.0324092,
   0.04135594,
   0.03998033,
   0.0438605,
   0.04327205,
   0,
   0.02626933,
   0.04335939,
   0.05069265,
   0.04158792,
   0.0290691,
   0.04085775,
   0.03068899,
   0,
   0.0383784,
   0,
   0.02933659,
   0.03447266,
   0.02437563,
   0.04030873,
   0.02872521,
   0,
   0.02496324,
   0.02678132,
   0.02631916,
   0.03497573,
   0.02478216,
   0.0233693,
   0.07188677,
   0.02870473,
   0.03580933,
   0,
   0.02744411,
   0.03129685,
   0.03498595,
   0,
   0.03153507,
   0.02799215,
   0.04609529,
   0,
   0.0206888,
   0.03555554,
   0.03480611,
   0.0333695,
   0.0364503};
   Double_t Graph0_fex1016[158] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1016[158] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01187782,
   0.004043227,
   0.006479408,
   0.01339751,
   0.002421725,
   0.007712133,
   0.008834784,
   0.0005373162,
   0.001443539,
   0.01433744,
   0.001756397,
   0.006055204,
   0.00558703,
   0.0009918803,
   0,
   0.006483589,
   0.002340145,
   0.001341776,
   0.01732777,
   0.003330513,
   0.0007882254,
   0.001765312,
   0.004544505,
   0.001490465,
   0.01799732,
   0.02236943,
   0.002516518,
   0.002120802,
   0.001017492,
   0.002147571,
   0.005870998,
   0.003349495,
   0,
   0.02687129,
   0.007076294,
   0.003066226,
   0.00213629,
   0.0007450444,
   0.001325003,
   0.007763959,
   0.005499135,
   0.002127308,
   0.004974991,
   0.002966954,
   0.00038865,
   0,
   0.007298621,
   0.0007100431,
   0.00267475,
   0.00271027,
   0.002007056,
   0,
   0.004288384,
   0.005279923,
   0.001164119,
   0.001416463,
   0.004665509,
   0.002554171,
   0.001249694,
   0.0009431538,
   0.001040021,
   0.005268725,
   0.0005179463,
   0.01109675,
   0.0005730185,
   0.000386646,
   0.0043599,
   0.001082342,
   0.0006867868,
   0.004313385,
   0.002167921,
   0.001369234,
   0.0003127176,
   0.004824094,
   0.003872633,
   0.0004536271,
   0.01103523,
   0.003370831,
   0.01475007,
   0.006768851,
   0.08131583,
   0.0009518875,
   0.005658769,
   0,
   0.2929541,
   0.008133465,
   0.0009895966,
   0.004904546,
   0.04853148,
   0.01104078,
   0,
   0.0003760604,
   0,
   0.0009604517,
   0.003384269,
   0.007362082,
   0.004852817,
   0,
   0.0005882866,
   0.0007037844,
   0.000828441,
   0.00509868,
   0.008177649,
   0,
   0.01857522,
   0.006690499,
   0.01034759,
   0.006066222,
   0.0006944876,
   0.00566595,
   0.003616732,
   0,
   0.0383784,
   0,
   0.001409827,
   0.00566727,
   0.004526441,
   0.01163613,
   0.007181301,
   0,
   0.00789407,
   0.00073161,
   0.004161424,
   0.003140913,
   0.006398726,
   0.004197251,
   0.02717064,
   0.005859328,
   0.003494633,
   0,
   0.0006167606,
   0.002645067,
   0.006387532,
   0,
   0.003324088,
   0.004665358,
   0.009409162,
   0,
   0.003050397,
   0.006842666,
   0.0007655705,
   0.008918375,
   0.001552835};
   TGraphErrors *gre = new TGraphErrors(158,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph01016 = new TH1F("Graph_Graph01016","",158,342833,344849);
   Graph_Graph01016->SetMinimum(0);
   Graph_Graph01016->SetMaximum(0.644499);
   Graph_Graph01016->SetDirectory(0);
   Graph_Graph01016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01016->SetLineColor(ci);
   Graph_Graph01016->GetXaxis()->SetTitle("Run Number");
   Graph_Graph01016->GetXaxis()->SetNoExponent();
   Graph_Graph01016->GetXaxis()->SetNdivisions(5);
   Graph_Graph01016->GetXaxis()->SetLabelFont(42);
   Graph_Graph01016->GetXaxis()->SetLabelSize(0.04);
   Graph_Graph01016->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01016->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01016->GetXaxis()->SetTitleFont(42);
   Graph_Graph01016->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph01016->GetYaxis()->SetLabelFont(42);
   Graph_Graph01016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01016->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01016->GetYaxis()->SetTitleFont(42);
   Graph_Graph01016->GetZaxis()->SetLabelFont(42);
   Graph_Graph01016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01016);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TID 2-");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
