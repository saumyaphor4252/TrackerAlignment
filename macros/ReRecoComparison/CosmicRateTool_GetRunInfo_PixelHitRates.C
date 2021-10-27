void CosmicRateTool_GetRunInfo_PixelHitRates(const char *fileName) {
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
  pFile = fopen("RunInfo_PIXELHitRates.csv", "w");

  double run_time;
  unsigned int runnum;
  int number_of_events;
  int number_of_tracks;
  int number_of_hits_Total;
  int number_of_hits_PIX;
  int number_of_hits_BPIX;
  int number_of_hits_BPIX_layer1;
  int number_of_hits_BPIX_layer2;
  int number_of_hits_BPIX_layer3;
  int number_of_hits_BPIX_layer4;
  int number_of_hits_FPIX;
  int number_of_hits_FPIX_disk1;
  int number_of_hits_FPIX_disk2;
  int number_of_hits_FPIX_disk3;
  int number_of_hits_FPIX_disk1_plus;
  int number_of_hits_FPIX_disk1_minus;
  int number_of_hits_FPIX_disk2_plus;
  int number_of_hits_FPIX_disk2_minus;
  int number_of_hits_FPIX_disk3_plus;
  int number_of_hits_FPIX_disk3_minus;

  tree->SetBranchAddress("run_time", &run_time);
  tree->SetBranchAddress("runnum", &runnum);
  tree->SetBranchAddress("number_of_events", &number_of_events);
  tree->SetBranchAddress("number_of_tracks", &number_of_tracks);
  tree->SetBranchAddress("number_of_hits_Total", &number_of_hits_Total);
  tree->SetBranchAddress("number_of_hits_PIX", &number_of_hits_PIX);
  tree->SetBranchAddress("number_of_hits_BPIX", &number_of_hits_BPIX);
  tree->SetBranchAddress("number_of_hits_BPIX_layer1", &number_of_hits_BPIX_layer1);
  tree->SetBranchAddress("number_of_hits_BPIX_layer2", &number_of_hits_BPIX_layer2);
  tree->SetBranchAddress("number_of_hits_BPIX_layer3", &number_of_hits_BPIX_layer3);
  tree->SetBranchAddress("number_of_hits_BPIX_layer4", &number_of_hits_BPIX_layer4);
  tree->SetBranchAddress("number_of_hits_FPIX", &number_of_hits_FPIX);
  tree->SetBranchAddress("number_of_hits_FPIX_disk1", &number_of_hits_FPIX_disk1);
  tree->SetBranchAddress("number_of_hits_FPIX_disk2", &number_of_hits_FPIX_disk2);
  tree->SetBranchAddress("number_of_hits_FPIX_disk3", &number_of_hits_FPIX_disk3);
  tree->SetBranchAddress("number_of_hits_FPIX_disk1_plus", &number_of_hits_FPIX_disk1_plus);
  tree->SetBranchAddress("number_of_hits_FPIX_disk1_minus", &number_of_hits_FPIX_disk1_minus);
  tree->SetBranchAddress("number_of_hits_FPIX_disk2_plus", &number_of_hits_FPIX_disk2_plus);
  tree->SetBranchAddress("number_of_hits_FPIX_disk2_minus", &number_of_hits_FPIX_disk2_minus);
  tree->SetBranchAddress("number_of_hits_FPIX_disk3_plus", &number_of_hits_FPIX_disk3_plus);
  tree->SetBranchAddress("number_of_hits_FPIX_disk3_minus", &number_of_hits_FPIX_disk3_minus);

  fprintf(pFile,"%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s\n",
	  "runnumber",
	  "run_time",
	  "number_of_events",
	  "number_of_tracks",
	  "number_of_hits_Total",
	  "number_of_hits_PIX",
	  "number_of_hits_BPIX",
	  "number_of_hits_BPIX_layer1",
	  "number_of_hits_BPIX_layer2",
	  "number_of_hits_BPIX_layer3",
	  "number_of_hits_BPIX_layer4",
	  "number_of_hits_FPIX",
	  "number_of_hits_FPIX_disk1",
	  "number_of_hits_FPIX_disk2",
	  "number_of_hits_FPIX_disk3",
	  "number_of_hits_FPIX_disk1_plus",
	  "number_of_hits_FPIX_disk1_minus",
	  "number_of_hits_FPIX_disk2_plus",
	  "number_of_hits_FPIX_disk2_minus",
	  "number_of_hits_FPIX_disk3_plus",
	  "number_of_hits_FPIX_disk3_minus");
  
  int nTotalEvents = 0, nTotalTracks = 0, nTotalHits = 0, nRunsUsed = 0, nTotalEventsIncludingNegativeRuntime=0, nTotalTracksIncludingNegativeRuntime=0;

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
    nTotalHits += number_of_hits_Total;
    
    fprintf(pFile,
	    "%u,%lf,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i\n",
            runnum,
	    run_time,
	    number_of_events,
	    number_of_tracks,
	    number_of_hits_Total,
	    number_of_hits_PIX,
	    number_of_hits_BPIX,
	    number_of_hits_BPIX_layer1,
	    number_of_hits_BPIX_layer2,
	    number_of_hits_BPIX_layer3,
	    number_of_hits_BPIX_layer4,
	    number_of_hits_FPIX,
	    number_of_hits_FPIX_disk1,
	    number_of_hits_FPIX_disk2,
	    number_of_hits_FPIX_disk3,
	    number_of_hits_FPIX_disk1_plus,
	    number_of_hits_FPIX_disk1_minus,
	    number_of_hits_FPIX_disk2_plus,
	    number_of_hits_FPIX_disk2_minus,
	    number_of_hits_FPIX_disk3_plus,
	    number_of_hits_FPIX_disk3_minus
	    );
    
    std::cout<<"Run No. : "<<runnum<<" : "<<"Run time : "<<run_time<<std::endl;
    nRunsUsed++;
  }  //Loop over runs closed

  std::cout << "Total Runs in this file: " << n << endl;
  std::cout << "Total Runs Used (negative runtimes excluded) : " << nRunsUsed << std::endl;
  std::cout << "Total Events: " << nTotalEventsIncludingNegativeRuntime <<std::endl;
  std::cout << "Total Events used (negative runtimes excluded): " << nTotalEvents << std::endl;
  std::cout << "Total Tracks: " << nTotalTracksIncludingNegativeRuntime << std::endl;
  std::cout << "Total Tracks used (negative runtimes excluded): " << nTotalTracks << std::endl;
  std::cout << "Total Hits: " << nTotalHits << std::endl;

  fclose(pFile);

}
