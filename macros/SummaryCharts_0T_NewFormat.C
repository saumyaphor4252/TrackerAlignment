TString ToString( int num )
{
  ostringstream start;
  start<<num;
  TString start1=start.str();
  return start1;
}

void SummaryCharts_0T_NewFormat()
{
  /*
     1) Change the root file name (TFile *file)
     2) Change the csv file name to be used - ( MagFields_for_Run )
   */

  TFile *file = new TFile("Commissioning_2018_Prompt.root");
  //TFile *file = new TFile("CRUZET_2021_StreamExpress_17Aug_FULL.root");

  TTree *tree = (TTree*)file->Get("cosmicRateAnalyzer/Run");
  
  gSystem->Exec("mkdir -p Rate_Plots_SummaryCharts");
  Int_t ci;      // for color index setting
       
  double  run_time;
  unsigned int runnum;
  int     number_of_events;
  int     number_of_tracks;
  int     number_of_tracks_PIX;
  int     number_of_tracks_FPIX;
  int     number_of_tracks_BPIX;
  int     number_of_tracks_TID;
  int     number_of_tracks_TID_plus;
  int     number_of_tracks_TID_minus;
  int     number_of_tracks_TIB;
  int     number_of_tracks_TEC;
  int     number_of_tracks_TEC_plus;
  int     number_of_tracks_TEC_minus;
  int     number_of_tracks_TOB;
  
  tree->SetBranchAddress("run_time", &run_time);
  tree->SetBranchAddress("runnum", &runnum);
  tree->SetBranchAddress("number_of_events", &number_of_events);
  tree->SetBranchAddress("number_of_tracks", &number_of_tracks);
  tree->SetBranchAddress("number_of_tracks_PIX", &number_of_tracks_PIX);
  tree->SetBranchAddress("number_of_tracks_FPIX", &number_of_tracks_FPIX);
  tree->SetBranchAddress("number_of_tracks_BPIX", &number_of_tracks_BPIX);
  tree->SetBranchAddress("number_of_tracks_TID", &number_of_tracks_TID);
  tree->SetBranchAddress("number_of_tracks_TIDM", &number_of_tracks_TID_minus);
  tree->SetBranchAddress("number_of_tracks_TIDP", &number_of_tracks_TID_plus);
  tree->SetBranchAddress("number_of_tracks_TIB", &number_of_tracks_TIB);
  tree->SetBranchAddress("number_of_tracks_TEC", &number_of_tracks_TEC);
  tree->SetBranchAddress("number_of_tracks_TECM", &number_of_tracks_TEC_minus);
  tree->SetBranchAddress("number_of_tracks_TECP", &number_of_tracks_TEC_plus);
  tree->SetBranchAddress("number_of_tracks_TOB", &number_of_tracks_TOB);
  
  //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  //		Various Rates Declerations				
  //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  
  vector<double>  events               ;
  vector<double>  event_rate 		;
  vector<double>  event_rate_err	;
  vector<double>  track_rate 		;
  vector<double>  track_rate_err	;
  vector<double>  runNumber  		;
  vector<double>  runNumber_err	;
  vector<double>  track_rate_PIX 	;
  vector<double>  track_rate_PIX_err 	;
  vector<double>  track_rate_FPIX	;
  vector<double>  track_rate_FPIX_err	;
  vector<double>  track_rate_BPIX 	;
  vector<double>  track_rate_BPIX_err	;
  vector<double>  track_rate_TOB 	;
  vector<double>  track_rate_TOB_err 	;
  vector<double>  track_rate_TIB 	;
  vector<double>  track_rate_TIB_err 	;
  vector<double>  track_rate_TID 	;
  vector<double>  track_rate_TID_err 	;
  vector<double>  track_rate_TID_minus 	;
  vector<double>  track_rate_TID_minus_err 	;
  vector<double>  track_rate_TID_plus 	;
  vector<double>  track_rate_TID_plus_err 	;
  vector<double>  track_rate_TEC 	;
  vector<double>  track_rate_TEC_err 	;
  vector<double>  track_rate_TEC_plus 	;
  vector<double>  track_rate_TEC_plus_err 	;
  vector<double>  track_rate_TEC_minus 	;
  vector<double>  track_rate_TEC_minus_err 	;
  vector<double>  tracks		;
  vector<double>  tracks_err		;
  vector<double>  weight		;
  
  string Bar_Xtitle[8] = {"Event","Track","FPIX","BPIX","TIB","TID","TOB","TEC"};
  double Bar_Ytitle[8] = {0};
  
  double total_tracks = 0;
  
  int Run_Number, Events_in_Run; float Mag_Field;
    
  int color_i=0; int nRuns_with_0_MagField=0, nRunsWithNegativeRuntime_inThisField=0, total_tracks_for_MF = 0, total_events_for_MF = 0;
  ci=TColor::GetColor("#de0b1d");
  
  FILE *MagFields_for_Run = fopen("Events_per_Run_Commissioning2018_New.csv","r");
  //FILE *MagFields_for_Run = fopen("Events_per_Run_CRUZET_2021.csv","r");
  
  Long64_t n = tree->GetEntriesFast();
  for (Long64_t jentry=0; jentry<n; jentry++)  // Loop over all Runs
    {
      tree->GetEntry(jentry);
      
      //=================  Get the magnetic field for that Run ==================//
      fscanf(MagFields_for_Run,"%i,%i,%f\n",&Run_Number,&Events_in_Run,&Mag_Field);
      std::cout<<" Run No: "<<Run_Number<<" : "<<"Events: "<<Events_in_Run<<" : "<<"M Field: "<<Mag_Field<<std::endl;
      std::cout<<"Run no from CSV: "<<Run_Number<<" : From loop : "<<runnum<<std::endl;
      
      if(Run_Number!=runnum)
	{
	  std::cout<<"CAUTION: Run numbers don't match !!!"<<std::endl;
	  continue;
	}
           
      if (run_time == 0 || run_time < 0 )
	{
	  std::cout<<"CAUTION: Run with negative runtime !  Run NO: "<<runnum<<std::endl;
	  nRunsWithNegativeRuntime_inThisField++;
	  continue;
	}
      
      // Caluculate rate only for field 0T 
      if( abs((Mag_Field))>1e-1 ) 
	{
	  std::cout<<"Mag Filed is not equal to 0 "<<std::endl;
	  continue;
	}

      nRuns_with_0_MagField++;
     
      runNumber 	                .push_back( runnum );
      runNumber_err                     .push_back(0);
      event_rate	                .push_back( number_of_events/run_time );
      event_rate_err     	 	.push_back( sqrt(float(number_of_events))/run_time );
      tracks	 	                .push_back( number_of_tracks );	  
      track_rate	                .push_back( number_of_tracks/run_time );  	 
      track_rate_err	        	.push_back( sqrt(float(number_of_tracks))/run_time );
      track_rate_PIX                    .push_back( number_of_tracks_PIX/run_time );
      track_rate_PIX_err        	.push_back( sqrt(float(number_of_tracks_PIX))/run_time );
      track_rate_FPIX	                .push_back( number_of_tracks_FPIX/run_time );
      track_rate_FPIX_err        	.push_back( sqrt(float(number_of_tracks_FPIX))/run_time );
      track_rate_BPIX           	.push_back( number_of_tracks_BPIX/run_time );
      track_rate_BPIX_err   	        .push_back( sqrt(float(number_of_tracks_BPIX))/run_time );
      track_rate_TIB	                .push_back( number_of_tracks_TIB/run_time );
      track_rate_TIB_err         	.push_back( sqrt(float(number_of_tracks_TIB))/run_time );
      track_rate_TID	                .push_back( number_of_tracks_TID/run_time );
      track_rate_TID_err         	.push_back( sqrt(float(number_of_tracks_TID))/run_time );
      track_rate_TID_minus	        .push_back( number_of_tracks_TID_minus/run_time );
      track_rate_TID_minus_err     	.push_back( sqrt(float(number_of_tracks_TID_minus))/run_time );
      track_rate_TID_plus	        .push_back( number_of_tracks_TID_plus/run_time );
      track_rate_TID_plus_err     	.push_back( sqrt(float(number_of_tracks_TID_plus))/run_time );
      track_rate_TOB	                .push_back( number_of_tracks_TOB/run_time );  
      track_rate_TOB_err         	.push_back( sqrt(float(number_of_tracks_TOB))/run_time );
      track_rate_TEC	                .push_back( number_of_tracks_TEC/run_time );
      track_rate_TEC_err    	        .push_back( sqrt(float(number_of_tracks_TEC))/run_time );
      track_rate_TEC_plus	        .push_back( number_of_tracks_TEC_plus/run_time );
      track_rate_TEC_plus_err    	.push_back( sqrt(float(number_of_tracks_TEC_plus))/run_time );
      track_rate_TEC_minus	        .push_back( number_of_tracks_TEC_minus/run_time );
      track_rate_TEC_minus_err    	.push_back( sqrt(float(number_of_tracks_TEC_minus))/run_time );
      
      total_tracks_for_MF += number_of_tracks;
      total_events_for_MF += number_of_events;
      
    }// Loop over runs
  
  
  //--------------------------------------------------------------------------------------------------------------------------------------------------
  //				                       	Weighted Mean calculation
  //--------------------------------------------------------------------------------------------------------------------------------------------------
  weight.clear();
  double total_weight		     =0;
  double weighted_mean_track_rate        =0; 
  double weighted_mean_track_rate_TEC    =0;
  double weighted_mean_track_rate_TOB    =0;
  double weighted_mean_track_rate_TIB    =0; 
  double weighted_mean_track_rate_TID    =0; 
  double weighted_mean_track_rate_FPIX   =0;
  double weighted_mean_track_rate_BPIX   =0;
  double weighted_mean_event_rate        =0;
  
  for (int k = 0; k < nRuns_with_0_MagField ; k++)
    {
      weight.push_back( tracks.at(k)/total_tracks_for_MF );  // weight of 'k' th run =  Total tracks at kth Run / Total Tracks in all Run
    }
  
  for (int a = 0; a < nRuns_with_0_MagField ; a++)
    {
      weighted_mean_track_rate 		+= track_rate.at(a)     * weight.at(a) ; // Track Rate of 'a' th Run * weight of that Run 		
      weighted_mean_track_rate_TEC 		+= track_rate_TEC.at(a) * weight.at(a) ; 	
      weighted_mean_track_rate_TOB 		+= track_rate_TOB.at(a) * weight.at(a) ; 	
      weighted_mean_track_rate_TIB 		+= track_rate_TIB.at(a) * weight.at(a) ;	
      weighted_mean_track_rate_TID 		+= track_rate_TID.at(a) * weight.at(a) ;	
      weighted_mean_track_rate_FPIX 	+= track_rate_FPIX.at(a)* weight.at(a) ;	
      weighted_mean_track_rate_BPIX 	+= track_rate_BPIX.at(a)* weight.at(a) ; 	
      weighted_mean_event_rate 		+= event_rate.at(a)     * weight.at(a) ; 		
      total_weight			    	+= weight.at(a) ;
    }
  
  //-----------------------------------------------------------------------------------------------
  //			Summary Plot for track rate in each Subdetector				 
  //-----------------------------------------------------------------------------------------------
  
  TCanvas *c = new TCanvas("c", "c",372,57,856,842);
  c->Range(-1.553285,-0.7217677,8.420438,5.067103);
  c->SetFillColor(0);
  c->SetBorderMode(0);
  c->SetBorderSize(2);
  c->SetGridx();
  c->SetGridy();
  c->SetTickx(1);
  c->SetTicky(1);
  c->SetLeftMargin(0.1557377);
  c->SetRightMargin(0.04215457);
  c->SetBottomMargin(0.1246819);
  c->SetFrameLineWidth(3);
  c->SetFrameBorderMode(0);
  c->SetFrameLineWidth(3);
  c->SetFrameBorderMode(0);
  
  TH1F h1b("h1b","Rate Summary",8,0,8);
  h1b.SetFillColor(ci);
  h1b.SetBarWidth(0.6);
  h1b.SetBarOffset(0.25);
  // h1b.SetMaximum(5);
  h1b.SetStats(0);
  h1b.GetXaxis()->SetLabelFont(42);
  h1b.GetXaxis()->SetLabelOffset(0.012);
  h1b.GetXaxis()->SetLabelSize(0.07);
  h1b.GetXaxis()->SetTitleSize(0.05);
  h1b.GetXaxis()->SetTitleFont(42);
  h1b.GetYaxis()->SetTitle("Average Rate (Hz)");
  h1b.GetYaxis()->SetLabelFont(42);
  h1b.GetYaxis()->SetLabelSize(0.05);
  h1b.GetYaxis()->SetTitleSize(0.05);
  h1b.GetYaxis()->SetTitleOffset(0);
  
  gStyle->SetPaintTextFormat("1.2f");
  h1b.LabelsOption("d");
  //h1b.SetLabelSize(0.05);
  
  TLatex tex;
  tex.DrawLatexNDC(0.4,0.8,"Rate Summary");
  tex.SetLineWidth(2);
  tex.SetTextFont(62);
  tex.Draw();
  
  Bar_Ytitle[0] = weighted_mean_event_rate;     
  Bar_Ytitle[1] = weighted_mean_track_rate;     
  Bar_Ytitle[2] = weighted_mean_track_rate_FPIX;     
  Bar_Ytitle[3] = weighted_mean_track_rate_BPIX; 
  Bar_Ytitle[4] = weighted_mean_track_rate_TIB; 
  Bar_Ytitle[5] = weighted_mean_track_rate_TID;
  Bar_Ytitle[6] = weighted_mean_track_rate_TOB; 
  Bar_Ytitle[7] = weighted_mean_track_rate_TEC;
  
  for (int i=1; i<=8; i++)
    {
      h1b.SetBinContent(i, Bar_Ytitle[i-1]);
      h1b.GetXaxis()->SetBinLabel(i,Bar_Xtitle[i-1].c_str());
      // h1b.GetXaxis()->SetBinLabel();
    }
  
  
  h1b.Draw("bTEXT");
  TString summary_chart_title = "SummaryChart_0T";
  TString Format[3] = {"png","pdf","C"};
  
  for(int i =0; i<3 ; i++)
    {
      TString filename= summary_chart_title + "." + Format[i]; 
      c->SaveAs(filename.Data());
      TString mv_cmd = "mv " + filename + " Rate_Plots_SummaryCharts";
      gSystem->Exec(mv_cmd.Data());
    }
  c->Close();

  std::cout<<"Total Runs in this files: "<<n<<endl;
  std::cout<<"xxxxxxxxxxxxxxxxxxxxx  Runs with magnetic field 0T are "<<nRuns_with_0_MagField<<" xxxxxxxxxxxxxxxxxxxxxx "<<std::endl;
  std::cout<<"xxxxxxx  Runs with negative runtime in this magnetic field : "<<nRunsWithNegativeRuntime_inThisField<<std::endl;
  std::cout<<"Weighted Event Rate for 0T Runs :"<<weighted_mean_event_rate<<std::endl;
  std::cout<<"Weighted Total Track Rate for 0T Runs :"<<weighted_mean_track_rate<<std::endl;
  std::cout<<"Weighted BPIX Track Rate for 0T Runs :"<<weighted_mean_track_rate_BPIX<<std::endl;
  std::cout<<"Weighted FPIX Track Rate for 0T Runs :"<<weighted_mean_track_rate_FPIX<<std::endl;
  std::cout<<"Weighted TIB Track Rate for 0T Runs :"<<weighted_mean_track_rate_TIB<<std::endl;
  std::cout<<"Weighted TOB Track Rate for 0T Runs :"<<weighted_mean_track_rate_TOB<<std::endl;
  std::cout<<"Weighted TID Track Rate for 0T Runs :"<<weighted_mean_track_rate_TID<<std::endl;
  std::cout<<"Weighted TEC Track Rate for 0T Runs :"<<weighted_mean_track_rate_TEC<<std::endl;
  std::cout<<"Events with 0T fiels :"<<total_events_for_MF<<std::endl;
  std::cout<<"Total tracks with 0T field :"<<total_tracks_for_MF<<std::endl;
  fclose(MagFields_for_Run);
 
}
