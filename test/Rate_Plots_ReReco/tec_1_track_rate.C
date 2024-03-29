void tec_1_track_rate()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Oct  3 21:03:43 2021) by ROOT version 6.22/09
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,856,812);
   gStyle->SetOptStat(0);
   c1->Range(342341.4,-0.1979988,344951,1.331992);
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
   
   Double_t Graph0_fx1019[158] = {
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
   Double_t Graph0_fy1019[158] = {
   0.1229207,
   0.1716716,
   0.06533293,
   0.1684061,
   0.1738813,
   0.2943531,
   0.07974556,
   0.1533842,
   0.1473431,
   0.1522613,
   0.159026,
   0.1440182,
   0.1381278,
   0.1555661,
   0.1483383,
   0.13811,
   0.1383262,
   0.1434738,
   0.1917296,
   0.1575629,
   0.1399158,
   0.1192696,
   0.0758249,
   0.08651805,
   0.2162794,
   0.07327564,
   0.06180066,
   0.134584,
   0.2288752,
   0,
   0.3257766,
   0.3523255,
   0.352993,
   0.328792,
   0.3423954,
   0.1841526,
   0.3050287,
   0.3564949,
   0.3338792,
   0.2759588,
   0.33579,
   0.3363951,
   0.2799397,
   0.3201232,
   0.3406047,
   0.3385609,
   0.331065,
   0.4456932,
   0.4062557,
   0.3039549,
   0.3355645,
   0.06408869,
   0.1610073,
   0.3341717,
   0.07620291,
   0.05164505,
   0.2096267,
   0.2519081,
   0.1562251,
   0.1160961,
   0.05999828,
   0.3811239,
   0.2286836,
   0.3058542,
   0.08762742,
   0.08228931,
   0.0392948,
   0.06932519,
   0.0373347,
   0.01513354,
   0.01699755,
   0.3532691,
   0.4099536,
   0.4136241,
   0.01890513,
   0.3833889,
   0.2727404,
   0.01428349,
   0.4088103,
   0.2655531,
   0.1912405,
   0.3821131,
   0.2329171,
   0.2194881,
   0.3062503,
   0.008671683,
   0.05731327,
   0.1073352,
   0.2917903,
   0.3487197,
   0.1305296,
   0.3310568,
   0.321222,
   0.3285412,
   0.329643,
   0.6505267,
   0.3066191,
   0.3077871,
   0.009892074,
   0.2929541,
   0.2012108,
   0.005142095,
   0.2108428,
   0.8250351,
   0.2517888,
   0.007714626,
   0.004452255,
   0,
   0.1876841,
   0.2083289,
   0.202963,
   0.2343291,
   0.8168131,
   0.166862,
   0.2179661,
   0.2115404,
   0.2204879,
   0.2240874,
   0.01109325,
   0.2101547,
   0.2106028,
   0.2217803,
   0.2141335,
   0.1562132,
   0.1485022,
   0.135543,
   0,
   0.0383784,
   0,
   0.1271026,
   0.1211202,
   0.1302835,
   0.110849,
   0.1238774,
   0.004265421,
   0.1273125,
   0.1246731,
   0.1269899,
   0.1320052,
   0.1139979,
   0.1206158,
   0.1232345,
   0.1626601,
   0.1551738,
   0.005837805,
   0.1598412,
   0.1745917,
   0.2192453,
   0,
   0.2182928,
   0.1951675,
   0.2227939,
   0,
   0.1349269,
   0.2199176,
   0.2000635,
   0.2264359,
   0.2132773};
   Double_t Graph0_fex1019[158] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1019[158] = {
   0.0274859,
   0.01969208,
   0.003073003,
   0.01073718,
   0.007654698,
   0.1471766,
   0.0009413807,
   0.005399379,
   0.01951606,
   0.004507614,
   0.01202124,
   0.003519976,
   0.009841201,
   0.005052552,
   0.001969632,
   0.0270856,
   0.007907584,
   0.01253536,
   0.03389332,
   0.005101288,
   0.0201951,
   0.02295344,
   0.001177314,
   0.003362619,
   0.02703493,
   0.009539676,
   0.01236013,
   0.01313406,
   0.002424303,
   0,
   0.01527264,
   0.006024639,
   0.003406468,
   0.03485188,
   0.008346144,
   0.002044878,
   0.00463176,
   0.01208631,
   0.003806142,
   0.04068791,
   0.06585383,
   0.006534716,
   0.005621324,
   0.002670198,
   0.00540915,
   0.01486117,
   0.008957523,
   0.1114233,
   0.06423466,
   0.02117754,
   0.007543157,
   0.01170094,
   0.001962045,
   0.003439407,
   0.01848192,
   0.01126987,
   0.005789555,
   0.0143538,
   0.007525097,
   0.001004455,
   0.01603521,
   0.01857484,
   0.001831933,
   0.006998384,
   0.01170971,
   0.01285143,
   0.01485204,
   0.01310123,
   0.01180627,
   0.00419729,
   0.004906771,
   0.0122918,
   0.006782814,
   0.003250641,
   0.002182977,
   0.002645068,
   0.01315271,
   0.002287189,
   0.02678205,
   0.001501379,
   0.001010103,
   0.01074777,
   0.002776761,
   0.001810246,
   0.01008035,
   0.003065903,
   0.004759608,
   0.0007973757,
   0.01214739,
   0.01007507,
   0.001147516,
   0.06044243,
   0.009387002,
   0.04139229,
   0.01493755,
   0.2299959,
   0.0024737,
   0.01354957,
   0.00442387,
   0.2929541,
   0.01992284,
   0.001714032,
   0.009777601,
   0.2001004,
   0.02832845,
   0.002326047,
   0.0008267629,
   0,
   0.00228883,
   0.008090823,
   0.0165169,
   0.01165831,
   0.272271,
   0.001334853,
   0.001615716,
   0.001905615,
   0.01143177,
   0.01860945,
   0.01109325,
   0.05253867,
   0.01474514,
   0.02164355,
   0.01376503,
   0.001609932,
   0.01080195,
   0.007600875,
   0,
   0.0383784,
   0,
   0.002934527,
   0.01062294,
   0.01046463,
   0.01929633,
   0.01491309,
   0.002462642,
   0.01782732,
   0.001578519,
   0.009140935,
   0.006101941,
   0.01372374,
   0.009535514,
   0.03557472,
   0.01394799,
   0.007274658,
   0.001685229,
   0.001488457,
   0.006247383,
   0.01599011,
   0,
   0.008745716,
   0.01231886,
   0.0206859,
   0,
   0.007790011,
   0.01701773,
   0.001835445,
   0.02323183,
   0.003756186};
   TGraphErrors *gre = new TGraphErrors(158,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph01019 = new TH1F("Graph_Graph01019","",158,342833,344849);
   Graph_Graph01019->SetMinimum(0);
   Graph_Graph01019->SetMaximum(1.197993);
   Graph_Graph01019->SetDirectory(0);
   Graph_Graph01019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01019->SetLineColor(ci);
   Graph_Graph01019->GetXaxis()->SetTitle("Run Number");
   Graph_Graph01019->GetXaxis()->SetNoExponent();
   Graph_Graph01019->GetXaxis()->SetNdivisions(5);
   Graph_Graph01019->GetXaxis()->SetLabelFont(42);
   Graph_Graph01019->GetXaxis()->SetLabelSize(0.04);
   Graph_Graph01019->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph01019->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01019->GetXaxis()->SetTitleFont(42);
   Graph_Graph01019->GetYaxis()->SetTitle("Track Rate (Hz)");
   Graph_Graph01019->GetYaxis()->SetLabelFont(42);
   Graph_Graph01019->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01019->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph01019->GetYaxis()->SetTitleFont(42);
   Graph_Graph01019->GetZaxis()->SetLabelFont(42);
   Graph_Graph01019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01019);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.64,0.94,"0T cosmic rays (2021)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03717);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.83,"TEC 1");
tex->SetNDC();
   tex->SetTextSize(0.047);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
