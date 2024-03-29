void tid_1_plus_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Oct  3 21:08:15 2021) by ROOT version 6.22/09
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,856,812);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.07636426,344951,0.513723);
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
   
   Double_t Graph0_fx1013[166] = {
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
   Double_t Graph0_fy1013[166] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.04204265,
   0.06825902,
   0.05731112,
   0.05392684,
   0.06044868,
   0.0379713,
   0.05855495,
   0.05731767,
   0.06113189,
   0.07779158,
   0.08068811,
   0.07808196,
   0.06921359,
   0.07935223,
   0.07714317,
   0.07086888,
   0.09045079,
   0.0869064,
   0.08875542,
   0.08353203,
   0.08103137,
   0.08265635,
   0.08306367,
   0.08180048,
   0.08395405,
   0.1245829,
   0.07993913,
   0.06873758,
   0.08231527,
   0.0815955,
   0.09522511,
   0.06931512,
   0.1395102,
   0.1230807,
   0.09443259,
   0.08515025,
   0.008579102,
   0.08484764,
   0.08123827,
   0.008952295,
   0.00973952,
   0.08460474,
   0.07690407,
   0.07362042,
   0.08267322,
   0.0166947,
   0.09956566,
   0.09444819,
   0.08552679,
   0.01622475,
   0.00380766,
   0,
   0.0072121,
   0,
   0,
   0.001635466,
   0.006198959,
   0.00561982,
   0.009598979,
   0.003795107,
   0.001223983,
   0,
   0.0853796,
   0.09665937,
   0.09410041,
   0,
   0.08939696,
   0.001117608,
   0.09616574,
   0.09253085,
   0.09431085,
   0.09739228,
   0.09704661,
   0.09297907,
   0.09153301,
   0,
   0.007504107,
   0.08302822,
   0.08152788,
   0.07759981,
   0.07939839,
   0.04463696,
   0.08174571,
   0,
   0.05254068,
   0.07445642,
   0.2525008,
   0.08007415,
   0.0935562,
   0,
   0.06252761,
   0,
   0.0670723,
   0.03687063,
   0.05416804,
   0.2100192,
   0,
   0,
   0,
   0.06301567,
   0.06064708,
   0.04996773,
   0.05892402,
   0.08148247,
   0.06406341,
   0.06307929,
   0.06287959,
   0.05987441,
   0.06744106,
   0.04992954,
   0.0577096,
   0.06520502,
   0.0638009,
   0.05957874,
   0.06049343,
   0.05956048,
   0,
   0.07672741,
   0.05444798,
   0.05776495,
   0.05364902,
   0.04733359,
   0.06650408,
   0,
   0.05066064,
   0.05472205,
   0.04406818,
   0.05078462,
   0.0491696,
   0.05183929,
   0.03913385,
   0.05617716,
   0.05442689,
   0,
   0.07146357,
   0.06813314,
   0.05359513,
   0,
   0.07008061,
   0.05831857,
   0.07870213,
   0,
   0.07405895,
   0.06575582,
   0.06187196,
   0.06750858,
   0.04696894,
   0.07153908};
   Double_t Graph0_fex1013[166] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1013[166] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01486432,
   0.005554841,
   0.007872287,
   0.01797561,
   0.003159703,
   0.01053134,
   0.01564947,
   0.001317387,
   0.002825823,
   0.01622067,
   0.00993202,
   0.01703888,
   0.01308014,
   0.009997441,
   0.001389798,
   0.00712259,
   0.003052566,
   0.001690134,
   0.01811713,
   0.004110342,
   0.001845439,
   0.002510508,
   0.005829927,
   0.001883584,
   0.02243767,
   0.0440467,
   0.003187382,
   0.002801534,
   0.001382523,
   0.002647308,
   0.007880887,
   0.004098689,
   0.06239085,
   0.03711022,
   0.01180407,
   0.003800442,
   0.004289551,
   0.002065159,
   0.001699486,
   0.006330228,
   0.00486976,
   0.004774522,
   0.009766827,
   0.007219076,
   0.00144508,
   0.00834735,
   0.009493214,
   0.001563318,
   0.004188265,
   0.004891947,
   0.00380766,
   0,
   0.0072121,
   0,
   0,
   0.001635466,
   0.00357897,
   0.00561982,
   0.00479949,
   0.003795107,
   0.001223983,
   0,
   0.006022213,
   0.003292231,
   0.001549936,
   0,
   0.008939696,
   0.000645251,
   0.01296699,
   0.001110646,
   0.001048805,
   0.00542746,
   0.002376909,
   0.001624972,
   0.005509639,
   0,
   0.00172156,
   0.001227525,
   0.00679399,
   0.004749031,
   0.001411318,
   0.02231848,
   0.004735402,
   0,
   0.01661482,
   0.007099141,
   0.1262504,
   0.001303786,
   0.007466598,
   0,
   0.01123029,
   0,
   0.005513309,
   0.03687063,
   0.01313768,
   0.2100192,
   0,
   0,
   0,
   0.001448732,
   0.004365473,
   0.008105836,
   0.005777975,
   0.05761681,
   0.000946727,
   0.000870494,
   0.001041218,
   0.005957726,
   0.009943642,
   0.02496477,
   0.007643823,
   0.01171117,
   0.00746733,
   0.001162858,
   0.006893866,
   0.005015897,
   0,
   0.05425447,
   0.001920232,
   0.007336156,
   0.006654342,
   0.01265043,
   0.01078839,
   0,
   0.01105506,
   0.001057246,
   0.005305185,
   0.003785262,
   0.008977101,
   0.006240717,
   0.01956692,
   0.00794465,
   0.00427618,
   0,
   0.001157163,
   0.004233587,
   0.007735791,
   0,
   0.004955447,
   0.006734049,
   0.01229121,
   0,
   0.01080261,
   0.007049764,
   0.009024953,
   0.001089983,
   0.01050257,
   0.002174852};
   TGraphErrors *gre = new TGraphErrors(166,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","",166,342833,344849);
   Graph_Graph01013->SetMinimum(0);
   Graph_Graph01013->SetMaximum(0.4620422);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("Run Number");
   Graph_Graph01013->GetXaxis()->SetNoExponent();
   Graph_Graph01013->GetXaxis()->SetNdivisions(5);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetLabelSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TID 1+");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
