void CosmicRateTool_CosmicTrackRates_fromCSV(const char* CSVfileName, unsigned int runLow = 0, unsigned int runUp = 0) {

  FILE *pFile;
  pFile = fopen("tracksInfo.txt", "w");

  TString InputFile= Form("%s",CSVfileName); 
  FILE *inputCSVfile;
  inputCSVfile = fopen(InputFile, "r");
  
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

  string Bar_Xtitle[8] = {"Event", "Track", "FPIX", "BPIX", "TIB", "TID", "TOB", "TEC"};
  double Bar_Ytitle[8] = {0};
  string Bar_Xtitle_TEC[9] = {"TEC_1", "TEC_2", "TEC_3", "TEC_4", "TEC_5", "TEC_6", "TEC_7", "TEC_8", "TEC_9"};
  string Bar_Xtitle_TECp[9] = {"TEC_1+", "TEC_2+", "TEC_3+", "TEC_4+", "TEC_5+", "TEC_6+", "TEC_7+", "TEC_8+", "TEC_9+"};
  string Bar_Xtitle_TECm[9] = {"TEC_1-", "TEC_2-", "TEC_3-", "TEC_4-", "TEC_5-", "TEC_6-", "TEC_7-", "TEC_8-", "TEC_9-"};
  string Bar_Xtitle_TID[9] = {"TID_1", "TID_1+", "TID_1-", "TID_2", "TID_2+", "TID_2-", "TID_3", "TID_3+", "TID_3-"};
  string Bar_Xtitle_ENDCAP[12] = {"TID_1", "TID_2", "TID_3", "TEC_1", "TEC_2", "TEC_3", "TEC_4", "TEC_5", "TEC_6", "TEC_7", "TEC_8", "TEC_9"};
  double Bar_Ytitle_TEC[9] = {0};
  double Bar_Ytitle_TECp[9] = {0};
  double Bar_Ytitle_TECm[9] = {0};
  double Bar_Ytitle_TID[9] = {0};
  double Bar_Ytitle_ENDCAP[12] = {0};

  int j = 0;
  double total_tracks = 0;
  int nTotalEvents = 0, nTotalTracks = 0, nRuns = 0;

  fprintf(pFile, "##################################################\n");
  fprintf(pFile, "         Track rate for each run number           \n");
  fprintf(pFile, "##################################################\n");

  while(!feof(inputCSVfile))             // Loop over Runs
  {
    fscanf(inputCSVfile,
	   "%u,%lf,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i,%i\n",
            &runnum,
	    &run_time,
	    &number_of_events,
	    &number_of_tracks,
	    &number_of_tracks_PIX,
	    &number_of_tracks_FPIX,
	    &number_of_tracks_BPIX,
	    &number_of_tracks_TID,
	    &number_of_tracks_TIDM,
	    &number_of_tracks_TIDP,
	    &number_of_tracks_TIB,
	    &number_of_tracks_TEC,
	    &number_of_tracks_TECP,
	    &number_of_tracks_TECM,
	    &number_of_tracks_TOB,
	    &number_of_tracks_TID_1,
	    &number_of_tracks_TID_1_plus,
	    &number_of_tracks_TID_1_minus,
	    &number_of_tracks_TID_2,
	    &number_of_tracks_TID_2_plus,
	    &number_of_tracks_TID_2_minus,
	    &number_of_tracks_TID_3,
	    &number_of_tracks_TID_3_plus,
	    &number_of_tracks_TID_3_minus,
	    &number_of_tracks_TEC_1,
	    &number_of_tracks_TEC_1_plus,
	    &number_of_tracks_TEC_1_minus,
	    &number_of_tracks_TEC_2,
	    &number_of_tracks_TEC_2_plus,
	    &number_of_tracks_TEC_2_minus,
	    &number_of_tracks_TEC_3,
	    &number_of_tracks_TEC_3_plus,
	    &number_of_tracks_TEC_3_minus,
	    &number_of_tracks_TEC_4,
	    &number_of_tracks_TEC_4_plus,
	    &number_of_tracks_TEC_4_minus,
	    &number_of_tracks_TEC_5,
	    &number_of_tracks_TEC_5_plus,
	    &number_of_tracks_TEC_5_minus,
	    &number_of_tracks_TEC_6,
	    &number_of_tracks_TEC_6_plus,
	    &number_of_tracks_TEC_6_minus,
	    &number_of_tracks_TEC_7,
	    &number_of_tracks_TEC_7_plus,
	    &number_of_tracks_TEC_7_minus,
	    &number_of_tracks_TEC_8,
	    &number_of_tracks_TEC_8_plus,
	    &number_of_tracks_TEC_8_minus,
	    &number_of_tracks_TEC_9,
	    &number_of_tracks_TEC_9_plus,
	    &number_of_tracks_TEC_9_minus);

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
            "runnum :%u, # of tracks :%i, track rates :%-10.2lf\n",
            runnum,
            number_of_tracks,
            track_rate.at(j));
    
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
  fprintf(pFile, "Total # of tracks   : %i\n", nTotalTracks);
  fprintf(pFile, "\n\n");

  fclose(pFile);
  fclose(inputCSVfile);

  //+++++++++++++++++++++++++++++       Make Directories     +++++++++++++++++++++++++++++++++++++

  gSystem->Exec("mkdir -p Rate_Plots");

  //----------------------------------------------------------------------------------------------

  TCanvas c("c1", "c1", 604, 82, 856, 836);  // Declare canvas
  gStyle->SetOptStat(0);
  c.Range(298434.4, -0.2989256, 299381.3, 2.010954);
  c.SetFillColor(0);
  c.SetBorderMode(0);
  c.SetBorderSize(2);
  c.SetTickx(1);
  c.SetTicky(1);
  c.SetGrid();
  c.SetLeftMargin(0.1883886);
  c.SetRightMargin(0.03909953);
  c.SetTopMargin(0.0875817);
  c.SetBottomMargin(0.1294118);
  c.SetFrameLineWidth(3);
  c.SetFrameBorderMode(0);

  //============  Text  =============//
  TLatex top_right_Title = TLatex();
  top_right_Title.SetTextFont(42);
  top_right_Title.SetTextSize(0.03717);

  TLatex detector = TLatex();
  detector.SetTextFont(62);
  detector.SetTextSize(0.047);

  //============  Declaring TVectors for TGraphs  =============//
  TVectorD event_rate_VecD;
  TVectorD event_rate_err_VecD;
  TVectorD track_rate_VecD;
  TVectorD track_rate_err_VecD;
  TVectorD runNumber_VecD;
  TVectorD runNumber_err_VecD;
  TVectorD track_rate_PIX_VecD;
  TVectorD track_rate_PIX_err_VecD;
  TVectorD track_rate_FPIX_VecD;
  TVectorD track_rate_FPIX_err_VecD;
  TVectorD track_rate_BPIX_VecD;
  TVectorD track_rate_BPIX_err_VecD;
  TVectorD track_rate_TOB_VecD;
  TVectorD track_rate_TOB_err_VecD;
  TVectorD track_rate_TIB_VecD;
  TVectorD track_rate_TIB_err_VecD;
  TVectorD track_rate_TID_VecD;
  TVectorD track_rate_TIDP_err_VecD;
  TVectorD track_rate_TIDP_VecD;
  TVectorD track_rate_TIDM_err_VecD;
  TVectorD track_rate_TIDM_VecD;
  TVectorD track_rate_TID_err_VecD;
  TVectorD track_rate_TEC_VecD;
  TVectorD track_rate_TEC_err_VecD;
  TVectorD track_rate_TECP_VecD;
  TVectorD track_rate_TECP_err_VecD;
  TVectorD track_rate_TECM_VecD;
  TVectorD track_rate_TECM_err_VecD;
  
  TVectorD track_rate_TID_1_VecD;
  TVectorD track_rate_TID_1_err_VecD;
  TVectorD track_rate_TID_2_VecD;
  TVectorD track_rate_TID_2_err_VecD;
  TVectorD track_rate_TID_3_VecD;
  TVectorD track_rate_TID_3_err_VecD;
  TVectorD track_rate_TID_1_plus_VecD;
  TVectorD track_rate_TID_1_plus_err_VecD;
  TVectorD track_rate_TID_2_plus_VecD;
  TVectorD track_rate_TID_2_plus_err_VecD;
  TVectorD track_rate_TID_3_plus_VecD;
  TVectorD track_rate_TID_3_plus_err_VecD;
  TVectorD track_rate_TID_1_minus_VecD;
  TVectorD track_rate_TID_1_minus_err_VecD;
  TVectorD track_rate_TID_2_minus_VecD;
  TVectorD track_rate_TID_2_minus_err_VecD;
  TVectorD track_rate_TID_3_minus_VecD;
  TVectorD track_rate_TID_3_minus_err_VecD;
  TVectorD track_rate_TEC_1_VecD;
  TVectorD track_rate_TEC_1_err_VecD;
  TVectorD track_rate_TEC_2_VecD;
  TVectorD track_rate_TEC_2_err_VecD;
  TVectorD track_rate_TEC_3_VecD;
  TVectorD track_rate_TEC_3_err_VecD;
  TVectorD track_rate_TEC_4_VecD;
  TVectorD track_rate_TEC_4_err_VecD;
  TVectorD track_rate_TEC_5_VecD;
  TVectorD track_rate_TEC_5_err_VecD;
  TVectorD track_rate_TEC_6_VecD;
  TVectorD track_rate_TEC_6_err_VecD;
  TVectorD track_rate_TEC_7_VecD;
  TVectorD track_rate_TEC_7_err_VecD;
  TVectorD track_rate_TEC_8_VecD;
  TVectorD track_rate_TEC_8_err_VecD;
  TVectorD track_rate_TEC_9_VecD;
  TVectorD track_rate_TEC_9_err_VecD;
  TVectorD track_rate_TEC_1_plus_VecD;
  TVectorD track_rate_TEC_1_plus_err_VecD;
  TVectorD track_rate_TEC_2_plus_VecD;
  TVectorD track_rate_TEC_2_plus_err_VecD;
  TVectorD track_rate_TEC_3_plus_VecD;
  TVectorD track_rate_TEC_3_plus_err_VecD;
  TVectorD track_rate_TEC_4_plus_VecD;
  TVectorD track_rate_TEC_4_plus_err_VecD;
  TVectorD track_rate_TEC_5_plus_VecD;
  TVectorD track_rate_TEC_5_plus_err_VecD;
  TVectorD track_rate_TEC_6_plus_VecD;
  TVectorD track_rate_TEC_6_plus_err_VecD;
  TVectorD track_rate_TEC_7_plus_VecD;
  TVectorD track_rate_TEC_7_plus_err_VecD;
  TVectorD track_rate_TEC_8_plus_VecD;
  TVectorD track_rate_TEC_8_plus_err_VecD;
  TVectorD track_rate_TEC_9_plus_VecD;
  TVectorD track_rate_TEC_9_plus_err_VecD;
  TVectorD track_rate_TEC_1_minus_VecD;
  TVectorD track_rate_TEC_1_minus_err_VecD;
  TVectorD track_rate_TEC_2_minus_VecD;
  TVectorD track_rate_TEC_2_minus_err_VecD;
  TVectorD track_rate_TEC_3_minus_VecD;
  TVectorD track_rate_TEC_3_minus_err_VecD;
  TVectorD track_rate_TEC_4_minus_VecD;
  TVectorD track_rate_TEC_4_minus_err_VecD;
  TVectorD track_rate_TEC_5_minus_VecD;
  TVectorD track_rate_TEC_5_minus_err_VecD;
  TVectorD track_rate_TEC_6_minus_VecD;
  TVectorD track_rate_TEC_6_minus_err_VecD;
  TVectorD track_rate_TEC_7_minus_VecD;
  TVectorD track_rate_TEC_7_minus_err_VecD;
  TVectorD track_rate_TEC_8_minus_VecD;
  TVectorD track_rate_TEC_8_minus_err_VecD;
  TVectorD track_rate_TEC_9_minus_VecD;
  TVectorD track_rate_TEC_9_minus_err_VecD;  

  runNumber_VecD.Use(runNumber.size(), &(runNumber[0]));
  runNumber_err_VecD.Use(runNumber_err.size(), &(runNumber_err[0]));
  event_rate_VecD.Use(event_rate.size(), &(event_rate[0]));
  event_rate_err_VecD.Use(event_rate_err.size(), &(event_rate_err[0]));

  track_rate_VecD.Use(track_rate.size(), &(track_rate[0]));
  track_rate_err_VecD.Use(track_rate_err.size(), &(track_rate_err[0]));

  track_rate_PIX_VecD.Use(track_rate_PIX.size(), &(track_rate_PIX[0]));
  track_rate_PIX_err_VecD.Use(track_rate_PIX_err.size(), &(track_rate_PIX_err[0]));
  track_rate_FPIX_VecD.Use(track_rate_FPIX.size(), &(track_rate_FPIX[0]));
  track_rate_FPIX_err_VecD.Use(track_rate_FPIX_err.size(), &(track_rate_FPIX_err[0]));
  track_rate_BPIX_VecD.Use(track_rate_BPIX.size(), &(track_rate_BPIX[0]));
  track_rate_BPIX_err_VecD.Use(track_rate_BPIX_err.size(), &(track_rate_BPIX_err[0]));
  track_rate_TOB_VecD.Use(track_rate_TOB.size(), &(track_rate_TOB[0]));
  track_rate_TOB_err_VecD.Use(track_rate_TOB_err.size(), &(track_rate_TOB_err[0]));
  track_rate_TIB_VecD.Use(track_rate_TIB.size(), &(track_rate_TIB[0]));
  track_rate_TIB_err_VecD.Use(track_rate_TIB_err.size(), &(track_rate_TIB_err[0]));
  track_rate_TID_VecD.Use(track_rate_TID.size(), &(track_rate_TID[0]));
  track_rate_TID_err_VecD.Use(track_rate_TID_err.size(), &(track_rate_TID_err[0]));
  track_rate_TIDP_VecD.Use(track_rate_TIDP.size(), &(track_rate_TIDP[0]));
  track_rate_TIDP_err_VecD.Use(track_rate_TIDP_err.size(), &(track_rate_TIDP_err[0]));
  track_rate_TIDM_VecD.Use(track_rate_TIDM.size(), &(track_rate_TIDM[0]));
  track_rate_TIDM_err_VecD.Use(track_rate_TIDM_err.size(), &(track_rate_TIDM_err[0]));
  track_rate_TEC_VecD.Use(track_rate_TEC.size(), &(track_rate_TEC[0]));
  track_rate_TEC_err_VecD.Use(track_rate_TEC_err.size(), &(track_rate_TEC_err[0]));
  track_rate_TECP_VecD.Use(track_rate_TECP.size(), &(track_rate_TECP[0]));
  track_rate_TECP_err_VecD.Use(track_rate_TECP_err.size(), &(track_rate_TECP_err[0]));
  track_rate_TECM_VecD.Use(track_rate_TECM.size(), &(track_rate_TECM[0]));
  track_rate_TECM_err_VecD.Use(track_rate_TECM_err.size(), &(track_rate_TECM_err[0]));

  track_rate_TID_1_VecD.Use(track_rate_TID_1.size(), &(track_rate_TID_1[0]));
  track_rate_TID_1_err_VecD.Use(track_rate_TID_1_err.size(), &(track_rate_TID_1_err[0]));
  track_rate_TID_1_plus_VecD.Use(track_rate_TID_1_plus.size(), &(track_rate_TID_1_plus[0]));
  track_rate_TID_1_plus_err_VecD.Use(track_rate_TID_1_plus_err.size(), &(track_rate_TID_1_plus_err[0]));
  track_rate_TID_1_minus_VecD.Use(track_rate_TID_1_minus.size(), &(track_rate_TID_1_minus[0]));
  track_rate_TID_1_minus_err_VecD.Use(track_rate_TID_1_minus_err.size(), &(track_rate_TID_1_minus_err[0]));
  track_rate_TID_2_VecD.Use(track_rate_TID_2.size(), &(track_rate_TID_2[0]));
  track_rate_TID_2_err_VecD.Use(track_rate_TID_2_err.size(), &(track_rate_TID_2_err[0]));
  track_rate_TID_2_plus_VecD.Use(track_rate_TID_2_plus.size(), &(track_rate_TID_2_plus[0]));
  track_rate_TID_2_plus_err_VecD.Use(track_rate_TID_2_plus_err.size(), &(track_rate_TID_2_plus_err[0]));
  track_rate_TID_2_minus_VecD.Use(track_rate_TID_2_minus.size(), &(track_rate_TID_2_minus[0]));
  track_rate_TID_2_minus_err_VecD.Use(track_rate_TID_2_minus_err.size(), &(track_rate_TID_2_minus_err[0]));
  track_rate_TID_3_VecD.Use(track_rate_TID_3.size(), &(track_rate_TID_3[0]));
  track_rate_TID_3_err_VecD.Use(track_rate_TID_3_err.size(), &(track_rate_TID_3_err[0]));
  track_rate_TID_3_plus_VecD.Use(track_rate_TID_3_plus.size(), &(track_rate_TID_3_plus[0]));
  track_rate_TID_3_plus_err_VecD.Use(track_rate_TID_3_plus_err.size(), &(track_rate_TID_3_plus_err[0]));
  track_rate_TID_3_minus_VecD.Use(track_rate_TID_3_minus.size(), &(track_rate_TID_3_minus[0]));
  track_rate_TID_3_minus_err_VecD.Use(track_rate_TID_3_minus_err.size(), &(track_rate_TID_3_minus_err[0]));
  track_rate_TEC_1_VecD.Use(track_rate_TEC_1.size(), &(track_rate_TEC_1[0]));
  track_rate_TEC_1_err_VecD.Use(track_rate_TEC_1_err.size(), &(track_rate_TEC_1_err[0]));
  track_rate_TEC_2_VecD.Use(track_rate_TEC_2.size(), &(track_rate_TEC_2[0]));
  track_rate_TEC_2_err_VecD.Use(track_rate_TEC_2_err.size(), &(track_rate_TEC_2_err[0]));
  track_rate_TEC_3_VecD.Use(track_rate_TEC_3.size(), &(track_rate_TEC_3[0]));
  track_rate_TEC_3_err_VecD.Use(track_rate_TEC_3_err.size(), &(track_rate_TEC_3_err[0]));
  track_rate_TEC_4_VecD.Use(track_rate_TEC_4.size(), &(track_rate_TEC_4[0]));
  track_rate_TEC_4_err_VecD.Use(track_rate_TEC_4_err.size(), &(track_rate_TEC_4_err[0]));
  track_rate_TEC_5_VecD.Use(track_rate_TEC_5.size(), &(track_rate_TEC_5[0]));
  track_rate_TEC_5_err_VecD.Use(track_rate_TEC_5_err.size(), &(track_rate_TEC_5_err[0]));
  track_rate_TEC_6_VecD.Use(track_rate_TEC_6.size(), &(track_rate_TEC_6[0]));
  track_rate_TEC_6_err_VecD.Use(track_rate_TEC_6_err.size(), &(track_rate_TEC_6_err[0]));
  track_rate_TEC_7_VecD.Use(track_rate_TEC_7.size(), &(track_rate_TEC_7[0]));
  track_rate_TEC_7_err_VecD.Use(track_rate_TEC_7_err.size(), &(track_rate_TEC_7_err[0]));
  track_rate_TEC_8_VecD.Use(track_rate_TEC_8.size(), &(track_rate_TEC_8[0]));
  track_rate_TEC_8_err_VecD.Use(track_rate_TEC_8_err.size(), &(track_rate_TEC_8_err[0]));
  track_rate_TEC_9_VecD.Use(track_rate_TEC_9.size(), &(track_rate_TEC_9[0]));
  track_rate_TEC_9_err_VecD.Use(track_rate_TEC_9_err.size(), &(track_rate_TEC_9_err[0]));
  track_rate_TEC_1_plus_VecD.Use(track_rate_TEC_1_plus.size(), &(track_rate_TEC_1_plus[0]));
  track_rate_TEC_1_plus_err_VecD.Use(track_rate_TEC_1_plus_err.size(), &(track_rate_TEC_1_plus_err[0]));
  track_rate_TEC_2_plus_VecD.Use(track_rate_TEC_2_plus.size(), &(track_rate_TEC_2_plus[0]));
  track_rate_TEC_2_plus_err_VecD.Use(track_rate_TEC_2_plus_err.size(), &(track_rate_TEC_2_plus_err[0]));  
  track_rate_TEC_3_plus_VecD.Use(track_rate_TEC_3_plus.size(), &(track_rate_TEC_3_plus[0]));
  track_rate_TEC_3_plus_err_VecD.Use(track_rate_TEC_3_plus_err.size(), &(track_rate_TEC_3_plus_err[0]));
  track_rate_TEC_4_plus_VecD.Use(track_rate_TEC_4_plus.size(), &(track_rate_TEC_4_plus[0]));
  track_rate_TEC_4_plus_err_VecD.Use(track_rate_TEC_4_plus_err.size(), &(track_rate_TEC_4_plus_err[0]));  
  track_rate_TEC_5_plus_VecD.Use(track_rate_TEC_5_plus.size(), &(track_rate_TEC_5_plus[0]));
  track_rate_TEC_5_plus_err_VecD.Use(track_rate_TEC_5_plus_err.size(), &(track_rate_TEC_5_plus_err[0]));
  track_rate_TEC_6_plus_VecD.Use(track_rate_TEC_6_plus.size(), &(track_rate_TEC_6_plus[0]));
  track_rate_TEC_6_plus_err_VecD.Use(track_rate_TEC_6_plus_err.size(), &(track_rate_TEC_6_plus_err[0]));  
  track_rate_TEC_7_plus_VecD.Use(track_rate_TEC_7_plus.size(), &(track_rate_TEC_7_plus[0]));
  track_rate_TEC_7_plus_err_VecD.Use(track_rate_TEC_7_plus_err.size(), &(track_rate_TEC_7_plus_err[0]));
  track_rate_TEC_8_plus_VecD.Use(track_rate_TEC_8_plus.size(), &(track_rate_TEC_8_plus[0]));
  track_rate_TEC_8_plus_err_VecD.Use(track_rate_TEC_8_plus_err.size(), &(track_rate_TEC_8_plus_err[0]));  
  track_rate_TEC_9_plus_VecD.Use(track_rate_TEC_9_plus.size(), &(track_rate_TEC_9_plus[0]));
  track_rate_TEC_9_plus_err_VecD.Use(track_rate_TEC_9_plus_err.size(), &(track_rate_TEC_9_plus_err[0]));
  track_rate_TEC_1_minus_VecD.Use(track_rate_TEC_1_minus.size(), &(track_rate_TEC_1_minus[0]));
  track_rate_TEC_1_minus_err_VecD.Use(track_rate_TEC_1_minus_err.size(), &(track_rate_TEC_1_minus_err[0]));
  track_rate_TEC_2_minus_VecD.Use(track_rate_TEC_2_minus.size(), &(track_rate_TEC_2_minus[0]));
  track_rate_TEC_2_minus_err_VecD.Use(track_rate_TEC_2_minus_err.size(), &(track_rate_TEC_2_minus_err[0]));  
  track_rate_TEC_3_minus_VecD.Use(track_rate_TEC_3_minus.size(), &(track_rate_TEC_3_minus[0]));
  track_rate_TEC_3_minus_err_VecD.Use(track_rate_TEC_3_minus_err.size(), &(track_rate_TEC_3_minus_err[0]));
  track_rate_TEC_4_minus_VecD.Use(track_rate_TEC_4_minus.size(), &(track_rate_TEC_4_minus[0]));
  track_rate_TEC_4_minus_err_VecD.Use(track_rate_TEC_4_minus_err.size(), &(track_rate_TEC_4_minus_err[0]));  
  track_rate_TEC_5_minus_VecD.Use(track_rate_TEC_5_minus.size(), &(track_rate_TEC_5_minus[0]));
  track_rate_TEC_5_minus_err_VecD.Use(track_rate_TEC_5_minus_err.size(), &(track_rate_TEC_5_minus_err[0]));
  track_rate_TEC_6_minus_VecD.Use(track_rate_TEC_6_minus.size(), &(track_rate_TEC_6_minus[0]));
  track_rate_TEC_6_minus_err_VecD.Use(track_rate_TEC_6_minus_err.size(), &(track_rate_TEC_6_minus_err[0]));  
  track_rate_TEC_7_minus_VecD.Use(track_rate_TEC_7_minus.size(), &(track_rate_TEC_7_minus[0]));
  track_rate_TEC_7_minus_err_VecD.Use(track_rate_TEC_7_minus_err.size(), &(track_rate_TEC_7_minus_err[0]));
  track_rate_TEC_8_minus_VecD.Use(track_rate_TEC_8_minus.size(), &(track_rate_TEC_8_minus[0]));
  track_rate_TEC_8_minus_err_VecD.Use(track_rate_TEC_8_minus_err.size(), &(track_rate_TEC_8_minus_err[0]));  
  track_rate_TEC_9_minus_VecD.Use(track_rate_TEC_9_minus.size(), &(track_rate_TEC_9_minus[0]));
  track_rate_TEC_9_minus_err_VecD.Use(track_rate_TEC_9_minus_err.size(), &(track_rate_TEC_9_minus_err[0]));

  //+++++++++++++++++++++++++++++  Overall event event rate  +++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_event_rate(runNumber_VecD, event_rate_VecD, runNumber_err_VecD, event_rate_err_VecD);
  gr_event_rate.GetXaxis()->SetTitle("Run Number");
  gr_event_rate.GetXaxis()->SetLabelSize(0.04);
  gr_event_rate.GetXaxis()->SetNoExponent();
  gr_event_rate.GetXaxis()->SetNdivisions(5);
  gr_event_rate.GetYaxis()->SetTitle("Event Rate (Hz)");
  gr_event_rate.GetXaxis()->SetTitleSize(0.05);
  gr_event_rate.GetYaxis()->SetLabelSize(0.05);
  gr_event_rate.GetYaxis()->SetTitleSize(0.05);
  gr_event_rate.SetMarkerStyle(20);
  gr_event_rate.SetMarkerSize(1.4);
  gr_event_rate.SetMarkerColor(kBlue);
  gr_event_rate.SetTitle("");
  //gr_event_rate.GetYaxis()->SetRangeUser(0,7);
  gr_event_rate.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "Event Rate");
  c.SetGrid();
  c.SaveAs("event_rate.png");
  c.SaveAs("event_rate.pdf");
  c.SaveAs("event_rate.C");
  c.Clear();
  gSystem->Exec("mv event_rate.png Rate_Plots");
  gSystem->Exec("mv event_rate.pdf Rate_Plots");
  gSystem->Exec("mv event_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------

  //++++++++++++++++++++++++++++++  Overall track rate  +++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate(runNumber_VecD, track_rate_VecD, runNumber_err_VecD, track_rate_err_VecD);
  gr_track_rate.GetXaxis()->SetTitle("Run Number");
  gr_track_rate.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate.GetXaxis()->SetNoExponent();
  gr_track_rate.GetXaxis()->SetNdivisions(5);
  gr_track_rate.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate.SetMarkerStyle(20);
  gr_track_rate.SetMarkerSize(1.4);
  gr_track_rate.SetMarkerColor(kBlue);
  gr_track_rate.SetTitle("");
  gr_track_rate.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "Track Rate");
  c.SetGrid();
  c.SaveAs("track_rate.png");
  c.SaveAs("track_rate.pdf");
  c.SaveAs("track_rate.C");
  c.Clear();
  gSystem->Exec("mv track_rate.png Rate_Plots");
  gSystem->Exec("mv track_rate.pdf Rate_Plots");
  gSystem->Exec("mv track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------

  //+++++++++++++++++++++++++++++++  Total Pixel track rate +++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_PIX(runNumber_VecD, track_rate_PIX_VecD, runNumber_err_VecD, track_rate_PIX_err_VecD);
  gr_track_rate_PIX.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_PIX.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_PIX.GetXaxis()->SetNoExponent();
  gr_track_rate_PIX.GetXaxis()->SetNdivisions(5);
  gr_track_rate_PIX.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_PIX.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_PIX.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_PIX.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_PIX.SetMarkerStyle(20);
  gr_track_rate_PIX.SetMarkerSize(1.4);
  gr_track_rate_PIX.SetMarkerColor(kBlue);
  gr_track_rate_PIX.SetTitle("");
  gr_track_rate_PIX.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "PIXEL");
  c.SetGrid();
  c.SaveAs("pixel_track_rate.png");
  c.SaveAs("pixel_track_rate.pdf");
  c.SaveAs("pixel_track_rate.C");
  c.Clear();
  gSystem->Exec("mv pixel_track_rate.png Rate_Plots");
  gSystem->Exec("mv pixel_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv pixel_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------

  //++++++++++++++++++++++++++++++++  FPIX track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_FPIX(runNumber_VecD, track_rate_FPIX_VecD, runNumber_err_VecD, track_rate_FPIX_err_VecD);
  gr_track_rate_FPIX.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_FPIX.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_FPIX.GetXaxis()->SetNoExponent();
  gr_track_rate_FPIX.GetXaxis()->SetNdivisions(5);
  gr_track_rate_FPIX.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_FPIX.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_FPIX.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_FPIX.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_FPIX.SetMarkerStyle(20);
  gr_track_rate_FPIX.SetMarkerSize(1.4);
  gr_track_rate_FPIX.SetMarkerColor(kBlue);
  gr_track_rate_FPIX.SetTitle("");
  gr_track_rate_FPIX.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "FPIX");
  c.SetGrid();
  c.SaveAs("fpix_track_rate.png");
  c.SaveAs("fpix_track_rate.pdf");
  c.SaveAs("fpix_track_rate.C");
  c.Clear();
  gSystem->Exec("mv fpix_track_rate.png Rate_Plots");
  gSystem->Exec("mv fpix_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv fpix_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------

  //++++++++++++++++++++++++++++++++  BPIX track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_BPIX(runNumber_VecD, track_rate_BPIX_VecD, runNumber_err_VecD, track_rate_BPIX_err_VecD);
  gr_track_rate_BPIX.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_BPIX.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_BPIX.GetXaxis()->SetNoExponent();
  gr_track_rate_BPIX.GetXaxis()->SetNdivisions(5);
  gr_track_rate_BPIX.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_BPIX.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_BPIX.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_BPIX.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_BPIX.SetMarkerStyle(20);
  gr_track_rate_BPIX.SetMarkerSize(1.4);
  gr_track_rate_BPIX.SetMarkerColor(kBlue);
  gr_track_rate_BPIX.SetTitle("");
  gr_track_rate_BPIX.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "BPIX");
  c.SetGrid();
  c.SaveAs("bpix_track_rate.png");
  c.SaveAs("bpix_track_rate.pdf");
  c.SaveAs("bpix_track_rate.C");
  c.Clear();
  gSystem->Exec("mv bpix_track_rate.png Rate_Plots");
  gSystem->Exec("mv bpix_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv bpix_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------

  //++++++++++++++++++++++++++++++++  TOB track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TOB(runNumber_VecD, track_rate_TOB_VecD, runNumber_err_VecD, track_rate_TOB_err_VecD);
  gr_track_rate_TOB.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TOB.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TOB.GetXaxis()->SetNoExponent();
  gr_track_rate_TOB.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TOB.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TOB.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TOB.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TOB.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TOB.SetMarkerStyle(20);
  gr_track_rate_TOB.SetMarkerSize(1.4);
  gr_track_rate_TOB.SetMarkerColor(kBlue);
  gr_track_rate_TOB.SetTitle("");
  gr_track_rate_TOB.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TOB");
  c.SetGrid();
  c.SaveAs("tob_track_rate.png");
  c.SaveAs("tob_track_rate.pdf");
  c.SaveAs("tob_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tob_track_rate.png Rate_Plots");
  gSystem->Exec("mv tob_track_rate.C Rate_Plots");
  gSystem->Exec("mv tob_track_rate.pdf Rate_Plots");

  //-----------------------------------------------------------------------------------------------

  //++++++++++++++++++++++++++++++++  TIB track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TIB(runNumber_VecD, track_rate_TIB_VecD, runNumber_err_VecD, track_rate_TIB_err_VecD);
  gr_track_rate_TIB.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TIB.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TIB.GetXaxis()->SetNoExponent();
  gr_track_rate_TIB.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TIB.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TIB.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TIB.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TIB.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TIB.SetMarkerStyle(20);
  gr_track_rate_TIB.SetMarkerSize(1.4);
  gr_track_rate_TIB.SetMarkerColor(kBlue);
  gr_track_rate_TIB.SetTitle("");
  gr_track_rate_TIB.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TIB");
  c.SetGrid();
  c.SaveAs("tib_track_rate.png");
  c.SaveAs("tib_track_rate.pdf");
  c.SaveAs("tib_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tib_track_rate.png Rate_Plots");
  gSystem->Exec("mv tib_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tib_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------

  //++++++++++++++++++++++++++++++++  TID track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TID(runNumber_VecD, track_rate_TID_VecD, runNumber_err_VecD, track_rate_TID_err_VecD);
  gr_track_rate_TID.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TID.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TID.GetXaxis()->SetNoExponent();
  gr_track_rate_TID.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TID.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TID.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TID.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TID.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TID.SetMarkerStyle(20);
  gr_track_rate_TID.SetMarkerSize(1.4);
  gr_track_rate_TID.SetMarkerColor(kBlue);
  gr_track_rate_TID.SetTitle("");
  gr_track_rate_TID.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TID");
  c.SetGrid();
  c.SaveAs("tid_track_rate.png");
  c.SaveAs("tid_track_rate.pdf");
  c.SaveAs("tid_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tid_track_rate.png Rate_Plots");
  gSystem->Exec("mv tid_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tid_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------

  //++++++++++++++++++++++++++++++++  Total TEC track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC(runNumber_VecD, track_rate_TEC_VecD, runNumber_err_VecD, track_rate_TEC_err_VecD);
  gr_track_rate_TEC.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC.SetMarkerStyle(20);
  gr_track_rate_TEC.SetMarkerSize(1.4);
  gr_track_rate_TEC.SetMarkerColor(kBlue);
  gr_track_rate_TEC.SetTitle("");
  gr_track_rate_TEC.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC");
  c.SetGrid();
  c.SaveAs("tec_track_rate.png");
  c.SaveAs("tec_track_rate.pdf");
  c.SaveAs("tec_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------

    //++++++++++++++++++++++++++++++++  TID+/- track rate  ++++++++++++++++++++++++++++++++++++++++++++
  TMultiGraph mg_tid("track rate", "");  // Multigraph decleration

  TGraphErrors *gr_track_rate_TIDP =
  new TGraphErrors(runNumber_VecD, track_rate_TIDP_VecD, runNumber_err_VecD, track_rate_TIDP_err_VecD);
  gr_track_rate_TIDP->SetMarkerStyle(20);
  gr_track_rate_TIDP->SetMarkerSize(1.4);
  gr_track_rate_TIDP->SetMarkerColor(kBlack);

  TGraphErrors *gr_track_rate_TIDM =
  new TGraphErrors(runNumber_VecD, track_rate_TIDM_VecD, runNumber_err_VecD, track_rate_TIDM_err_VecD);
  gr_track_rate_TIDM->SetMarkerStyle(20);
  gr_track_rate_TIDM->SetMarkerSize(1.4);
  gr_track_rate_TIDM->SetMarkerColor(kGreen);

  mg_tid.Add(gr_track_rate_TIDP);
  mg_tid.Add(gr_track_rate_TIDM);
  mg_tid.Draw("AP");
  mg_tid.GetXaxis()->SetTitle("Run Number");
  mg_tid.GetXaxis()->SetNoExponent();
  mg_tid.GetXaxis()->SetNdivisions(5);
  mg_tid.GetXaxis()->SetLabelSize(0.04);
  mg_tid.GetXaxis()->SetTitleSize(0.05);
  mg_tid.GetYaxis()->SetLabelSize(0.05);
  mg_tid.GetYaxis()->SetTitleSize(0.05);
  mg_tid.GetYaxis()->SetTitle("Track Rate (Hz)");

  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TID+/-");

  TLegend leg(0.76, 0.76, 0.92, 0.90);  // Legend for TID+/-
  leg.AddEntry(gr_track_rate_TIDP, "TID+", "p");
  leg.AddEntry(gr_track_rate_TIDM, "TID-", "p");
  leg.SetBorderSize(1);
  leg.SetShadowColor(0);
  leg.SetFillColor(0);
  leg.Draw();
  c.SetGrid();
  c.SaveAs("tid_track_ratePM.png");
  c.Clear();
  gSystem->Exec("mv tid_track_ratePM.png Rate_Plots");

  //-----------------------------------------------------------------------------------------------

  //++++++++++++++++++++++++++++++++  TEC+/- track rate  ++++++++++++++++++++++++++++++++++++++++++++
  TMultiGraph mg("track rate", "");  // Multigraph decleration

  TGraphErrors *gr_track_rate_TECP =
  new TGraphErrors(runNumber_VecD, track_rate_TECP_VecD, runNumber_err_VecD, track_rate_TECP_err_VecD);
  gr_track_rate_TECP->SetMarkerStyle(20);
  gr_track_rate_TECP->SetMarkerSize(1.4);
  gr_track_rate_TECP->SetMarkerColor(kBlack);

  TGraphErrors *gr_track_rate_TECM =
  new TGraphErrors(runNumber_VecD, track_rate_TECM_VecD, runNumber_err_VecD, track_rate_TECM_err_VecD);
  gr_track_rate_TECM->SetMarkerStyle(20);
  gr_track_rate_TECM->SetMarkerSize(1.4);
  gr_track_rate_TECM->SetMarkerColor(kGreen);

  mg.Add(gr_track_rate_TECP);
  mg.Add(gr_track_rate_TECM);
  mg.Draw("AP");
  mg.GetXaxis()->SetTitle("Run Number");
  mg.GetXaxis()->SetNoExponent();
  mg.GetXaxis()->SetNdivisions(5);
  mg.GetXaxis()->SetLabelSize(0.04);
  mg.GetXaxis()->SetTitleSize(0.05);
  mg.GetYaxis()->SetLabelSize(0.05);
  mg.GetYaxis()->SetTitleSize(0.05);
  mg.GetYaxis()->SetTitle("Track Rate (Hz)");

  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC+/-");

  TLegend leg_tecpm(0.76, 0.76, 0.92, 0.90);  // Legend for TEC+/-
  leg_tecpm.AddEntry(gr_track_rate_TECP, "TEC+", "p");
  leg_tecpm.AddEntry(gr_track_rate_TECM, "TEC-", "p");
  leg_tecpm.SetBorderSize(1);
  leg_tecpm.SetShadowColor(0);
  leg_tecpm.SetFillColor(0);
  leg_tecpm.Draw();
  c.SetGrid();
  c.SaveAs("tec_track_ratePM.png");
  c.Clear();
  gSystem->Exec("mv tec_track_ratePM.png Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TID_1 track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TID_1(runNumber_VecD, track_rate_TID_1_VecD, runNumber_err_VecD, track_rate_TID_1_err_VecD);
  gr_track_rate_TID_1.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TID_1.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TID_1.GetXaxis()->SetNoExponent();
  gr_track_rate_TID_1.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TID_1.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TID_1.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_1.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TID_1.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_1.SetMarkerStyle(20);
  gr_track_rate_TID_1.SetMarkerSize(1.4);
  gr_track_rate_TID_1.SetMarkerColor(kBlue);
  gr_track_rate_TID_1.SetTitle("");
  gr_track_rate_TID_1.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TID 1");
  c.SetGrid();
  c.SaveAs("tid_1_track_rate.png");
  c.SaveAs("tid_1_track_rate.pdf");
  c.SaveAs("tid_1_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tid_1_track_rate.png Rate_Plots");
  gSystem->Exec("mv tid_1_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tid_1_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TID_2 track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TID_2(runNumber_VecD, track_rate_TID_2_VecD, runNumber_err_VecD, track_rate_TID_2_err_VecD);
  gr_track_rate_TID_2.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TID_2.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TID_2.GetXaxis()->SetNoExponent();
  gr_track_rate_TID_2.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TID_2.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TID_2.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_2.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TID_2.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_2.SetMarkerStyle(20);
  gr_track_rate_TID_2.SetMarkerSize(1.4);
  gr_track_rate_TID_2.SetMarkerColor(kBlue);
  gr_track_rate_TID_2.SetTitle("");
  gr_track_rate_TID_2.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TID 2");
  c.SetGrid();
  c.SaveAs("tid_2_track_rate.png");
  c.SaveAs("tid_2_track_rate.pdf");
  c.SaveAs("tid_2_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tid_2_track_rate.png Rate_Plots");
  gSystem->Exec("mv tid_2_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tid_2_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TID_3 track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TID_3(runNumber_VecD, track_rate_TID_3_VecD, runNumber_err_VecD, track_rate_TID_3_err_VecD);
  gr_track_rate_TID_3.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TID_3.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TID_3.GetXaxis()->SetNoExponent();
  gr_track_rate_TID_3.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TID_3.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TID_3.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_3.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TID_3.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_3.SetMarkerStyle(20);
  gr_track_rate_TID_3.SetMarkerSize(1.4);
  gr_track_rate_TID_3.SetMarkerColor(kBlue);
  gr_track_rate_TID_3.SetTitle("");
  gr_track_rate_TID_3.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TID 3");
  c.SetGrid();
  c.SaveAs("tid_3_track_rate.png");
  c.SaveAs("tid_3_track_rate.pdf");
  c.SaveAs("tid_3_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tid_3_track_rate.png Rate_Plots");
  gSystem->Exec("mv tid_3_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tid_3_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------

  //++++++++++++++++++++++++++++++++  Total TID_1_plus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TID_1_plus(runNumber_VecD, track_rate_TID_1_plus_VecD, runNumber_err_VecD, track_rate_TID_1_plus_err_VecD);
  gr_track_rate_TID_1_plus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TID_1_plus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TID_1_plus.GetXaxis()->SetNoExponent();
  gr_track_rate_TID_1_plus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TID_1_plus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TID_1_plus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_1_plus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TID_1_plus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_1_plus.SetMarkerStyle(20);
  gr_track_rate_TID_1_plus.SetMarkerSize(1.4);
  gr_track_rate_TID_1_plus.SetMarkerColor(kBlue);
  gr_track_rate_TID_1_plus.SetTitle("");
  gr_track_rate_TID_1_plus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TID 1+");
  c.SetGrid();
  c.SaveAs("tid_1_plus_track_rate.png");
  c.SaveAs("tid_1_plus_track_rate.pdf");
  c.SaveAs("tid_1_plus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tid_1_plus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tid_1_plus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tid_1_plus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TID_1_minus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TID_1_minus(runNumber_VecD, track_rate_TID_1_minus_VecD, runNumber_err_VecD, track_rate_TID_1_minus_err_VecD);
  gr_track_rate_TID_1_minus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TID_1_minus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TID_1_minus.GetXaxis()->SetNoExponent();
  gr_track_rate_TID_1_minus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TID_1_minus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TID_1_minus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_1_minus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TID_1_minus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_1_minus.SetMarkerStyle(20);
  gr_track_rate_TID_1_minus.SetMarkerSize(1.4);
  gr_track_rate_TID_1_minus.SetMarkerColor(kBlue);
  gr_track_rate_TID_1_minus.SetTitle("");
  gr_track_rate_TID_1_minus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TID 1-");
  c.SetGrid();
  c.SaveAs("tid_1_minus_track_rate.png");
  c.SaveAs("tid_1_minus_track_rate.pdf");
  c.SaveAs("tid_1_minus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tid_1_minus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tid_1_minus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tid_1_minus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TID_2_plus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TID_2_plus(runNumber_VecD, track_rate_TID_2_plus_VecD, runNumber_err_VecD, track_rate_TID_2_plus_err_VecD);
  gr_track_rate_TID_2_plus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TID_2_plus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TID_2_plus.GetXaxis()->SetNoExponent();
  gr_track_rate_TID_2_plus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TID_2_plus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TID_2_plus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_2_plus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TID_2_plus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_2_plus.SetMarkerStyle(20);
  gr_track_rate_TID_2_plus.SetMarkerSize(1.4);
  gr_track_rate_TID_2_plus.SetMarkerColor(kBlue);
  gr_track_rate_TID_2_plus.SetTitle("");
  gr_track_rate_TID_2_plus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TID 2+");
  c.SetGrid();
  c.SaveAs("tid_2_plus_track_rate.png");
  c.SaveAs("tid_2_plus_track_rate.pdf");
  c.SaveAs("tid_2_plus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tid_2_plus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tid_2_plus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tid_2_plus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TID_2_minus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TID_2_minus(runNumber_VecD, track_rate_TID_2_minus_VecD, runNumber_err_VecD, track_rate_TID_2_minus_err_VecD);
  gr_track_rate_TID_2_minus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TID_2_minus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TID_2_minus.GetXaxis()->SetNoExponent();
  gr_track_rate_TID_2_minus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TID_2_minus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TID_2_minus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_2_minus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TID_2_minus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_2_minus.SetMarkerStyle(20);
  gr_track_rate_TID_2_minus.SetMarkerSize(1.4);
  gr_track_rate_TID_2_minus.SetMarkerColor(kBlue);
  gr_track_rate_TID_2_minus.SetTitle("");
  gr_track_rate_TID_2_minus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TID 2-");
  c.SetGrid();
  c.SaveAs("tid_2_minus_track_rate.png");
  c.SaveAs("tid_2_minus_track_rate.pdf");
  c.SaveAs("tid_2_minus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tid_2_minus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tid_2_minus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tid_2_minus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TID_3_plus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TID_3_plus(runNumber_VecD, track_rate_TID_3_plus_VecD, runNumber_err_VecD, track_rate_TID_3_plus_err_VecD);
  gr_track_rate_TID_3_plus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TID_3_plus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TID_3_plus.GetXaxis()->SetNoExponent();
  gr_track_rate_TID_3_plus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TID_3_plus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TID_3_plus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_3_plus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TID_3_plus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_3_plus.SetMarkerStyle(20);
  gr_track_rate_TID_3_plus.SetMarkerSize(1.4);
  gr_track_rate_TID_3_plus.SetMarkerColor(kBlue);
  gr_track_rate_TID_3_plus.SetTitle("");
  gr_track_rate_TID_3_plus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TID 3+");
  c.SetGrid();
  c.SaveAs("tid_3_plus_track_rate.png");
  c.SaveAs("tid_3_plus_track_rate.pdf");
  c.SaveAs("tid_3_plus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tid_3_plus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tid_3_plus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tid_3_plus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TID_3_minus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TID_3_minus(runNumber_VecD, track_rate_TID_3_minus_VecD, runNumber_err_VecD, track_rate_TID_3_minus_err_VecD);
  gr_track_rate_TID_3_minus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TID_3_minus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TID_3_minus.GetXaxis()->SetNoExponent();
  gr_track_rate_TID_3_minus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TID_3_minus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TID_3_minus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_3_minus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TID_3_minus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TID_3_minus.SetMarkerStyle(20);
  gr_track_rate_TID_3_minus.SetMarkerSize(1.4);
  gr_track_rate_TID_3_minus.SetMarkerColor(kBlue);
  gr_track_rate_TID_3_minus.SetTitle("");
  gr_track_rate_TID_3_minus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TID 3-");
  c.SetGrid();
  c.SaveAs("tid_3_minus_track_rate.png");
  c.SaveAs("tid_3_minus_track_rate.pdf");
  c.SaveAs("tid_3_minus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tid_3_minus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tid_3_minus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tid_3_minus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_1 track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_1(runNumber_VecD, track_rate_TEC_1_VecD, runNumber_err_VecD, track_rate_TEC_1_err_VecD);
  gr_track_rate_TEC_1.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_1.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_1.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_1.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_1.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_1.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_1.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_1.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_1.SetMarkerStyle(20);
  gr_track_rate_TEC_1.SetMarkerSize(1.4);
  gr_track_rate_TEC_1.SetMarkerColor(kBlue);
  gr_track_rate_TEC_1.SetTitle("");
  gr_track_rate_TEC_1.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 1");
  c.SetGrid();
  c.SaveAs("tec_1_track_rate.png");
  c.SaveAs("tec_1_track_rate.pdf");
  c.SaveAs("tec_1_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_1_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_1_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_1_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_2 track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_2(runNumber_VecD, track_rate_TEC_2_VecD, runNumber_err_VecD, track_rate_TEC_2_err_VecD);
  gr_track_rate_TEC_2.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_2.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_2.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_2.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_2.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_2.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_2.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_2.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_2.SetMarkerStyle(20);
  gr_track_rate_TEC_2.SetMarkerSize(1.4);
  gr_track_rate_TEC_2.SetMarkerColor(kBlue);
  gr_track_rate_TEC_2.SetTitle("");
  gr_track_rate_TEC_2.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 2");
  c.SetGrid();
  c.SaveAs("tec_2_track_rate.png");
  c.SaveAs("tec_2_track_rate.pdf");
  c.SaveAs("tec_2_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_2_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_2_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_2_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_3 track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_3(runNumber_VecD, track_rate_TEC_3_VecD, runNumber_err_VecD, track_rate_TEC_3_err_VecD);
  gr_track_rate_TEC_3.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_3.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_3.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_3.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_3.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_3.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_3.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_3.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_3.SetMarkerStyle(20);
  gr_track_rate_TEC_3.SetMarkerSize(1.4);
  gr_track_rate_TEC_3.SetMarkerColor(kBlue);
  gr_track_rate_TEC_3.SetTitle("");
  gr_track_rate_TEC_3.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays ((2021))");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 3");
  c.SetGrid();
  c.SaveAs("tec_3_track_rate.png");
  c.SaveAs("tec_3_track_rate.pdf");
  c.SaveAs("tec_3_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_3_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_3_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_3_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_4 track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_4(runNumber_VecD, track_rate_TEC_4_VecD, runNumber_err_VecD, track_rate_TEC_4_err_VecD);
  gr_track_rate_TEC_4.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_4.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_4.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_4.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_4.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_4.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_4.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_4.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_4.SetMarkerStyle(20);
  gr_track_rate_TEC_4.SetMarkerSize(1.4);
  gr_track_rate_TEC_4.SetMarkerColor(kBlue);
  gr_track_rate_TEC_4.SetTitle("");
  gr_track_rate_TEC_4.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 4");
  c.SetGrid();
  c.SaveAs("tec_4_track_rate.png");
  c.SaveAs("tec_4_track_rate.pdf");
  c.SaveAs("tec_4_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_4_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_4_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_4_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_5 track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_5(runNumber_VecD, track_rate_TEC_5_VecD, runNumber_err_VecD, track_rate_TEC_5_err_VecD);
  gr_track_rate_TEC_5.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_5.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_5.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_5.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_5.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_5.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_5.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_5.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_5.SetMarkerStyle(20);
  gr_track_rate_TEC_5.SetMarkerSize(1.4);
  gr_track_rate_TEC_5.SetMarkerColor(kBlue);
  gr_track_rate_TEC_5.SetTitle("");
  gr_track_rate_TEC_5.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 5");
  c.SetGrid();
  c.SaveAs("tec_5_track_rate.png");
  c.SaveAs("tec_5_track_rate.pdf");
  c.SaveAs("tec_5_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_5_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_5_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_5_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------

  //++++++++++++++++++++++++++++++++  Total TEC_6 track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_6(runNumber_VecD, track_rate_TEC_6_VecD, runNumber_err_VecD, track_rate_TEC_6_err_VecD);
  gr_track_rate_TEC_6.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_6.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_6.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_6.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_6.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_6.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_6.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_6.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_6.SetMarkerStyle(20);
  gr_track_rate_TEC_6.SetMarkerSize(1.4);
  gr_track_rate_TEC_6.SetMarkerColor(kBlue);
  gr_track_rate_TEC_6.SetTitle("");
  gr_track_rate_TEC_6.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 6");
  c.SetGrid();
  c.SaveAs("tec_6_track_rate.png");
  c.SaveAs("tec_6_track_rate.pdf");
  c.SaveAs("tec_6_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_6_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_6_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_6_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_7 track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_7(runNumber_VecD, track_rate_TEC_7_VecD, runNumber_err_VecD, track_rate_TEC_7_err_VecD);
  gr_track_rate_TEC_7.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_7.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_7.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_7.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_7.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_7.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_7.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_7.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_7.SetMarkerStyle(20);
  gr_track_rate_TEC_7.SetMarkerSize(1.4);
  gr_track_rate_TEC_7.SetMarkerColor(kBlue);
  gr_track_rate_TEC_7.SetTitle("");
  gr_track_rate_TEC_7.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 7");
  c.SetGrid();
  c.SaveAs("tec_7_track_rate.png");
  c.SaveAs("tec_7_track_rate.pdf");
  c.SaveAs("tec_7_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_7_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_7_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_7_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_8 track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_8(runNumber_VecD, track_rate_TEC_8_VecD, runNumber_err_VecD, track_rate_TEC_8_err_VecD);
  gr_track_rate_TEC_8.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_8.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_8.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_8.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_8.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_8.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_8.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_8.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_8.SetMarkerStyle(20);
  gr_track_rate_TEC_8.SetMarkerSize(1.4);
  gr_track_rate_TEC_8.SetMarkerColor(kBlue);
  gr_track_rate_TEC_8.SetTitle("");
  gr_track_rate_TEC_8.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 8");
  c.SetGrid();
  c.SaveAs("tec_8_track_rate.png");
  c.SaveAs("tec_8_track_rate.pdf");
  c.SaveAs("tec_8_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_8_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_8_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_8_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_9 track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_9(runNumber_VecD, track_rate_TEC_9_VecD, runNumber_err_VecD, track_rate_TEC_9_err_VecD);
  gr_track_rate_TEC_9.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_9.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_9.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_9.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_9.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_9.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_9.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_9.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_9.SetMarkerStyle(20);
  gr_track_rate_TEC_9.SetMarkerSize(1.4);
  gr_track_rate_TEC_9.SetMarkerColor(kBlue);
  gr_track_rate_TEC_9.SetTitle("");
  gr_track_rate_TEC_9.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 9");
  c.SetGrid();
  c.SaveAs("tec_9_track_rate.png");
  c.SaveAs("tec_9_track_rate.pdf");
  c.SaveAs("tec_9_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_9_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_9_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_9_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_1_plus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_1_plus(runNumber_VecD, track_rate_TEC_1_plus_VecD, runNumber_err_VecD, track_rate_TEC_1_plus_err_VecD);
  gr_track_rate_TEC_1_plus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_1_plus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_1_plus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_1_plus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_1_plus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_1_plus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_1_plus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_1_plus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_1_plus.SetMarkerStyle(20);
  gr_track_rate_TEC_1_plus.SetMarkerSize(1.4);
  gr_track_rate_TEC_1_plus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_1_plus.SetTitle("");
  gr_track_rate_TEC_1_plus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 1+");
  c.SetGrid();
  c.SaveAs("tec_1_plus_track_rate.png");
  c.SaveAs("tec_1_plus_track_rate.pdf");
  c.SaveAs("tec_1_plus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_1_plus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_1_plus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_1_plus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_1_minus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_1_minus(runNumber_VecD, track_rate_TEC_1_minus_VecD, runNumber_err_VecD, track_rate_TEC_1_minus_err_VecD);
  gr_track_rate_TEC_1_minus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_1_minus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_1_minus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_1_minus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_1_minus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_1_minus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_1_minus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_1_minus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_1_minus.SetMarkerStyle(20);
  gr_track_rate_TEC_1_minus.SetMarkerSize(1.4);
  gr_track_rate_TEC_1_minus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_1_minus.SetTitle("");
  gr_track_rate_TEC_1_minus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 1-");
  c.SetGrid();
  c.SaveAs("tec_1_minus_track_rate.png");
  c.SaveAs("tec_1_minus_track_rate.pdf");
  c.SaveAs("tec_1_minus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_1_minus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_1_minus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_1_minus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_2_plus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_2_plus(runNumber_VecD, track_rate_TEC_2_plus_VecD, runNumber_err_VecD, track_rate_TEC_2_plus_err_VecD);
  gr_track_rate_TEC_2_plus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_2_plus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_2_plus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_2_plus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_2_plus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_2_plus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_2_plus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_2_plus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_2_plus.SetMarkerStyle(20);
  gr_track_rate_TEC_2_plus.SetMarkerSize(1.4);
  gr_track_rate_TEC_2_plus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_2_plus.SetTitle("");
  gr_track_rate_TEC_2_plus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 2+");
  c.SetGrid();
  c.SaveAs("tec_2_plus_track_rate.png");
  c.SaveAs("tec_2_plus_track_rate.pdf");
  c.SaveAs("tec_2_plus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_2_plus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_2_plus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_2_plus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_2_minus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_2_minus(runNumber_VecD, track_rate_TEC_2_minus_VecD, runNumber_err_VecD, track_rate_TEC_2_minus_err_VecD);
  gr_track_rate_TEC_2_minus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_2_minus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_2_minus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_2_minus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_2_minus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_2_minus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_2_minus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_2_minus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_2_minus.SetMarkerStyle(20);
  gr_track_rate_TEC_2_minus.SetMarkerSize(1.4);
  gr_track_rate_TEC_2_minus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_2_minus.SetTitle("");
  gr_track_rate_TEC_2_minus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 2-");
  c.SetGrid();
  c.SaveAs("tec_2_minus_track_rate.png");
  c.SaveAs("tec_2_minus_track_rate.pdf");
  c.SaveAs("tec_2_minus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_2_minus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_2_minus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_2_minus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_3_plus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_3_plus(runNumber_VecD, track_rate_TEC_3_plus_VecD, runNumber_err_VecD, track_rate_TEC_3_plus_err_VecD);
  gr_track_rate_TEC_3_plus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_3_plus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_3_plus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_3_plus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_3_plus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_3_plus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_3_plus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_3_plus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_3_plus.SetMarkerStyle(20);
  gr_track_rate_TEC_3_plus.SetMarkerSize(1.4);
  gr_track_rate_TEC_3_plus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_3_plus.SetTitle("");
  gr_track_rate_TEC_3_plus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 3+");
  c.SetGrid();
  c.SaveAs("tec_3_plus_track_rate.png");
  c.SaveAs("tec_3_plus_track_rate.pdf");
  c.SaveAs("tec_3_plus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_3_plus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_3_plus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_3_plus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_3_minus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_3_minus(runNumber_VecD, track_rate_TEC_3_minus_VecD, runNumber_err_VecD, track_rate_TEC_3_minus_err_VecD);
  gr_track_rate_TEC_3_minus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_3_minus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_3_minus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_3_minus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_3_minus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_3_minus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_3_minus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_3_minus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_3_minus.SetMarkerStyle(20);
  gr_track_rate_TEC_3_minus.SetMarkerSize(1.4);
  gr_track_rate_TEC_3_minus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_3_minus.SetTitle("");
  gr_track_rate_TEC_3_minus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 3-");
  c.SetGrid();
  c.SaveAs("tec_3_minus_track_rate.png");
  c.SaveAs("tec_3_minus_track_rate.pdf");
  c.SaveAs("tec_3_minus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_3_minus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_3_minus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_3_minus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_4_plus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_4_plus(runNumber_VecD, track_rate_TEC_4_plus_VecD, runNumber_err_VecD, track_rate_TEC_4_plus_err_VecD);
  gr_track_rate_TEC_4_plus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_4_plus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_4_plus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_4_plus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_4_plus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_4_plus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_4_plus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_4_plus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_4_plus.SetMarkerStyle(20);
  gr_track_rate_TEC_4_plus.SetMarkerSize(1.4);
  gr_track_rate_TEC_4_plus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_4_plus.SetTitle("");
  gr_track_rate_TEC_4_plus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 4+");
  c.SetGrid();
  c.SaveAs("tec_4_plus_track_rate.png");
  c.SaveAs("tec_4_plus_track_rate.pdf");
  c.SaveAs("tec_4_plus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_4_plus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_4_plus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_4_plus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_4_minus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_4_minus(runNumber_VecD, track_rate_TEC_4_minus_VecD, runNumber_err_VecD, track_rate_TEC_4_minus_err_VecD);
  gr_track_rate_TEC_4_minus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_4_minus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_4_minus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_4_minus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_4_minus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_4_minus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_4_minus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_4_minus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_4_minus.SetMarkerStyle(20);
  gr_track_rate_TEC_4_minus.SetMarkerSize(1.4);
  gr_track_rate_TEC_4_minus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_4_minus.SetTitle("");
  gr_track_rate_TEC_4_minus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 4-");
  c.SetGrid();
  c.SaveAs("tec_4_minus_track_rate.png");
  c.SaveAs("tec_4_minus_track_rate.pdf");
  c.SaveAs("tec_4_minus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_4_minus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_4_minus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_4_minus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_5_plus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_5_plus(runNumber_VecD, track_rate_TEC_5_plus_VecD, runNumber_err_VecD, track_rate_TEC_5_plus_err_VecD);
  gr_track_rate_TEC_5_plus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_5_plus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_5_plus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_5_plus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_5_plus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_5_plus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_5_plus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_5_plus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_5_plus.SetMarkerStyle(20);
  gr_track_rate_TEC_5_plus.SetMarkerSize(1.4);
  gr_track_rate_TEC_5_plus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_5_plus.SetTitle("");
  gr_track_rate_TEC_5_plus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 5+");
  c.SetGrid();
  c.SaveAs("tec_5_plus_track_rate.png");
  c.SaveAs("tec_5_plus_track_rate.pdf");
  c.SaveAs("tec_5_plus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_5_plus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_5_plus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_5_plus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_5_minus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_5_minus(runNumber_VecD, track_rate_TEC_5_minus_VecD, runNumber_err_VecD, track_rate_TEC_5_minus_err_VecD);
  gr_track_rate_TEC_5_minus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_5_minus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_5_minus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_5_minus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_5_minus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_5_minus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_5_minus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_5_minus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_5_minus.SetMarkerStyle(20);
  gr_track_rate_TEC_5_minus.SetMarkerSize(1.4);
  gr_track_rate_TEC_5_minus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_5_minus.SetTitle("");
  gr_track_rate_TEC_5_minus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 5-");
  c.SetGrid();
  c.SaveAs("tec_5_minus_track_rate.png");
  c.SaveAs("tec_5_minus_track_rate.pdf");
  c.SaveAs("tec_5_minus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_5_minus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_5_minus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_5_minus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_6_plus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_6_plus(runNumber_VecD, track_rate_TEC_6_plus_VecD, runNumber_err_VecD, track_rate_TEC_6_plus_err_VecD);
  gr_track_rate_TEC_6_plus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_6_plus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_6_plus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_6_plus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_6_plus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_6_plus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_6_plus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_6_plus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_6_plus.SetMarkerStyle(20);
  gr_track_rate_TEC_6_plus.SetMarkerSize(1.4);
  gr_track_rate_TEC_6_plus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_6_plus.SetTitle("");
  gr_track_rate_TEC_6_plus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 6+");
  c.SetGrid();
  c.SaveAs("tec_6_plus_track_rate.png");
  c.SaveAs("tec_6_plus_track_rate.pdf");
  c.SaveAs("tec_6_plus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_6_plus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_6_plus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_6_plus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_6_minus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_6_minus(runNumber_VecD, track_rate_TEC_6_minus_VecD, runNumber_err_VecD, track_rate_TEC_6_minus_err_VecD);
  gr_track_rate_TEC_6_minus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_6_minus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_6_minus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_6_minus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_6_minus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_6_minus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_6_minus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_6_minus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_6_minus.SetMarkerStyle(20);
  gr_track_rate_TEC_6_minus.SetMarkerSize(1.4);
  gr_track_rate_TEC_6_minus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_6_minus.SetTitle("");
  gr_track_rate_TEC_6_minus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 6-");
  c.SetGrid();
  c.SaveAs("tec_6_minus_track_rate.png");
  c.SaveAs("tec_6_minus_track_rate.pdf");
  c.SaveAs("tec_6_minus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_6_minus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_6_minus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_6_minus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_7_plus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_7_plus(runNumber_VecD, track_rate_TEC_7_plus_VecD, runNumber_err_VecD, track_rate_TEC_7_plus_err_VecD);
  gr_track_rate_TEC_7_plus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_7_plus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_7_plus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_7_plus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_7_plus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_7_plus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_7_plus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_7_plus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_7_plus.SetMarkerStyle(20);
  gr_track_rate_TEC_7_plus.SetMarkerSize(1.4);
  gr_track_rate_TEC_7_plus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_7_plus.SetTitle("");
  gr_track_rate_TEC_7_plus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 7+");
  c.SetGrid();
  c.SaveAs("tec_7_plus_track_rate.png");
  c.SaveAs("tec_7_plus_track_rate.pdf");
  c.SaveAs("tec_7_plus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_7_plus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_7_plus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_7_plus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_7_minus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_7_minus(runNumber_VecD, track_rate_TEC_7_minus_VecD, runNumber_err_VecD, track_rate_TEC_7_minus_err_VecD);
  gr_track_rate_TEC_7_minus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_7_minus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_7_minus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_7_minus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_7_minus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_7_minus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_7_minus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_7_minus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_7_minus.SetMarkerStyle(20);
  gr_track_rate_TEC_7_minus.SetMarkerSize(1.4);
  gr_track_rate_TEC_7_minus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_7_minus.SetTitle("");
  gr_track_rate_TEC_7_minus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 7-");
  c.SetGrid();
  c.SaveAs("tec_7_minus_track_rate.png");
  c.SaveAs("tec_7_minus_track_rate.pdf");
  c.SaveAs("tec_7_minus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_7_minus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_7_minus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_7_minus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_8_plus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_8_plus(runNumber_VecD, track_rate_TEC_8_plus_VecD, runNumber_err_VecD, track_rate_TEC_8_plus_err_VecD);
  gr_track_rate_TEC_8_plus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_8_plus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_8_plus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_8_plus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_8_plus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_8_plus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_8_plus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_8_plus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_8_plus.SetMarkerStyle(20);
  gr_track_rate_TEC_8_plus.SetMarkerSize(1.4);
  gr_track_rate_TEC_8_plus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_8_plus.SetTitle("");
  gr_track_rate_TEC_8_plus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 8+");
  c.SetGrid();
  c.SaveAs("tec_8_plus_track_rate.png");
  c.SaveAs("tec_8_plus_track_rate.pdf");
  c.SaveAs("tec_8_plus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_8_plus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_8_plus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_8_plus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_8_minus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_8_minus(runNumber_VecD, track_rate_TEC_8_minus_VecD, runNumber_err_VecD, track_rate_TEC_8_minus_err_VecD);
  gr_track_rate_TEC_8_minus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_8_minus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_8_minus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_8_minus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_8_minus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_8_minus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_8_minus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_8_minus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_8_minus.SetMarkerStyle(20);
  gr_track_rate_TEC_8_minus.SetMarkerSize(1.4);
  gr_track_rate_TEC_8_minus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_8_minus.SetTitle("");
  gr_track_rate_TEC_8_minus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 8-");
  c.SetGrid();
  c.SaveAs("tec_8_minus_track_rate.png");
  c.SaveAs("tec_8_minus_track_rate.pdf");
  c.SaveAs("tec_8_minus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_8_minus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_8_minus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_8_minus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_9_plus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_9_plus(runNumber_VecD, track_rate_TEC_9_plus_VecD, runNumber_err_VecD, track_rate_TEC_9_plus_err_VecD);
  gr_track_rate_TEC_9_plus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_9_plus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_9_plus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_9_plus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_9_plus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_9_plus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_9_plus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_9_plus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_9_plus.SetMarkerStyle(20);
  gr_track_rate_TEC_9_plus.SetMarkerSize(1.4);
  gr_track_rate_TEC_9_plus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_9_plus.SetTitle("");
  gr_track_rate_TEC_9_plus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 9+");
  c.SetGrid();
  c.SaveAs("tec_9_plus_track_rate.png");
  c.SaveAs("tec_9_plus_track_rate.pdf");
  c.SaveAs("tec_9_plus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_9_plus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_9_plus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_9_plus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------
  
  //++++++++++++++++++++++++++++++++  Total TEC_9_minus track rate  ++++++++++++++++++++++++++++++++++++++++++++

  TGraphErrors gr_track_rate_TEC_9_minus(runNumber_VecD, track_rate_TEC_9_minus_VecD, runNumber_err_VecD, track_rate_TEC_9_minus_err_VecD);
  gr_track_rate_TEC_9_minus.GetXaxis()->SetTitle("Run Number");
  gr_track_rate_TEC_9_minus.GetXaxis()->SetLabelSize(0.04);
  gr_track_rate_TEC_9_minus.GetXaxis()->SetNoExponent();
  gr_track_rate_TEC_9_minus.GetXaxis()->SetNdivisions(5);
  gr_track_rate_TEC_9_minus.GetYaxis()->SetTitle("Track Rate (Hz)");
  gr_track_rate_TEC_9_minus.GetXaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_9_minus.GetYaxis()->SetLabelSize(0.05);
  gr_track_rate_TEC_9_minus.GetYaxis()->SetTitleSize(0.05);
  gr_track_rate_TEC_9_minus.SetMarkerStyle(20);
  gr_track_rate_TEC_9_minus.SetMarkerSize(1.4);
  gr_track_rate_TEC_9_minus.SetMarkerColor(kBlue);
  gr_track_rate_TEC_9_minus.SetTitle("");
  gr_track_rate_TEC_9_minus.Draw("AP");
  top_right_Title.DrawLatexNDC(0.64, 0.94, "0T cosmic rays (2021)");
  detector.DrawLatexNDC(0.23, 0.83, "TEC 9-");
  c.SetGrid();
  c.SaveAs("tec_9_minus_track_rate.png");
  c.SaveAs("tec_9_minus_track_rate.pdf");
  c.SaveAs("tec_9_minus_track_rate.C");
  c.Clear();
  gSystem->Exec("mv tec_9_minus_track_rate.png Rate_Plots");
  gSystem->Exec("mv tec_9_minus_track_rate.pdf Rate_Plots");
  gSystem->Exec("mv tec_9_minus_track_rate.C Rate_Plots");

  //-----------------------------------------------------------------------------------------------

  c.Close();

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
    std::cout<<"Tracks at "<<k<<" Run = "<<tracks.at(k)<<" out of total "<<nTotalTracks<<std::endl;
    weight.push_back(tracks.at(k) / float(nTotalTracks));
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
 
  //-----------------------------------------------------------------------------------------------
  //			Summary Plot for track rate in each Subdetector
  //-----------------------------------------------------------------------------------------------

  TCanvas *can = new TCanvas("can", "can", 324, 57, 953, 866);
  can->SetFillColor(0);
  can->SetBorderMode(0);
  can->SetBorderSize(2);
  can->SetGridx();
  can->SetGridy();
  can->SetTickx(1);
  can->SetTicky(1);
  can->SetLeftMargin(0.1608833);
  can->SetRightMargin(0.05152471);
  can->SetFrameLineWidth(3);
  can->SetFrameBorderMode(0);
  can->SetFrameLineWidth(3);
  can->SetFrameBorderMode(0);

  TH1F h1b("h1b", "Track Rate Summary", 8, 0, 8);
  h1b.SetFillColor(kBlue);
  h1b.SetBarWidth(0.6);
  h1b.SetBarOffset(0.25);
  h1b.SetStats(0);
  h1b.GetXaxis()->SetLabelFont(42);
  h1b.GetXaxis()->SetLabelOffset(0.012);
  h1b.GetXaxis()->SetLabelSize(0.06);
  h1b.GetXaxis()->SetTitleSize(0.05);
  h1b.GetXaxis()->SetTitleFont(42);
  h1b.GetYaxis()->SetTitle("Average Track Rate (Hz)");
  h1b.GetYaxis()->SetLabelFont(42);
  h1b.GetYaxis()->SetLabelSize(0.05);
  h1b.GetYaxis()->SetTitleSize(0.05);
  h1b.GetYaxis()->SetTitleOffset(0);

  Bar_Ytitle[0] = weighted_mean_event_rate;
  Bar_Ytitle[1] = weighted_mean_track_rate;
  Bar_Ytitle[2] = weighted_mean_track_rate_FPIX;
  Bar_Ytitle[3] = weighted_mean_track_rate_BPIX;
  Bar_Ytitle[4] = weighted_mean_track_rate_TIB;
  Bar_Ytitle[5] = weighted_mean_track_rate_TID;
  Bar_Ytitle[6] = weighted_mean_track_rate_TOB;
  Bar_Ytitle[7] = weighted_mean_track_rate_TEC;

  for (int i = 1; i <= 8; i++) {
    h1b.SetBinContent(i, Bar_Ytitle[i - 1]);
    h1b.GetXaxis()->SetBinLabel(i, Bar_Xtitle[i - 1].c_str());
  }

  gStyle->SetPaintTextFormat("1.3f");
  h1b.LabelsOption("d");
  h1b.Draw("bTEXT");

  // --------- Saving Summary Chart in pdf,png & C formats ------- //
  TString summary_chart_title = "SummaryChart";
  TString Format[3] = {"png", "pdf", "C"};

  for (int i = 0; i < 3; i++) {
    TString filename = summary_chart_title + "." + Format[i];
    can->SaveAs(filename.Data());
    TString mv_cmd = "mv " + filename + " Rate_Plots";
    gSystem->Exec(mv_cmd.Data());
  }
  can->Clear();
  can->Close();
    
  //-----------------------------------------------------------------------------------------------
  //			Summary Plot for track rate in TEC
  //-----------------------------------------------------------------------------------------------
  TCanvas *canvas = new TCanvas("canvas", "canvas",419,57,986,870);
  gStyle->SetOptStat(0);
  canvas->Range(-2.508655,0.03490556,13.21438,0.3694205);
  canvas->SetFillColor(0);
  canvas->SetBorderMode(0);
  canvas->SetBorderSize(2);
  canvas->SetGridx();
  canvas->SetGridy();
  canvas->SetTickx(1);
  canvas->SetTicky(1);
  canvas->SetLeftMargin(0.1595528);
  canvas->SetRightMargin(0.07723577);
  canvas->SetTopMargin(0.07966706);
  canvas->SetFrameLineWidth(3);
  canvas->SetFrameBorderMode(0);
  canvas->SetFrameLineWidth(3);
  canvas->SetFrameBorderMode(0);
  
  TLatex tex;
  tex.DrawLatexNDC(0.4, 0.8, "Rate Summary");
  tex.SetLineWidth(2);
  tex.SetTextFont(62);
  tex.Draw();

  TH1F hb_TEC("hb_TEC", "Rate Summary TEC", 9, 0, 9);
  hb_TEC.SetFillColor(kBlue);
  hb_TEC.SetBarWidth(0.6);
  hb_TEC.SetBarOffset(0.25);
  hb_TEC.SetStats(0);
  hb_TEC.GetXaxis()->SetLabelFont(42);
  hb_TEC.GetXaxis()->SetLabelOffset(0.012);
  hb_TEC.GetXaxis()->SetLabelSize(0.06);
  hb_TEC.GetXaxis()->SetTitleSize(0.05);
  hb_TEC.GetXaxis()->SetTitleFont(42);
  hb_TEC.GetYaxis()->SetTitle("Average Track Rate (Hz)");
  hb_TEC.GetYaxis()->SetLabelFont(42);
  hb_TEC.GetYaxis()->SetLabelSize(0.05);
  hb_TEC.GetYaxis()->SetTitleSize(0.05);
  hb_TEC.GetYaxis()->SetTitleOffset(0);

  gStyle->SetPaintTextFormat("1.3f");

  tex.DrawLatexNDC(0.4, 0.8, "Rate Summary TEC");
  tex.SetLineWidth(2);
  tex.SetTextFont(62);
  tex.Draw();

  Bar_Ytitle_TEC[0] = weighted_mean_track_rate_TEC_1;
  Bar_Ytitle_TEC[1] = weighted_mean_track_rate_TEC_2;
  Bar_Ytitle_TEC[2] = weighted_mean_track_rate_TEC_3;
  Bar_Ytitle_TEC[3] = weighted_mean_track_rate_TEC_4;
  Bar_Ytitle_TEC[4] = weighted_mean_track_rate_TEC_5;
  Bar_Ytitle_TEC[5] = weighted_mean_track_rate_TEC_6;
  Bar_Ytitle_TEC[6] = weighted_mean_track_rate_TEC_7;
  Bar_Ytitle_TEC[7] = weighted_mean_track_rate_TEC_8;
  Bar_Ytitle_TEC[8] = weighted_mean_track_rate_TEC_9;

  for (int i = 1; i <= 9; i++) {
    hb_TEC.SetBinContent(i, Bar_Ytitle_TEC[i - 1]);
    hb_TEC.GetXaxis()->SetBinLabel(i, Bar_Xtitle_TEC[i - 1].c_str());
  }

  hb_TEC.Draw("bTEXT");
  summary_chart_title = "SummaryChart_TrackRate_TEC";

  for (int i = 0; i < 3; i++) {
    TString filename = summary_chart_title + "." + Format[i];
    canvas->SaveAs(filename.Data());
    TString mv_cmd = "mv " + filename + " Rate_Plots";
    gSystem->Exec(mv_cmd.Data());
  }
  canvas->Clear();
  
  //-----------------------------------------------------------------------------------------------
  //			Summary Plot for track rate in TEC+
  //-----------------------------------------------------------------------------------------------
  tex.DrawLatexNDC(0.4, 0.8, "Rate Summary");
  tex.SetLineWidth(2);
  tex.SetTextFont(62);
  tex.Draw();

  TH1F hb_TECp("hb_TECp", "Rate Summary TEC+", 9, 0, 9);
  hb_TECp.SetFillColor(kBlue);
  hb_TECp.SetBarWidth(0.6);
  hb_TECp.SetBarOffset(0.25);
  hb_TECp.SetStats(0);
  hb_TECp.GetXaxis()->SetLabelFont(42);
  hb_TECp.GetXaxis()->SetLabelOffset(0.012);
  hb_TECp.GetXaxis()->SetLabelSize(0.06);
  hb_TECp.GetXaxis()->SetTitleSize(0.05);
  hb_TECp.GetXaxis()->SetTitleFont(42);
  hb_TECp.GetYaxis()->SetTitle("Average Track Rate (Hz)");
  hb_TECp.GetYaxis()->SetLabelFont(42);
  hb_TECp.GetYaxis()->SetLabelSize(0.05);
  hb_TECp.GetYaxis()->SetTitleSize(0.05);
  hb_TECp.GetYaxis()->SetTitleOffset(0);

  gStyle->SetPaintTextFormat("1.3f");

  tex.DrawLatexNDC(0.4, 0.8, "Rate Summary TEC+");
  tex.SetLineWidth(2);
  tex.SetTextFont(62);
  tex.Draw();

  Bar_Ytitle_TECp[0] = weighted_mean_track_rate_TEC_1_plus;
  Bar_Ytitle_TECp[1] = weighted_mean_track_rate_TEC_2_plus;
  Bar_Ytitle_TECp[2] = weighted_mean_track_rate_TEC_3_plus;
  Bar_Ytitle_TECp[3] = weighted_mean_track_rate_TEC_4_plus;
  Bar_Ytitle_TECp[4] = weighted_mean_track_rate_TEC_5_plus;
  Bar_Ytitle_TECp[5] = weighted_mean_track_rate_TEC_6_plus;
  Bar_Ytitle_TECp[6] = weighted_mean_track_rate_TEC_7_plus;
  Bar_Ytitle_TECp[7] = weighted_mean_track_rate_TEC_8_plus;
  Bar_Ytitle_TECp[8] = weighted_mean_track_rate_TEC_9_plus;

  for (int i = 1; i <= 9; i++) {
    hb_TECp.SetBinContent(i, Bar_Ytitle_TECp[i - 1]);
    hb_TECp.GetXaxis()->SetBinLabel(i, Bar_Xtitle_TECp[i - 1].c_str());
  }

  hb_TECp.Draw("bTEXT");
  summary_chart_title = "SummaryChart_TrackRate_TECplus";

  for (int i = 0; i < 3; i++) {
    TString filename = summary_chart_title + "." + Format[i];
    canvas->SaveAs(filename.Data());
    TString mv_cmd = "mv " + filename + " Rate_Plots";
    gSystem->Exec(mv_cmd.Data());
  }
  canvas->Clear();
  
   //-----------------------------------------------------------------------------------------------
  //			Summary Plot for track rate in TEC-
  //-----------------------------------------------------------------------------------------------
  tex.DrawLatexNDC(0.4, 0.8, "Rate Summary");
  tex.SetLineWidth(2);
  tex.SetTextFont(62);
  tex.Draw();

  TH1F hb_TECm("hb_TECm", "Rate Summary TEC-", 9, 0, 9);
  hb_TECm.SetFillColor(kBlue);
  hb_TECm.SetBarWidth(0.6);
  hb_TECm.SetBarOffset(0.25);
  hb_TECm.SetStats(0);
  hb_TECm.GetXaxis()->SetLabelFont(42);
  hb_TECm.GetXaxis()->SetLabelOffset(0.012);
  hb_TECm.GetXaxis()->SetLabelSize(0.06);
  hb_TECm.GetXaxis()->SetTitleSize(0.05);
  hb_TECm.GetXaxis()->SetTitleFont(42);
  hb_TECm.GetYaxis()->SetTitle("Average Track Rate (Hz)");
  hb_TECm.GetYaxis()->SetLabelFont(42);
  hb_TECm.GetYaxis()->SetLabelSize(0.05);
  hb_TECm.GetYaxis()->SetTitleSize(0.05);
  hb_TECm.GetYaxis()->SetTitleOffset(0);

  gStyle->SetPaintTextFormat("1.3f");

  tex.DrawLatexNDC(0.4, 0.8, "Rate Summary TEC-");
  tex.SetLineWidth(2);
  tex.SetTextFont(62);
  tex.Draw();

  Bar_Ytitle_TECm[0] = weighted_mean_track_rate_TEC_1_minus;
  Bar_Ytitle_TECm[1] = weighted_mean_track_rate_TEC_2_minus;
  Bar_Ytitle_TECm[2] = weighted_mean_track_rate_TEC_3_minus;
  Bar_Ytitle_TECm[3] = weighted_mean_track_rate_TEC_4_minus;
  Bar_Ytitle_TECm[4] = weighted_mean_track_rate_TEC_5_minus;
  Bar_Ytitle_TECm[5] = weighted_mean_track_rate_TEC_6_minus;
  Bar_Ytitle_TECm[6] = weighted_mean_track_rate_TEC_7_minus;
  Bar_Ytitle_TECm[7] = weighted_mean_track_rate_TEC_8_minus;
  Bar_Ytitle_TECm[8] = weighted_mean_track_rate_TEC_9_minus;

  for (int i = 1; i <= 9; i++) {
    hb_TECm.SetBinContent(i, Bar_Ytitle_TECm[i - 1]);
    hb_TECm.GetXaxis()->SetBinLabel(i, Bar_Xtitle_TECm[i - 1].c_str());
  }

  hb_TECm.Draw("bTEXT");
  summary_chart_title = "SummaryChart_TrackRate_TEC_minus";

  for (int i = 0; i < 3; i++) {
    TString filename = summary_chart_title + "." + Format[i];
    canvas->SaveAs(filename.Data());
    TString mv_cmd = "mv " + filename + " Rate_Plots";
    gSystem->Exec(mv_cmd.Data());
  }
  canvas->Clear();

  //-----------------------------------------------------------------------------------------------
  //			Summary Plot for track rate in TID
  //-----------------------------------------------------------------------------------------------
  tex.DrawLatexNDC(0.4, 0.8, "Rate Summary");
  tex.SetLineWidth(2);
  tex.SetTextFont(62);
  tex.Draw();

  TH1F hb_TID("hb_TID", "Rate Summary TID", 9, 0, 9);
  hb_TID.SetFillColor(kBlue);
  hb_TID.SetBarWidth(0.6);
  hb_TID.SetBarOffset(0.25);
  hb_TID.SetStats(0);
  hb_TID.GetXaxis()->SetLabelFont(42);
  hb_TID.GetXaxis()->SetLabelOffset(0.012);
  hb_TID.GetXaxis()->SetLabelSize(0.06);
  hb_TID.GetXaxis()->SetTitleSize(0.05);
  hb_TID.GetXaxis()->SetTitleFont(42);
  hb_TID.GetYaxis()->SetTitle("Average Track Rate (Hz)");
  hb_TID.GetYaxis()->SetLabelFont(42);
  hb_TID.GetYaxis()->SetLabelSize(0.05);
  hb_TID.GetYaxis()->SetTitleSize(0.05);
  hb_TID.GetYaxis()->SetTitleOffset(0);

  gStyle->SetPaintTextFormat("1.3f");

  tex.DrawLatexNDC(0.4, 0.8, "Rate Summary TID");
  tex.SetLineWidth(2);
  tex.SetTextFont(62);
  tex.Draw();

  Bar_Ytitle_TID[0] = weighted_mean_track_rate_TID_1;
  Bar_Ytitle_TID[1] = weighted_mean_track_rate_TID_1_plus;
  Bar_Ytitle_TID[2] = weighted_mean_track_rate_TID_1_minus;
  Bar_Ytitle_TID[3] = weighted_mean_track_rate_TID_2;
  Bar_Ytitle_TID[4] = weighted_mean_track_rate_TID_2_plus;
  Bar_Ytitle_TID[5] = weighted_mean_track_rate_TID_2_minus;
  Bar_Ytitle_TID[6] = weighted_mean_track_rate_TID_3;
  Bar_Ytitle_TID[7] = weighted_mean_track_rate_TID_3_plus;
  Bar_Ytitle_TID[8] = weighted_mean_track_rate_TID_3_minus;

  for (int i = 1; i <= 9; i++) {
    hb_TID.SetBinContent(i, Bar_Ytitle_TID[i - 1]);
    hb_TID.GetXaxis()->SetBinLabel(i, Bar_Xtitle_TID[i - 1].c_str());
  }

  hb_TID.Draw("bTEXT");
  summary_chart_title = "SummaryChart_TrackRate_TID";

  for (int i = 0; i < 3; i++) {
    TString filename = summary_chart_title + "." + Format[i];
    canvas->SaveAs(filename.Data());
    TString mv_cmd = "mv " + filename + " Rate_Plots";
    gSystem->Exec(mv_cmd.Data());
  }
  canvas->Clear();

  //-----------------------------------------------------------------------------------------------
  //			Summary Plot for track rate in ENDCAP
  //-----------------------------------------------------------------------------------------------
  tex.DrawLatexNDC(0.4, 0.8, "Rate Summary");
  tex.SetLineWidth(2);
  tex.SetTextFont(62);
  tex.Draw();

  TH1F hb_ENDCAP("hb_ENDCAP", "Rate Summary ENDCAP", 12, 0, 12);
  hb_ENDCAP.SetFillColor(kBlue);
  hb_ENDCAP.SetBarWidth(0.6);
  hb_ENDCAP.SetBarOffset(0.25);
  hb_ENDCAP.SetStats(0);
  hb_ENDCAP.GetXaxis()->SetLabelFont(62);
  hb_ENDCAP.GetXaxis()->SetLabelOffset(0.012);
  hb_ENDCAP.GetXaxis()->SetLabelSize(0.05);
  hb_ENDCAP.GetXaxis()->SetTitleSize(0.05);
  hb_ENDCAP.GetXaxis()->SetTitleFont(42);
  hb_ENDCAP.GetYaxis()->SetTitle("Average Track Rate (Hz)");
  hb_ENDCAP.GetYaxis()->SetLabelFont(42);
  hb_ENDCAP.GetYaxis()->SetLabelSize(0.05);
  hb_ENDCAP.GetYaxis()->SetTitleSize(0.05);
  hb_ENDCAP.GetYaxis()->SetTitleOffset(0);

  gStyle->SetPaintTextFormat("1.3f");

  tex.DrawLatexNDC(0.4, 0.8, "Rate Summary ENDCAP");
  tex.SetLineWidth(2);
  tex.SetTextFont(62);
  tex.Draw();

  Bar_Ytitle_ENDCAP[0] = weighted_mean_track_rate_TID_1;
  Bar_Ytitle_ENDCAP[1] = weighted_mean_track_rate_TID_2;
  Bar_Ytitle_ENDCAP[2] = weighted_mean_track_rate_TID_3;
  Bar_Ytitle_ENDCAP[3] = weighted_mean_track_rate_TEC_1;
  Bar_Ytitle_ENDCAP[4] = weighted_mean_track_rate_TEC_2;
  Bar_Ytitle_ENDCAP[5] = weighted_mean_track_rate_TEC_3;
  Bar_Ytitle_ENDCAP[6] = weighted_mean_track_rate_TEC_4;
  Bar_Ytitle_ENDCAP[7] = weighted_mean_track_rate_TEC_5;
  Bar_Ytitle_ENDCAP[8] = weighted_mean_track_rate_TEC_6;
  Bar_Ytitle_ENDCAP[9] = weighted_mean_track_rate_TEC_7;
  Bar_Ytitle_ENDCAP[10] = weighted_mean_track_rate_TEC_8;
  Bar_Ytitle_ENDCAP[11] = weighted_mean_track_rate_TEC_9;

  for (int i = 1; i <= 12; i++) {
    hb_ENDCAP.SetBinContent(i, Bar_Ytitle_ENDCAP[i - 1]);
    hb_ENDCAP.GetXaxis()->SetBinLabel(i, Bar_Xtitle_ENDCAP[i - 1].c_str());
  }

  hb_ENDCAP.Draw("bTEXT");
  summary_chart_title = "SummaryChart_TrackRate_ENDCAP";

  for (int i = 0; i < 3; i++) {
    TString filename = summary_chart_title + "." + Format[i];
    canvas->SaveAs(filename.Data());
    TString mv_cmd = "mv " + filename + " Rate_Plots";
    gSystem->Exec(mv_cmd.Data());
  }
  canvas->Clear(); 
  canvas->Close();
}
