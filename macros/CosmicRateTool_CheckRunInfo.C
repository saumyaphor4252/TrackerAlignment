void CosmicRateTool_CheckRunInfo(const char *fileName, unsigned int runLow = 0, unsigned int runUp = 0) {
  TString InputFile = Form("%s", fileName);
  TFile *file = new TFile(InputFile);

  bool IsFileExist;
  IsFileExist = file->IsZombie();
  if (IsFileExist) {
    cout << endl
         << "====================================================================================================="
         << endl;
    cout << fileName << " is not found. Check the file!" << endl;
    cout << "====================================================================================================="
         << endl
         << endl;
    exit(EXIT_FAILURE);
  }

  TTree *tree;
  tree = (TTree *)file->Get("cosmicRateAnalyzer/Run");

  FILE *pFile;
  pFile = fopen("tracksInfo.txt", "w");

  double run_time;
  unsigned int runnum;
  int number_of_events;
  int number_of_tracks;
  int number_of_tracks_PIX;
  int number_of_tracks_FPIX;
  int number_of_tracks_BPIX;
  int number_of_tracks_TID;
  int number_of_tracks_TIDM;
  int number_of_tracks_TIDP;
  int number_of_tracks_TIB;
  int number_of_tracks_TEC;
  int number_of_tracks_TECP;
  int number_of_tracks_TECM;
  int number_of_tracks_TOB;
  int number_of_tracks_TID_1;
  int number_of_tracks_TID_1_plus;
  int number_of_tracks_TID_1_minus;
  int number_of_tracks_TID_2;
  int number_of_tracks_TID_2_plus;
  int number_of_tracks_TID_2_minus;
  int number_of_tracks_TID_3;
  int number_of_tracks_TID_3_plus;
  int number_of_tracks_TID_3_minus;
  int number_of_tracks_TEC_1;
  int number_of_tracks_TEC_1_plus;
  int number_of_tracks_TEC_1_minus;
  int number_of_tracks_TEC_2;
  int number_of_tracks_TEC_2_plus;
  int number_of_tracks_TEC_2_minus;
  int number_of_tracks_TEC_3;
  int number_of_tracks_TEC_3_plus;
  int number_of_tracks_TEC_3_minus;
  int number_of_tracks_TEC_4;
  int number_of_tracks_TEC_4_plus;
  int number_of_tracks_TEC_4_minus;
  int number_of_tracks_TEC_5;
  int number_of_tracks_TEC_5_plus;
  int number_of_tracks_TEC_5_minus;
  int number_of_tracks_TEC_6;
  int number_of_tracks_TEC_6_plus;
  int number_of_tracks_TEC_6_minus;
  int number_of_tracks_TEC_7;
  int number_of_tracks_TEC_7_plus;
  int number_of_tracks_TEC_7_minus;
  int number_of_tracks_TEC_8;
  int number_of_tracks_TEC_8_plus;
  int number_of_tracks_TEC_8_minus;
  int number_of_tracks_TEC_9;
  int number_of_tracks_TEC_9_plus;
  int number_of_tracks_TEC_9_minus;  

  tree->SetBranchAddress("run_time", &run_time);
  tree->SetBranchAddress("runnum", &runnum);
  tree->SetBranchAddress("number_of_events", &number_of_events);
  tree->SetBranchAddress("number_of_tracks", &number_of_tracks);
  tree->SetBranchAddress("number_of_tracks_PIX", &number_of_tracks_PIX);
  tree->SetBranchAddress("number_of_tracks_FPIX", &number_of_tracks_FPIX);
  tree->SetBranchAddress("number_of_tracks_BPIX", &number_of_tracks_BPIX);
  tree->SetBranchAddress("number_of_tracks_TID", &number_of_tracks_TID);
  tree->SetBranchAddress("number_of_tracks_TIDM", &number_of_tracks_TIDM);
  tree->SetBranchAddress("number_of_tracks_TIDP", &number_of_tracks_TIDP);
  tree->SetBranchAddress("number_of_tracks_TIB", &number_of_tracks_TIB);
  tree->SetBranchAddress("number_of_tracks_TEC", &number_of_tracks_TEC);
  tree->SetBranchAddress("number_of_tracks_TECP", &number_of_tracks_TECP);
  tree->SetBranchAddress("number_of_tracks_TECM", &number_of_tracks_TECM);
  tree->SetBranchAddress("number_of_tracks_TOB", &number_of_tracks_TOB);
  
  tree->SetBranchAddress("number_of_tracks_TID_1", &number_of_tracks_TID_1);
  tree->SetBranchAddress("number_of_tracks_TID_2", &number_of_tracks_TID_2);
  tree->SetBranchAddress("number_of_tracks_TID_3", &number_of_tracks_TID_3);
  tree->SetBranchAddress("number_of_tracks_TID_1_plus", &number_of_tracks_TID_1_plus);
  tree->SetBranchAddress("number_of_tracks_TID_2_plus", &number_of_tracks_TID_2_plus);
  tree->SetBranchAddress("number_of_tracks_TID_3_plus", &number_of_tracks_TID_3_plus);
  tree->SetBranchAddress("number_of_tracks_TID_1_minus", &number_of_tracks_TID_1_minus);
  tree->SetBranchAddress("number_of_tracks_TID_2_minus", &number_of_tracks_TID_2_minus);
  tree->SetBranchAddress("number_of_tracks_TID_3_minus", &number_of_tracks_TID_3_minus);
  tree->SetBranchAddress("number_of_tracks_TEC_1", &number_of_tracks_TEC_1);
  tree->SetBranchAddress("number_of_tracks_TEC_2", &number_of_tracks_TEC_2);
  tree->SetBranchAddress("number_of_tracks_TEC_3", &number_of_tracks_TEC_3);
  tree->SetBranchAddress("number_of_tracks_TEC_4", &number_of_tracks_TEC_4);
  tree->SetBranchAddress("number_of_tracks_TEC_5", &number_of_tracks_TEC_5);
  tree->SetBranchAddress("number_of_tracks_TEC_6", &number_of_tracks_TEC_6);
  tree->SetBranchAddress("number_of_tracks_TEC_7", &number_of_tracks_TEC_7);
  tree->SetBranchAddress("number_of_tracks_TEC_8", &number_of_tracks_TEC_8);
  tree->SetBranchAddress("number_of_tracks_TEC_9", &number_of_tracks_TEC_9);
  tree->SetBranchAddress("number_of_tracks_TEC_1_plus", &number_of_tracks_TEC_1_plus);
  tree->SetBranchAddress("number_of_tracks_TEC_2_plus", &number_of_tracks_TEC_2_plus);
  tree->SetBranchAddress("number_of_tracks_TEC_3_plus", &number_of_tracks_TEC_3_plus);
  tree->SetBranchAddress("number_of_tracks_TEC_4_plus", &number_of_tracks_TEC_4_plus);
  tree->SetBranchAddress("number_of_tracks_TEC_5_plus", &number_of_tracks_TEC_5_plus);
  tree->SetBranchAddress("number_of_tracks_TEC_6_plus", &number_of_tracks_TEC_6_plus);
  tree->SetBranchAddress("number_of_tracks_TEC_7_plus", &number_of_tracks_TEC_7_plus);
  tree->SetBranchAddress("number_of_tracks_TEC_8_plus", &number_of_tracks_TEC_8_plus);
  tree->SetBranchAddress("number_of_tracks_TEC_9_plus", &number_of_tracks_TEC_9_plus);
  tree->SetBranchAddress("number_of_tracks_TEC_1_minus", &number_of_tracks_TEC_1_minus);
  tree->SetBranchAddress("number_of_tracks_TEC_2_minus", &number_of_tracks_TEC_2_minus);
  tree->SetBranchAddress("number_of_tracks_TEC_3_minus", &number_of_tracks_TEC_3_minus);
  tree->SetBranchAddress("number_of_tracks_TEC_4_minus", &number_of_tracks_TEC_4_minus);
  tree->SetBranchAddress("number_of_tracks_TEC_5_minus", &number_of_tracks_TEC_5_minus);
  tree->SetBranchAddress("number_of_tracks_TEC_6_minus", &number_of_tracks_TEC_6_minus);
  tree->SetBranchAddress("number_of_tracks_TEC_7_minus", &number_of_tracks_TEC_7_minus);
  tree->SetBranchAddress("number_of_tracks_TEC_8_minus", &number_of_tracks_TEC_8_minus);
  tree->SetBranchAddress("number_of_tracks_TEC_9_minus", &number_of_tracks_TEC_9_minus);

  //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  //		Various Rates Declerations
  //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

  vector<double> event_rate;
  vector<double> event_rate_err;
  vector<double> track_rate;
  vector<double> track_rate_err;
  vector<double> runNumber;
  vector<double> runNumber_err;
  vector<double> track_rate_PIX;
  vector<double> track_rate_PIX_err;
  vector<double> track_rate_FPIX;
  vector<double> track_rate_FPIX_err;
  vector<double> track_rate_BPIX;
  vector<double> track_rate_BPIX_err;
  vector<double> track_rate_TOB;
  vector<double> track_rate_TOB_err;
  vector<double> track_rate_TIB;
  vector<double> track_rate_TIB_err;
  vector<double> track_rate_TID;
  vector<double> track_rate_TID_err;
  vector<double> track_rate_TIDP;
  vector<double> track_rate_TIDP_err;
  vector<double> track_rate_TIDM;
  vector<double> track_rate_TIDM_err;
  vector<double> track_rate_TEC;
  vector<double> track_rate_TEC_err;
  vector<double> track_rate_TECP;
  vector<double> track_rate_TECP_err;
  vector<double> track_rate_TECM;
  vector<double> track_rate_TECM_err;
  vector<double> tracks;
  vector<double> tracks_err;
  vector<double> tracks_bpix;
  vector<double> tracks_fpix;
  vector<double> tracks_pix;
  vector<double> tracks_tec;
  vector<double> weight;
 
  vector<double> track_rate_TID_1;
  vector<double> track_rate_TID_1_err;
  vector<double> track_rate_TID_2;
  vector<double> track_rate_TID_2_err;
  vector<double> track_rate_TID_3;
  vector<double> track_rate_TID_3_err; 
  vector<double> track_rate_TID_1_plus;
  vector<double> track_rate_TID_1_plus_err;
  vector<double> track_rate_TID_2_plus;
  vector<double> track_rate_TID_2_plus_err;
  vector<double> track_rate_TID_3_plus;
  vector<double> track_rate_TID_3_plus_err;  
  vector<double> track_rate_TID_1_minus;
  vector<double> track_rate_TID_1_minus_err;
  vector<double> track_rate_TID_2_minus;
  vector<double> track_rate_TID_2_minus_err;
  vector<double> track_rate_TID_3_minus;
  vector<double> track_rate_TID_3_minus_err; 
  vector<double> track_rate_TEC_1;
  vector<double> track_rate_TEC_1_err;
  vector<double> track_rate_TEC_2;
  vector<double> track_rate_TEC_2_err;
  vector<double> track_rate_TEC_3;
  vector<double> track_rate_TEC_3_err;
  vector<double> track_rate_TEC_4;
  vector<double> track_rate_TEC_4_err;
  vector<double> track_rate_TEC_5;
  vector<double> track_rate_TEC_5_err;
  vector<double> track_rate_TEC_6;
  vector<double> track_rate_TEC_6_err;
  vector<double> track_rate_TEC_7;
  vector<double> track_rate_TEC_7_err;
  vector<double> track_rate_TEC_8;
  vector<double> track_rate_TEC_8_err;
  vector<double> track_rate_TEC_9;
  vector<double> track_rate_TEC_9_err; 
  vector<double> track_rate_TEC_1_plus;
  vector<double> track_rate_TEC_1_plus_err;
  vector<double> track_rate_TEC_2_plus;
  vector<double> track_rate_TEC_2_plus_err;
  vector<double> track_rate_TEC_3_plus;
  vector<double> track_rate_TEC_3_plus_err;
  vector<double> track_rate_TEC_4_plus;
  vector<double> track_rate_TEC_4_plus_err;
  vector<double> track_rate_TEC_5_plus;
  vector<double> track_rate_TEC_5_plus_err;
  vector<double> track_rate_TEC_6_plus;
  vector<double> track_rate_TEC_6_plus_err;
  vector<double> track_rate_TEC_7_plus;
  vector<double> track_rate_TEC_7_plus_err;
  vector<double> track_rate_TEC_8_plus;
  vector<double> track_rate_TEC_8_plus_err;
  vector<double> track_rate_TEC_9_plus;
  vector<double> track_rate_TEC_9_plus_err;  
  vector<double> track_rate_TEC_1_minus;
  vector<double> track_rate_TEC_1_minus_err;
  vector<double> track_rate_TEC_2_minus;
  vector<double> track_rate_TEC_2_minus_err;
  vector<double> track_rate_TEC_3_minus;
  vector<double> track_rate_TEC_3_minus_err;
  vector<double> track_rate_TEC_4_minus;
  vector<double> track_rate_TEC_4_minus_err;
  vector<double> track_rate_TEC_5_minus;
  vector<double> track_rate_TEC_5_minus_err;
  vector<double> track_rate_TEC_6_minus;
  vector<double> track_rate_TEC_6_minus_err;
  vector<double> track_rate_TEC_7_minus;
  vector<double> track_rate_TEC_7_minus_err;
  vector<double> track_rate_TEC_8_minus;
  vector<double> track_rate_TEC_8_minus_err;
  vector<double> track_rate_TEC_9_minus;
  vector<double> track_rate_TEC_9_minus_err;

  int j = 0;
  double total_tracks = 0;
  double bpix_tracks = 0;
  double fpix_tracks = 0;
  double pix_tracks = 0;
  double tracks_TECoff = 0;
  int nTotalEvents = 0, nTotalTracks = 0, nRuns = 0;

  fprintf(pFile, "##################################################\n");
  fprintf(pFile, "         Track rate for each run number           \n");
  fprintf(pFile, "##################################################\n");
  fprintf(pFile,
                 "RunNumber\tTracks\tRuntime\tTotalTrackRate\tBPIX\tFPIX\tTIB\tTID\tTOB\tTEC\tTID\tTID+\tTID-\tTID1\tTID1+\tTID1-\tTID2\tTID2+\tTID2-\tTID3\tTID3+\tTID3-\tTEC\tTEC+\tTEC-\tTEC1\tTEC1+\tTEC1-\tTEC2\tTEC2+\tTEC2-\tTEC3\tTEC3+\tTEC3-\tTEC4\tTEC4+\tTEC4-\tTEC5\tTEC5+\tTEC5-\tTEC6\tTEC6+\tTEC6-\tTEC7\tTEC7+\tTEC7-\tTEC8\tTEC8+\tTEC8-\tTEC9\tTEC9+\tTEC9-\n");

  Long64_t n = tree->GetEntriesFast();
  std::cout << "Total Runs in this file: " << n << endl;
  for (Long64_t jentry = 0; jentry < n; jentry++)  // Loop over Runs
  {
    tree->GetEntry(jentry);
    if (run_time == 0 || run_time < 0)
      continue;

    if (runLow != 0 && runUp != 0) {
      if (runnum < runLow)
        continue;
      if (runnum > runUp)
        break;
    }

    event_rate.push_back(number_of_events / run_time);
    runNumber.push_back(runnum);
    track_rate.push_back(number_of_tracks / run_time);
    track_rate_PIX.push_back(number_of_tracks_PIX / run_time);
    track_rate_FPIX.push_back(number_of_tracks_FPIX / run_time);
    track_rate_BPIX.push_back(number_of_tracks_BPIX / run_time);
    track_rate_TOB.push_back(number_of_tracks_TOB / run_time);
    track_rate_TIB.push_back(number_of_tracks_TIB / run_time);
    track_rate_TID.push_back(number_of_tracks_TID / run_time);
    track_rate_TIDP.push_back(number_of_tracks_TIDP / run_time);
    track_rate_TIDM.push_back(number_of_tracks_TIDM / run_time);
    track_rate_TEC.push_back(number_of_tracks_TEC / run_time);
    track_rate_TECP.push_back(number_of_tracks_TECP / run_time);
    track_rate_TECM.push_back(number_of_tracks_TECM / run_time);
    tracks.push_back(number_of_tracks);
    tracks_bpix.push_back(number_of_tracks_BPIX);
    tracks_fpix.push_back(number_of_tracks_FPIX);
    tracks_pix.push_back(number_of_tracks_PIX);
    tracks_tec.push_back(number_of_tracks_TECM);
    total_tracks += tracks[j];
    bpix_tracks += tracks_bpix[j];
    fpix_tracks += tracks_fpix[j];
    pix_tracks += tracks_pix[j];
    nTotalEvents += number_of_events;
    nTotalTracks += number_of_tracks;
	
    track_rate_TID_1.push_back(number_of_tracks_TID_1 / run_time);
    track_rate_TID_2.push_back(number_of_tracks_TID_2 / run_time);
    track_rate_TID_3.push_back(number_of_tracks_TID_3 / run_time);
    track_rate_TID_1_plus.push_back(number_of_tracks_TID_1_plus / run_time);
    track_rate_TID_2_plus.push_back(number_of_tracks_TID_2_plus / run_time);
    track_rate_TID_3_plus.push_back(number_of_tracks_TID_3_plus / run_time);
    track_rate_TID_1_minus.push_back(number_of_tracks_TID_1_minus / run_time);
    track_rate_TID_2_minus.push_back(number_of_tracks_TID_2_minus / run_time);
    track_rate_TID_3_minus.push_back(number_of_tracks_TID_3_minus / run_time);
    track_rate_TEC_1.push_back(number_of_tracks_TEC_1 / run_time);
    track_rate_TEC_2.push_back(number_of_tracks_TEC_2 / run_time);
    track_rate_TEC_3.push_back(number_of_tracks_TEC_3 / run_time);
    track_rate_TEC_4.push_back(number_of_tracks_TEC_4 / run_time);
    track_rate_TEC_5.push_back(number_of_tracks_TEC_5 / run_time);
    track_rate_TEC_6.push_back(number_of_tracks_TEC_6 / run_time);
    track_rate_TEC_7.push_back(number_of_tracks_TEC_7 / run_time);
    track_rate_TEC_8.push_back(number_of_tracks_TEC_8 / run_time);
    track_rate_TEC_9.push_back(number_of_tracks_TEC_9 / run_time);	
    track_rate_TEC_1_plus.push_back(number_of_tracks_TEC_1_plus / run_time);
    track_rate_TEC_2_plus.push_back(number_of_tracks_TEC_2_plus / run_time);
    track_rate_TEC_3_plus.push_back(number_of_tracks_TEC_3_plus / run_time);
    track_rate_TEC_4_plus.push_back(number_of_tracks_TEC_4_plus / run_time);
    track_rate_TEC_5_plus.push_back(number_of_tracks_TEC_5_plus / run_time);
    track_rate_TEC_6_plus.push_back(number_of_tracks_TEC_6_plus / run_time);
    track_rate_TEC_7_plus.push_back(number_of_tracks_TEC_7_plus / run_time);
    track_rate_TEC_8_plus.push_back(number_of_tracks_TEC_8_plus / run_time);
    track_rate_TEC_9_plus.push_back(number_of_tracks_TEC_9_plus / run_time);	
    track_rate_TEC_1_minus.push_back(number_of_tracks_TEC_1_minus / run_time);
    track_rate_TEC_2_minus.push_back(number_of_tracks_TEC_2_minus / run_time);
    track_rate_TEC_3_minus.push_back(number_of_tracks_TEC_3_minus / run_time);
    track_rate_TEC_4_minus.push_back(number_of_tracks_TEC_4_minus / run_time);
    track_rate_TEC_5_minus.push_back(number_of_tracks_TEC_5_minus / run_time);
    track_rate_TEC_6_minus.push_back(number_of_tracks_TEC_6_minus / run_time);
    track_rate_TEC_7_minus.push_back(number_of_tracks_TEC_7_minus / run_time);
    track_rate_TEC_8_minus.push_back(number_of_tracks_TEC_8_minus / run_time);
    track_rate_TEC_9_minus.push_back(number_of_tracks_TEC_9_minus / run_time);

    fprintf(pFile,
"%-7.0lf\t%-10.0lf%-10.2lf\t%-10.3lf\t%-10.4lf\t%-10.4lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\t%-10.3lf\n",
 //           "%-7.0lf\t%-10.0lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\t%-10.2lf\n",
            runNumber.at(j),
            tracks.at(j),
            run_time,         
            track_rate.at(j),
            track_rate_BPIX.at(j),
            track_rate_FPIX.at(j),
            track_rate_TIB.at(j),
            track_rate_TID.at(j),
            track_rate_TOB.at(j),
            track_rate_TEC.at(j),
            track_rate_TID.at(j),
            track_rate_TIDP.at(j),
            track_rate_TIDM.at(j),
            track_rate_TID_1.at(j),
            track_rate_TID_1_plus.at(j),
            track_rate_TID_1_minus.at(j),
            track_rate_TID_2.at(j),
            track_rate_TID_2_plus.at(j),
            track_rate_TID_2_minus.at(j),
            track_rate_TID_3.at(j),
            track_rate_TID_3_plus.at(j),
            track_rate_TID_3_minus.at(j),
            track_rate_TEC.at(j),
            track_rate_TECP.at(j),
            track_rate_TECM.at(j),
            track_rate_TEC_1.at(j),
            track_rate_TEC_1_plus.at(j),
            track_rate_TEC_1_minus.at(j),
            track_rate_TEC_2.at(j),
            track_rate_TEC_2_plus.at(j),
            track_rate_TEC_2_minus.at(j),
            track_rate_TEC_3.at(j),
            track_rate_TEC_3_plus.at(j),
            track_rate_TEC_3_minus.at(j),
            track_rate_TEC_4.at(j),
            track_rate_TEC_4_plus.at(j),
            track_rate_TEC_4_minus.at(j),
            track_rate_TEC_5.at(j),
            track_rate_TEC_5_plus.at(j),
            track_rate_TEC_5_minus.at(j),
            track_rate_TEC_6.at(j),
            track_rate_TEC_6_plus.at(j),
            track_rate_TEC_6_minus.at(j),
            track_rate_TEC_7.at(j),
            track_rate_TEC_7_plus.at(j),
            track_rate_TEC_7_minus.at(j),
            track_rate_TEC_8.at(j),
            track_rate_TEC_8_plus.at(j),
            track_rate_TEC_8_minus.at(j),
            track_rate_TEC_9.at(j),
            track_rate_TEC_9_plus.at(j),
            track_rate_TEC_9_minus.at(j));

    track_rate_err.push_back(sqrt(float(number_of_tracks)) / run_time);
    event_rate_err.push_back(sqrt(float(number_of_events)) / run_time);
    track_rate_PIX_err.push_back(sqrt(float(number_of_tracks_PIX)) / run_time);
    track_rate_FPIX_err.push_back(sqrt(float(number_of_tracks_FPIX)) / run_time);
    track_rate_BPIX_err.push_back(sqrt(float(number_of_tracks_BPIX)) / run_time);
    track_rate_TOB_err.push_back(sqrt(float(number_of_tracks_TOB)) / run_time);
    track_rate_TIB_err.push_back(sqrt(float(number_of_tracks_TIB)) / run_time);
    track_rate_TID_err.push_back(sqrt(float(number_of_tracks_TID)) / run_time);
    track_rate_TIDP_err.push_back(sqrt(float(number_of_tracks_TIDP)) / run_time);
    track_rate_TIDM_err.push_back(sqrt(float(number_of_tracks_TIDM)) / run_time);
    track_rate_TEC_err.push_back(sqrt(float(number_of_tracks_TEC)) / run_time);
    track_rate_TECP_err.push_back(sqrt(float(number_of_tracks_TECP)) / run_time);
    track_rate_TECM_err.push_back(sqrt(float(number_of_tracks_TECM)) / run_time);

    track_rate_TID_1_err.push_back(sqrt(float(number_of_tracks_TID_1)) / run_time);
    track_rate_TID_2_err.push_back(sqrt(float(number_of_tracks_TID_2)) / run_time);
    track_rate_TID_3_err.push_back(sqrt(float(number_of_tracks_TID_3)) / run_time);
    track_rate_TID_1_plus_err.push_back(sqrt(float(number_of_tracks_TID_1_plus)) / run_time);
    track_rate_TID_2_plus_err.push_back(sqrt(float(number_of_tracks_TID_2_plus)) / run_time);
    track_rate_TID_3_plus_err.push_back(sqrt(float(number_of_tracks_TID_3_plus)) / run_time);
    track_rate_TID_1_minus_err.push_back(sqrt(float(number_of_tracks_TID_1_minus)) / run_time);
    track_rate_TID_2_minus_err.push_back(sqrt(float(number_of_tracks_TID_2_minus)) / run_time);
    track_rate_TID_3_minus_err.push_back(sqrt(float(number_of_tracks_TID_3_minus)) / run_time);	
    track_rate_TEC_1_err.push_back(sqrt(float(number_of_tracks_TEC_1)) / run_time);
    track_rate_TEC_2_err.push_back(sqrt(float(number_of_tracks_TEC_2)) / run_time);
    track_rate_TEC_3_err.push_back(sqrt(float(number_of_tracks_TEC_3)) / run_time);
    track_rate_TEC_4_err.push_back(sqrt(float(number_of_tracks_TEC_4)) / run_time);
    track_rate_TEC_5_err.push_back(sqrt(float(number_of_tracks_TEC_5)) / run_time);
    track_rate_TEC_6_err.push_back(sqrt(float(number_of_tracks_TEC_6)) / run_time);
    track_rate_TEC_7_err.push_back(sqrt(float(number_of_tracks_TEC_7)) / run_time);
    track_rate_TEC_8_err.push_back(sqrt(float(number_of_tracks_TEC_8)) / run_time);
    track_rate_TEC_9_err.push_back(sqrt(float(number_of_tracks_TEC_9)) / run_time);
    track_rate_TEC_1_plus_err.push_back(sqrt(float(number_of_tracks_TEC_1_plus)) / run_time);
    track_rate_TEC_2_plus_err.push_back(sqrt(float(number_of_tracks_TEC_2_plus)) / run_time);
    track_rate_TEC_3_plus_err.push_back(sqrt(float(number_of_tracks_TEC_3_plus)) / run_time);
    track_rate_TEC_4_plus_err.push_back(sqrt(float(number_of_tracks_TEC_4_plus)) / run_time);
    track_rate_TEC_5_plus_err.push_back(sqrt(float(number_of_tracks_TEC_5_plus)) / run_time);
    track_rate_TEC_6_plus_err.push_back(sqrt(float(number_of_tracks_TEC_6_plus)) / run_time);
    track_rate_TEC_7_plus_err.push_back(sqrt(float(number_of_tracks_TEC_7_plus)) / run_time);
    track_rate_TEC_8_plus_err.push_back(sqrt(float(number_of_tracks_TEC_8_plus)) / run_time);
    track_rate_TEC_9_plus_err.push_back(sqrt(float(number_of_tracks_TEC_9_plus)) / run_time);
    track_rate_TEC_1_minus_err.push_back(sqrt(float(number_of_tracks_TEC_1_minus)) / run_time);
    track_rate_TEC_2_minus_err.push_back(sqrt(float(number_of_tracks_TEC_2_minus)) / run_time);
    track_rate_TEC_3_minus_err.push_back(sqrt(float(number_of_tracks_TEC_3_minus)) / run_time);
    track_rate_TEC_4_minus_err.push_back(sqrt(float(number_of_tracks_TEC_4_minus)) / run_time);
    track_rate_TEC_5_minus_err.push_back(sqrt(float(number_of_tracks_TEC_5_minus)) / run_time);
    track_rate_TEC_6_minus_err.push_back(sqrt(float(number_of_tracks_TEC_6_minus)) / run_time);
    track_rate_TEC_7_minus_err.push_back(sqrt(float(number_of_tracks_TEC_7_minus)) / run_time);
    track_rate_TEC_8_minus_err.push_back(sqrt(float(number_of_tracks_TEC_8_minus)) / run_time);
    track_rate_TEC_9_minus_err.push_back(sqrt(float(number_of_tracks_TEC_9_minus)) / run_time);

    runNumber_err.push_back(0);
    if (number_of_tracks_TECM == 0) {
      tracks_TECoff += tracks.at(j);
    }
	
	std::cout<<"Run No. : "<<runnum<<" : "<<"Run time : "<<run_time<<std::endl;

    j++; nRuns++;
  }  //Loop over runs closed
  std::cout << "Total Runs: " << nRuns << std::endl;
  std::cout << "Total Events: " << nTotalEvents << std::endl;
  std::cout << "Total Tracks: " << nTotalTracks << std::endl;

  fprintf(pFile, "\n\n");
  fprintf(pFile, "##################################################\n");
  fprintf(pFile, "    Some information on total number of tracks    \n");
  fprintf(pFile, "##################################################\n");
  fprintf(pFile, "Total # of tracks   : %-10.0lf\n", total_tracks);
  fprintf(pFile, "# of tracks in BPIX : %-10.0lf\n", bpix_tracks);
  fprintf(pFile, "# of tracks in FPIX : %-10.0lf\n", fpix_tracks);
  fprintf(pFile, "# of tracks in PIX  : %-10.0lf\n", pix_tracks);
  fprintf(pFile, "\n\n");

  fclose(pFile);

  //-----------------------------------------------------------------------------------------------
  //					Weighted Mean calculation
  //-----------------------------------------------------------------------------------------------

  double total_weight = 0;
  double weighted_mean_track_rate;
  double weighted_mean_track_rate_TEC;
  double weighted_mean_track_rate_TOB;
  double weighted_mean_track_rate_TIB;
  double weighted_mean_track_rate_TID;
  double weighted_mean_track_rate_FPIX;
  double weighted_mean_track_rate_BPIX;
  double weighted_mean_event_rate;
  
  double weighted_mean_track_rate_TID_1;
  double weighted_mean_track_rate_TID_2;
  double weighted_mean_track_rate_TID_3;
  double weighted_mean_track_rate_TID_1_plus;
  double weighted_mean_track_rate_TID_1_minus;
  double weighted_mean_track_rate_TID_2_plus;
  double weighted_mean_track_rate_TID_2_minus;
  double weighted_mean_track_rate_TID_3_plus;
  double weighted_mean_track_rate_TID_3_minus;
  double weighted_mean_track_rate_TEC_1;
  double weighted_mean_track_rate_TEC_2;
  double weighted_mean_track_rate_TEC_3;
  double weighted_mean_track_rate_TEC_4;
  double weighted_mean_track_rate_TEC_5;
  double weighted_mean_track_rate_TEC_6;
  double weighted_mean_track_rate_TEC_7;
  double weighted_mean_track_rate_TEC_8;
  double weighted_mean_track_rate_TEC_9;
  double weighted_mean_track_rate_TEC_1_plus;
  double weighted_mean_track_rate_TEC_1_minus;
  double weighted_mean_track_rate_TEC_2_plus;
  double weighted_mean_track_rate_TEC_2_minus;
  double weighted_mean_track_rate_TEC_3_plus;
  double weighted_mean_track_rate_TEC_3_minus;
  double weighted_mean_track_rate_TEC_4_plus;
  double weighted_mean_track_rate_TEC_4_minus;
  double weighted_mean_track_rate_TEC_5_plus;
  double weighted_mean_track_rate_TEC_5_minus;
  double weighted_mean_track_rate_TEC_6_plus;
  double weighted_mean_track_rate_TEC_6_minus;
  double weighted_mean_track_rate_TEC_7_plus;
  double weighted_mean_track_rate_TEC_7_minus;
  double weighted_mean_track_rate_TEC_8_plus;
  double weighted_mean_track_rate_TEC_8_minus;
  double weighted_mean_track_rate_TEC_9_plus;
  double weighted_mean_track_rate_TEC_9_minus;
  double weighted_mean_track_rate_TEC_10_plus;
  double weighted_mean_track_rate_TEC_10_minus;

  for (int k = 0; k < j; k++)  // Loop over all runs used(j) to allot weight to each run number
  {
    weight.push_back(tracks.at(k) / total_tracks);
  }

  for (int a = 0; a < j; a++)  // Loop over all runs used(j) to evaluate weighted mean for each subdetector
  {
    weighted_mean_track_rate += track_rate.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC += track_rate_TEC.at(a) * weight.at(a);
    weighted_mean_track_rate_TOB += track_rate_TOB.at(a) * weight.at(a);
    weighted_mean_track_rate_TIB += track_rate_TIB.at(a) * weight.at(a);
    weighted_mean_track_rate_TID += track_rate_TID.at(a) * weight.at(a);
    weighted_mean_track_rate_FPIX += track_rate_FPIX.at(a) * weight.at(a);
    weighted_mean_track_rate_BPIX += track_rate_BPIX.at(a) * weight.at(a);
    weighted_mean_event_rate += event_rate.at(a) * weight.at(a);
    total_weight += weight.at(a);
	
    weighted_mean_track_rate_TID_1 += track_rate_TID_1.at(a) * weight.at(a);
    weighted_mean_track_rate_TID_1_plus += track_rate_TID_1_plus.at(a) * weight.at(a);
    weighted_mean_track_rate_TID_1_minus += track_rate_TID_1_minus.at(a) * weight.at(a);
    weighted_mean_track_rate_TID_2 += track_rate_TID_2.at(a) * weight.at(a);
    weighted_mean_track_rate_TID_2_plus += track_rate_TID_2_plus.at(a) * weight.at(a);
    weighted_mean_track_rate_TID_2_minus += track_rate_TID_2_minus.at(a) * weight.at(a);
    weighted_mean_track_rate_TID_3 += track_rate_TID_3.at(a) * weight.at(a);
    weighted_mean_track_rate_TID_3_plus += track_rate_TID_3_plus.at(a) * weight.at(a);
    weighted_mean_track_rate_TID_3_minus += track_rate_TID_3_minus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_1 += track_rate_TEC_1.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_1_plus += track_rate_TEC_1_plus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_1_minus += track_rate_TEC_1_minus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_2 += track_rate_TEC_2.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_2_plus += track_rate_TEC_2_plus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_2_minus += track_rate_TEC_2_minus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_3 += track_rate_TEC_3.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_3_plus += track_rate_TEC_3_plus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_3_minus += track_rate_TEC_3_minus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_4 += track_rate_TEC_4.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_4_plus += track_rate_TEC_4_plus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_4_minus += track_rate_TEC_4_minus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_5 += track_rate_TEC_5.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_5_plus += track_rate_TEC_5_plus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_5_minus += track_rate_TEC_5_minus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_6 += track_rate_TEC_6.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_6_plus += track_rate_TEC_6_plus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_6_minus += track_rate_TEC_6_minus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_7 += track_rate_TEC_7.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_7_plus += track_rate_TEC_7_plus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_7_minus += track_rate_TEC_7_minus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_8 += track_rate_TEC_8.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_8_plus += track_rate_TEC_8_plus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_8_minus += track_rate_TEC_8_minus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_9 += track_rate_TEC_9.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_9_plus += track_rate_TEC_9_plus.at(a) * weight.at(a);
    weighted_mean_track_rate_TEC_9_minus += track_rate_TEC_9_minus.at(a) * weight.at(a);
  }

  std::cout << " Weighted mean Event Rate : " << weighted_mean_event_rate << std::endl;
  std::cout << " Weighted mean Total Track Rate : " << weighted_mean_track_rate << std::endl;
  std::cout << " Weighted mean Track Rate BPIX: " << weighted_mean_track_rate_BPIX << std::endl;
  std::cout << " Weighted mean Track Rate FPIX : " << weighted_mean_track_rate_FPIX << std::endl;
  std::cout << " Weighted mean Track Rate TIB: " << weighted_mean_track_rate_TIB << std::endl;
  std::cout << " Weighted mean Track Rate TOB: " << weighted_mean_track_rate_TOB << std::endl;
  std::cout << " Weighted mean Track Rate TID: " << weighted_mean_track_rate_TID << std::endl;
  std::cout << " Weighted mean Track Rate TEC: " << weighted_mean_track_rate_TEC << std::endl;
  std::cout << " Weighted mean Track Rate TID_1: " << weighted_mean_track_rate_TID_1 << std::endl;
  std::cout << " Weighted mean Track Rate TID_1_plus: " << weighted_mean_track_rate_TID_1_plus << std::endl; 
  std::cout << " Weighted mean Track Rate TID_1_minus: " << weighted_mean_track_rate_TID_1_minus << std::endl;
  std::cout << " Weighted mean Track Rate TID_2: " << weighted_mean_track_rate_TID_2 << std::endl;
  std::cout << " Weighted mean Track Rate TID_2_plus: " << weighted_mean_track_rate_TID_2_plus << std::endl; 
  std::cout << " Weighted mean Track Rate TID_2_minus: " << weighted_mean_track_rate_TID_2_minus << std::endl;
  std::cout << " Weighted mean Track Rate TID_3: " << weighted_mean_track_rate_TID_3 << std::endl;
  std::cout << " Weighted mean Track Rate TID_3_plus: " << weighted_mean_track_rate_TID_3_plus << std::endl; 
  std::cout << " Weighted mean Track Rate TID_3_minus: " << weighted_mean_track_rate_TID_3_minus << std::endl; 
  std::cout << " Weighted mean Track Rate TEC_1: " << weighted_mean_track_rate_TEC_1 << std::endl;
  std::cout << " Weighted mean Track Rate TEC_1_plus: " << weighted_mean_track_rate_TEC_1_plus << std::endl; 
  std::cout << " Weighted mean Track Rate TEC_1_minus: " << weighted_mean_track_rate_TEC_1_minus << std::endl;
  std::cout << " Weighted mean Track Rate TEC_2: " << weighted_mean_track_rate_TEC_2 << std::endl;
  std::cout << " Weighted mean Track Rate TEC_2_plus: " << weighted_mean_track_rate_TEC_2_plus << std::endl; 
  std::cout << " Weighted mean Track Rate TEC_2_minus: " << weighted_mean_track_rate_TEC_2_minus << std::endl;
  std::cout << " Weighted mean Track Rate TEC_3 " << weighted_mean_track_rate_TEC_3 << std::endl;
  std::cout << " Weighted mean Track Rate TEC_3_plus: " << weighted_mean_track_rate_TEC_3_plus << std::endl; 
  std::cout << " Weighted mean Track Rate TEC_3_minus: " << weighted_mean_track_rate_TEC_3_minus << std::endl;
  std::cout << " Weighted mean Track Rate TEC_4 " << weighted_mean_track_rate_TEC_4 << std::endl;
  std::cout << " Weighted mean Track Rate TEC_4_plus: " << weighted_mean_track_rate_TEC_4_plus << std::endl; 
  std::cout << " Weighted mean Track Rate TEC_4_minus: " << weighted_mean_track_rate_TEC_4_minus << std::endl;
  std::cout << " Weighted mean Track Rate TEC_5 " << weighted_mean_track_rate_TEC_5 << std::endl;
  std::cout << " Weighted mean Track Rate TEC_5_plus: " << weighted_mean_track_rate_TEC_5_plus << std::endl; 
  std::cout << " Weighted mean Track Rate TEC_5_minus: " << weighted_mean_track_rate_TEC_5_minus << std::endl;
  std::cout << " Weighted mean Track Rate TEC_6 " << weighted_mean_track_rate_TEC_6 << std::endl;
  std::cout << " Weighted mean Track Rate TEC_6_plus: " << weighted_mean_track_rate_TEC_6_plus << std::endl; 
  std::cout << " Weighted mean Track Rate TEC_6_minus: " << weighted_mean_track_rate_TEC_6_minus << std::endl;
  std::cout << " Weighted mean Track Rate TEC_7 " << weighted_mean_track_rate_TEC_7 << std::endl;
  std::cout << " Weighted mean Track Rate TEC_7_plus: " << weighted_mean_track_rate_TEC_7_plus << std::endl; 
  std::cout << " Weighted mean Track Rate TEC_7_minus: " << weighted_mean_track_rate_TEC_7_minus << std::endl;
  std::cout << " Weighted mean Track Rate TEC_8 " << weighted_mean_track_rate_TEC_8 << std::endl;
  std::cout << " Weighted mean Track Rate TEC_8_plus: " << weighted_mean_track_rate_TEC_8_plus << std::endl; 
  std::cout << " Weighted mean Track Rate TEC_8_minus: " << weighted_mean_track_rate_TEC_8_minus << std::endl;
  std::cout << " Weighted mean Track Rate TEC_9 " << weighted_mean_track_rate_TEC_9 << std::endl;
  std::cout << " Weighted mean Track Rate TEC_9_plus: " << weighted_mean_track_rate_TEC_9_plus << std::endl; 
  std::cout << " Weighted mean Track Rate TEC_9_minus: " << weighted_mean_track_rate_TEC_9_minus << std::endl;
 
}
