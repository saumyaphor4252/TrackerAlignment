void CosmicRateTool_GetRunInfo_TrackRates(const char *fileName, unsigned int runLow = 0, unsigned int runUp = 0) {
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
  pFile = fopen("RunInfo_TrackRates.csv", "w");

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

  fprintf(pFile,"%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s\n",
	  "runnumber",
	  "run_time",
	  "number_of_events",
	  "number_of_tracks",
	  "number_of_tracks_PIX",
	  "number_of_tracks_FPIX",
	  "number_of_tracks_BPIX",
	  "number_of_tracks_TID",
	  "number_of_tracks_TIDM",
	  "number_of_tracks_TIDP",
	  "number_of_tracks_TIB",
	  "number_of_tracks_TEC",
	  "number_of_tracks_TECP",
	  "number_of_tracks_TECM",
	  "number_of_tracks_TOB",
	  "number_of_tracks_TID_1",
	  "number_of_tracks_TID_1_plus",
	  "number_of_tracks_TID_1_minus",
	  "number_of_tracks_TID_2",
	  "number_of_tracks_TID_2_plus",
	  "number_of_tracks_TID_2_minus",
	  "number_of_tracks_TID_3",
	  "number_of_tracks_TID_3_plus",
	  "number_of_tracks_TID_3_minus",
	  "number_of_tracks_TEC_1",
	  "number_of_tracks_TEC_1_plus",
	  "number_of_tracks_TEC_1_minus",
	  "number_of_tracks_TEC_2",
	  "number_of_tracks_TEC_2_plus",
	  "number_of_tracks_TEC_2_minus",
	  "number_of_tracks_TEC_3",
	  "number_of_tracks_TEC_3_plus",
	  "number_of_tracks_TEC_3_minus",
	  "number_of_tracks_TEC_4",
	  "number_of_tracks_TEC_4_plus",
	  "number_of_tracks_TEC_4_minus",
	  "number_of_tracks_TEC_5",
	  "number_of_tracks_TEC_5_plus",
	  "number_of_tracks_TEC_5_minus",
	  "number_of_tracks_TEC_6",
	  "number_of_tracks_TEC_6_plus",
	  "number_of_tracks_TEC_6_minus",
	  "number_of_tracks_TEC_7",
	  "number_of_tracks_TEC_7_plus",
	  "number_of_tracks_TEC_7_minus",
	  "number_of_tracks_TEC_8",
	  "number_of_tracks_TEC_8_plus",
	  "number_of_tracks_TEC_8_minus",
	  "number_of_tracks_TEC_9",
	  "number_of_tracks_TEC_9_plus",
	  "number_of_tracks_TEC_9_minus");
  
  int nTotalEvents = 0, nTotalTracks = 0, nRunsUsed = 0, nTotalEventsIncludingNegativeRuntime=0, nTotalTracksIncludingNegativeRuntime=0;
  
  Long64_t n = tree->GetEntriesFast();
  for (Long64_t jentry = 0; jentry < n; jentry++)  // Loop over Runs
  {   
    tree->GetEntry(jentry);
    nTotalEventsIncludingNegativeRuntime += number_of_events;
    nTotalTracksIncludingNegativeRuntime += number_of_tracks;
    if (run_time == 0 || run_time < 0)
      continue;
    
    nTotalEvents += number_of_events;
    nTotalTracks += number_of_tracks;

    fprintf(pFile,
	    "%u,%lf,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i\n",
            runnum,
	    run_time,
	    number_of_events,
	    number_of_tracks,
	    number_of_tracks_PIX,
	    number_of_tracks_FPIX,
	    number_of_tracks_BPIX,
	    number_of_tracks_TID,
	    number_of_tracks_TIDM,
	    number_of_tracks_TIDP,
	    number_of_tracks_TIB,
	    number_of_tracks_TEC,
	    number_of_tracks_TECP,
	    number_of_tracks_TECM,
	    number_of_tracks_TOB,
	    number_of_tracks_TID_1,
	    number_of_tracks_TID_1_plus,
	    number_of_tracks_TID_1_minus,
	    number_of_tracks_TID_2,
	    number_of_tracks_TID_2_plus,
	    number_of_tracks_TID_2_minus,
	    number_of_tracks_TID_3,
	    number_of_tracks_TID_3_plus,
	    number_of_tracks_TID_3_minus,
	    number_of_tracks_TEC_1,
	    number_of_tracks_TEC_1_plus,
	    number_of_tracks_TEC_1_minus,
	    number_of_tracks_TEC_2,
	    number_of_tracks_TEC_2_plus,
	    number_of_tracks_TEC_2_minus,
	    number_of_tracks_TEC_3,
	    number_of_tracks_TEC_3_plus,
	    number_of_tracks_TEC_3_minus,
	    number_of_tracks_TEC_4,
	    number_of_tracks_TEC_4_plus,
	    number_of_tracks_TEC_4_minus,
	    number_of_tracks_TEC_5,
	    number_of_tracks_TEC_5_plus,
	    number_of_tracks_TEC_5_minus,
	    number_of_tracks_TEC_6,
	    number_of_tracks_TEC_6_plus,
	    number_of_tracks_TEC_6_minus,
	    number_of_tracks_TEC_7,
	    number_of_tracks_TEC_7_plus,
	    number_of_tracks_TEC_7_minus,
	    number_of_tracks_TEC_8,
	    number_of_tracks_TEC_8_plus,
	    number_of_tracks_TEC_8_minus,
	    number_of_tracks_TEC_9,
	    number_of_tracks_TEC_9_plus,
	    number_of_tracks_TEC_9_minus);
    
    std::cout<<"Run No. : "<<runnum<<" : "<<"Run time : "<<run_time<<std::endl;
    nRunsUsed++;
  }  //Loop over runs closed

  std::cout << "Total Runs in this file: " << n << endl;
  std::cout << "Total Runs Used (negative runtimes excluded) : " << nRunsUsed << std::endl;
  std::cout << "Total Events: " << nTotalEventsIncludingNegativeRuntime <<std::endl;
  std::cout << "Total Events used (negative runtimes excluded): " << nTotalEvents << std::endl;
  std::cout << "Total Tracks: " << nTotalTracksIncludingNegativeRuntime << std::endl;
  std::cout << "Total Tracks used (negative runtimes excluded): " << nTotalTracks << std::endl;

  fclose(pFile);

}
