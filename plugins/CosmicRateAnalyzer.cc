// -*- C++ -*-
//
// Package:    CosmicTrackTool/CosmicRateAnalyzer
// Class:      CosmicRateAnalyzer
//
/**\class CosmicRateAnalyzer CosmicRateAnalyzer.cc CosmicTrackTool/CosmicRateAnalyzer/plugins/CosmicRateAnalyzer.cc

 Description :
  This Analyzer creates tuple, having necessary infromation for Cosmic Track Rate and Event Rate calculations.
  Tuples created by this analyzer also have some kinematic information. This tuple is input to some offline
  macros that make Rate plots and Kinematical plots.

Implementation : Documentation for running this tool is described in twiki :
https://twiki.cern.ch/twiki/bin/view/CMS/TkAlCosmicsRateMonitoring

*/
// Originally created:  Justyna Magdalena Tomaszewska,,,
// Revisited by: Ashutosh Bhardwaj and Kirti Ranjan
// Further Developed by: Sumit Keshri (sumit.keshri@cern.ch) & Saumya (saumya.saumya@cern.ch)
//
//         Created:  Sat, 30 May 2015 20:14:35 GMT
//

// system include files
#include <memory>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/one/EDAnalyzer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/Run.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "DataFormats/Common/interface/Handle.h"
#include "FWCore/Framework/interface/ESHandle.h"
#include "FWCore/ServiceRegistry/interface/Service.h"
#include "CommonTools/UtilAlgos/interface/TFileService.h"

#include "DataFormats/TrackReco/interface/Track.h"
#include "DataFormats/TrackReco/interface/TrackFwd.h"
#include "DataFormats/TrackingRecHit/interface/TrackingRecHit.h"

#include "DataFormats/MuonReco/interface/Muon.h"
#include "DataFormats/MuonReco/interface/MuonFwd.h"
#include "DataFormats/PatCandidates/interface/Muon.h"

#include "FWCore/MessageLogger/interface/MessageLogger.h"
#include "CondFormats/SiStripObjects/interface/SiStripLatency.h"
#include "CondFormats/DataRecord/interface/SiStripCondDataRecords.h"
#include "DataFormats/TrackerCommon/interface/TrackerTopology.h"

#include "DataFormats/Provenance/interface/Timestamp.h"

#include "DataFormats/DetId/interface/DetId.h"
#include "DataFormats/SiStripDetId/interface/SiStripDetId.h"
#include "DataFormats/SiPixelDetId/interface/PixelSubdetector.h"

#include "MagneticField/Engine/interface/MagneticField.h"
#include "MagneticField/Records/interface/IdealMagneticFieldRecord.h"
#include "DataFormats/GeometryVector/interface/GlobalPoint.h"
#include "DataFormats/SiStripCluster/interface/SiStripCluster.h"
#include "DataFormats/Common/interface/DetSetVectorNew.h"
#include "DataFormats/Common/interface/DetSetVector.h"

#include "Geometry/CommonTopologies/interface/GeomDet.h"
#include "Geometry/CommonTopologies/interface/TrackerGeomDet.h"
#include "Geometry/Records/interface/TrackerDigiGeometryRecord.h"
#include "Geometry/Records/interface/TrackerTopologyRcd.h"
#include "Geometry/TrackerGeometryBuilder/interface/TrackerGeometry.h"

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <TTree.h>
#include <TFile.h>

//
// class declaration
//
class CosmicRateAnalyzer : public edm::one::EDAnalyzer<edm::one::WatchRuns, edm::one::SharedResources> {
public:
  explicit CosmicRateAnalyzer(const edm::ParameterSet&);
  ~CosmicRateAnalyzer() override;

  static void fillDescriptions(edm::ConfigurationDescriptions& descriptions);

private:
  void beginJob() override;
  void analyze(const edm::Event&, const edm::EventSetup&) override;
  void endJob() override;

  void beginRun(edm::Run const&, edm::EventSetup const&) override;
  void endRun(edm::Run const&, edm::EventSetup const&) override;

  static double stampToReal(edm::Timestamp time) { return time.unixTime() + time.microsecondOffset() * 1e-6; }
  void ClearInEventLoop();
  void ClearInEndRun();
  // ----------member data ---------------------------
  const edm::ESGetToken<MagneticField, IdealMagneticFieldRecord> magFieldToken_;
  const edm::ESGetToken<TrackerTopology, TrackerTopologyRcd> topoToken_;
//  const edm::ESGetToken<SiStripLatency, SiStripLatencyRcd> latencyToken_;
  //const edm::ESGetToken<TrackerGeometry, TrackerDigiGeometryRecord> geometryToken_;
  edm::EDGetTokenT<reco::TrackCollection> trackTags_;
//  edm::EDGetTokenT<edmNew::DetSetVector<SiStripCluster> > clustercollectionToken_;
  edm::EDGetTokenT<reco::MuonCollection> muonTags_;
  edm::RunNumber_t lastrunnum;
  double lastruntime, magField;
  edm::Service<TFileService> fs;

  FILE *outfile = fopen("RunInfo.txt", "w");

  unsigned int DetectorID;
  TTree* treeEvent;
  TTree* treeRun;
//  TTree* treeCluster;

  //---------  Temporary varibles to store the values till the Run tree is filled  ------//
  // a) For track rates
  int events;
  int track_BPIX;
  int track_FPIX;
  int track_PIXEL;
  int track_TEC;
  int track_TECM;
  int track_TECP;
  int track_TEC_1;
  int track_TEC_2;
  int track_TEC_3;
  int track_TEC_4;
  int track_TEC_5;
  int track_TEC_6;
  int track_TEC_7;
  int track_TEC_8;
  int track_TEC_9;
  int track_TEC_1_minus;
  int track_TEC_2_minus;
  int track_TEC_3_minus;
  int track_TEC_4_minus;
  int track_TEC_5_minus;
  int track_TEC_6_minus;
  int track_TEC_7_minus;
  int track_TEC_8_minus;
  int track_TEC_9_minus;
  int track_TEC_1_plus;
  int track_TEC_2_plus;
  int track_TEC_3_plus;
  int track_TEC_4_plus;
  int track_TEC_5_plus;
  int track_TEC_6_plus;
  int track_TEC_7_plus;
  int track_TEC_8_plus;
  int track_TEC_9_plus;
  int track_TOB;
  int track_TIB;
  int track_TID;
  int track_TIDM;
  int track_TIDP;
  int track_TID_1;
  int track_TID_2;
  int track_TID_3;
  int track_TID_1_minus;
  int track_TID_2_minus;
  int track_TID_3_minus;
  int track_TID_1_plus;
  int track_TID_2_plus;
  int track_TID_3_plus;

  // b) For PIXEL Hit Rates by layers
  int hit_Total;
  int hit_PIX;
  int hit_BPIX;
  int hit_BPIX_layer1;
  int hit_BPIX_layer2;
  int hit_BPIX_layer3;
  int hit_BPIX_layer4;
  int hit_FPIX;
  int hit_FPIX_disk1;
  int hit_FPIX_disk2;
  int hit_FPIX_disk3;
  int hit_FPIX_disk1_plus;
  int hit_FPIX_disk2_plus;
  int hit_FPIX_disk3_plus;
  int hit_FPIX_disk1_minus;
  int hit_FPIX_disk2_minus;
  int hit_FPIX_disk3_minus;

  std::vector<int> v_ntrk;
  int ntrk;
  int ntrk_runnum;

  //---------- Branch Variables in tree Run ----------//
  // a) Track Rate
  int number_of_tracks;
  int number_of_tracks_PIX;
  int number_of_tracks_FPIX;
  int number_of_tracks_BPIX;
  int number_of_tracks_TEC;
  int number_of_tracks_TECP;
  int number_of_tracks_TECM;
  int number_of_tracks_TOB;
  int number_of_tracks_TIB;
  int number_of_tracks_TID;
  int number_of_tracks_TIDP;
  int number_of_tracks_TIDM;
  int number_of_events;
  edm::RunNumber_t runnum;
  double run_time;
  int number_of_tracks_TEC_1;
  int number_of_tracks_TEC_2;
  int number_of_tracks_TEC_3;
  int number_of_tracks_TEC_4;
  int number_of_tracks_TEC_5;
  int number_of_tracks_TEC_6;
  int number_of_tracks_TEC_7;
  int number_of_tracks_TEC_8; 
  int number_of_tracks_TEC_9; 
  int number_of_tracks_TEC_1_minus;
  int number_of_tracks_TEC_2_minus;
  int number_of_tracks_TEC_3_minus;
  int number_of_tracks_TEC_4_minus;
  int number_of_tracks_TEC_5_minus;
  int number_of_tracks_TEC_6_minus;
  int number_of_tracks_TEC_7_minus;
  int number_of_tracks_TEC_8_minus; 
  int number_of_tracks_TEC_9_minus; 
  int number_of_tracks_TEC_1_plus;
  int number_of_tracks_TEC_2_plus;
  int number_of_tracks_TEC_3_plus;
  int number_of_tracks_TEC_4_plus;
  int number_of_tracks_TEC_5_plus;
  int number_of_tracks_TEC_6_plus;
  int number_of_tracks_TEC_7_plus;
  int number_of_tracks_TEC_8_plus; 
  int number_of_tracks_TEC_9_plus;
  int number_of_tracks_TID_1;
  int number_of_tracks_TID_2;
  int number_of_tracks_TID_3;
  int number_of_tracks_TID_1_plus;
  int number_of_tracks_TID_2_plus;
  int number_of_tracks_TID_3_plus;
  int number_of_tracks_TID_1_minus;
  int number_of_tracks_TID_2_minus;
  int number_of_tracks_TID_3_minus;

  // b) For Hit Rate per PIXEL layer
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
  int number_of_hits_FPIX_disk2_plus;
  int number_of_hits_FPIX_disk3_plus;
  int number_of_hits_FPIX_disk1_minus;
  int number_of_hits_FPIX_disk2_minus;
  int number_of_hits_FPIX_disk3_minus;

  //---------- Branch Variables in tree Event: Track parameters ----------//
  std::vector<double> pt;
  std::vector<double> charge;
  std::vector<double> chi2;
  std::vector<double> chi2_ndof;
  std::vector<double> eta;
  std::vector<double> theta;
  std::vector<double> phi;
  std::vector<double> p;
  std::vector<double> d0;
  std::vector<double> dz;
  std::vector<double> nvh;
  std::vector<double> DTtime;
  std::vector<int> nh_PIXEL;
  std::vector<int> nh_BPIX;
  std::vector<int> nh_FPIX;
  std::vector<int> nh_TIB;
  std::vector<int> nh_TOB;
  std::vector<int> nh_TID;
  std::vector<int> nh_TEC;

  std::vector<int> TID_SIDE;
  std::vector<int> TID_RING;
  std::vector<int> TID_WHEEL;
  std::vector<int> TEC_SIDE;
  std::vector<int> TEC_RING;
  std::vector<int> TEC_WHEEL;

  //---------- HitCount Vs x,y,z,theta,phi Histograms ----------//
  TH1D *hHitCountVsXBPix;
  TH1D *hHitCountVsXFPix;
  TH1D *hHitCountVsYBPix;
  TH1D *hHitCountVsYFPix;
  TH1D *hHitCountVsZBPix;
  TH1D *hHitCountVsZFPix;
  TH1D *hHitCountVsThetaBPix;
  TH1D *hHitCountVsPhiBPix;
  TH1D *hHitCountVsThetaFPix;
  TH1D *hHitCountVsPhiFPix; 
  TH1D *hHitCountVsXFPixPlus;
  TH1D *hHitCountVsXFPixMinus;
  TH1D *hHitCountVsYFPixPlus;
  TH1D *hHitCountVsYFPixMinus;
  TH1D *hHitCountVsZFPixPlus;
  TH1D *hHitCountVsZFPixMinus;
  TH1D *hHitCountVsThetaFPixPlus;
  TH1D *hHitCountVsPhiFPixPlus;
  TH1D *hHitCountVsThetaFPixMinus;
  TH1D *hHitCountVsPhiFPixMinus;

  //------ Temporary variables to store Hits per track till the Event tree is filled -------//
  //FPIX+/-, BPIX+/-,TEC+/-, TID+/- can also be added similar way in case required
  int nHits_PIXEL;

  //------ Variables to keep track of total events and tracks ------//
  int nTotalTracks, nTotalEvents;
};

//
// constants, enums and typedefs
//

//
// static data member definitions
//

//
// constructors and destructor
//
CosmicRateAnalyzer::CosmicRateAnalyzer(const edm::ParameterSet& iConfig)
    : magFieldToken_(esConsumes()),
      topoToken_(esConsumes()),
//      latencyToken_(esConsumes()),
    //  geometryToken_(esConsumes()),
      trackTags_(consumes<reco::TrackCollection>(iConfig.getParameter<edm::InputTag>("tracksInputTag"))),
//      clustercollectionToken_(
//          consumes<edmNew::DetSetVector<SiStripCluster> >(iConfig.getParameter<edm::InputTag>("tracksInputTag"))),
      muonTags_(consumes<reco::MuonCollection>(iConfig.getParameter<edm::InputTag>("muonsInputTag"))) {
  //now do what ever initialization is needed
  //
  usesResource(TFileService::kSharedResource);
  treeEvent = fs->make<TTree>("Event", "");
  treeRun = fs->make<TTree>("Run", "");
//  treeCluster = fs->make<TTree>("Cluster", "");
 // TFileDirectory HitCountDir = fs->mkdir("HitCountPlots");

  nTotalTracks = 0;
  nTotalEvents = 0;
}

CosmicRateAnalyzer::~CosmicRateAnalyzer() {
  // do anything here that needs to be done at desctruction time
  // (e.g. close files, deallocate resources etc.)
}

//
// member functions
//
void CosmicRateAnalyzer::ClearInEventLoop() {
  pt.clear();
  charge.clear();
  chi2.clear();
  chi2_ndof.clear();
  eta.clear();
  theta.clear();
  phi.clear();
  p.clear();
  d0.clear();
  dz.clear();
  nvh.clear();
  DTtime.clear();
  nh_PIXEL.clear();
  nh_BPIX.clear();
  nh_FPIX.clear();
  nh_TIB.clear();
  nh_TOB.clear();
  nh_TID.clear();
  nh_TEC.clear();
  TID_SIDE.clear();
  TID_RING.clear();
  TID_WHEEL.clear();
  TEC_SIDE.clear();
  TEC_RING.clear();
  TEC_WHEEL.clear();
}

// ------------ method called for each event  ------------
void CosmicRateAnalyzer::analyze(const edm::Event& iEvent, const edm::EventSetup& iSetup) {
  using namespace edm;

  using reco::TrackCollection;
  edm::Handle<reco::TrackCollection> tracks;
  iEvent.getByToken(trackTags_, tracks);

  const TrackerTopology* const tTopo = &iSetup.getData(topoToken_);
  const MagneticField* magneticField = &iSetup.getData(magFieldToken_);
  magField = magneticField->inTesla(GlobalPoint(0, 0, 0)).mag();
  //const SiStripLatency* apvlat = &iSetup.getData(latencyToken_); // unused (for the moment)
  //const TrackerGeometry* theGeometry = &iSetup.getData(geometryToken_);
  edm::ESHandle<TrackerGeometry> geometry;
  iSetup.get<TrackerDigiGeometryRecord>().get(geometry);
  const TrackerGeometry *theGeometry = &(*geometry);


  edm::Timestamp ts_begin = iEvent.getRun().beginTime();
  double t_begin = stampToReal(ts_begin);
  edm::Timestamp ts_end = iEvent.getRun().endTime();
  double t_end = stampToReal(ts_end);

  lastruntime = t_end - t_begin;
  lastrunnum = iEvent.getRun().run();

  if (!tracks->empty())
    v_ntrk.push_back(tracks->size());

  ntrk = 0;
  for (TrackCollection::const_iterator itTrack1 = tracks->begin(); itTrack1 != tracks->end(); ++itTrack1) {
    pt.push_back(itTrack1->pt());
    charge.push_back(itTrack1->charge());
    chi2.push_back(itTrack1->chi2());
    chi2_ndof.push_back(itTrack1->normalizedChi2());
    eta.push_back(itTrack1->eta());
    theta.push_back(itTrack1->theta());
    phi.push_back(itTrack1->phi());
    p.push_back(itTrack1->p());
    d0.push_back(itTrack1->d0());
    dz.push_back(itTrack1->dz());
    nvh.push_back(itTrack1->numberOfValidHits());
    nh_BPIX.push_back(itTrack1->hitPattern().numberOfValidPixelBarrelHits());
    nh_FPIX.push_back(itTrack1->hitPattern().numberOfValidPixelEndcapHits());
    nh_TIB.push_back(itTrack1->hitPattern().numberOfValidStripTIBHits());
    nh_TOB.push_back(itTrack1->hitPattern().numberOfValidStripTOBHits());
    nh_TID.push_back(itTrack1->hitPattern().numberOfValidStripTIDHits());
    nh_TEC.push_back(itTrack1->hitPattern().numberOfValidStripTECHits());

    nHits_PIXEL = 0;

    int nhitinBPIX = 0;
    int nhitinFPIX = 0;
    int nhitinPIXEL = 0;
    int nhitinTEC = 0;
    int nhitinTOB = 0;
    int nhitinTIB = 0;
    int nhitinTID = 0;
    int nhitinTECminus = 0;
    int nhitinTECplus = 0;
    int nhitinTIDminus = 0;
    int nhitinTIDplus = 0;
    int countHit = 0;
    int nhitinTID_1 = 0;
    int nhitinTID_2 = 0;
    int nhitinTID_3 = 0;
    int nhitinTID_1_minus = 0;
    int nhitinTID_2_minus = 0;
    int nhitinTID_3_minus = 0;
    int nhitinTID_1_plus = 0;
    int nhitinTID_2_plus = 0;
    int nhitinTID_3_plus = 0;
    int nhitinTEC_1 = 0;
    int nhitinTEC_2 = 0;
    int nhitinTEC_3 = 0;
    int nhitinTEC_4 = 0;
    int nhitinTEC_5 = 0;
    int nhitinTEC_6 = 0; 
    int nhitinTEC_7 = 0;
    int nhitinTEC_8 = 0;
    int nhitinTEC_9 = 0;
    int nhitinTEC_1_plus = 0;
    int nhitinTEC_2_plus = 0;
    int nhitinTEC_3_plus = 0;
    int nhitinTEC_4_plus = 0;
    int nhitinTEC_5_plus = 0;
    int nhitinTEC_6_plus = 0; 
    int nhitinTEC_7_plus = 0;
    int nhitinTEC_8_plus = 0;
    int nhitinTEC_9_plus = 0; 
    int nhitinTEC_1_minus = 0;
    int nhitinTEC_2_minus = 0;
    int nhitinTEC_3_minus = 0;
    int nhitinTEC_4_minus = 0;
    int nhitinTEC_5_minus = 0;
    int nhitinTEC_6_minus = 0; 
    int nhitinTEC_7_minus = 0;
    int nhitinTEC_8_minus = 0;
    int nhitinTEC_9_minus = 0; 

    for (auto const& hit1 : itTrack1->recHits()) {
      const DetId detId1(hit1->geographicalId());
      const int subdetId1 = detId1.subdetId();
      uint32_t detid_db = detId1.rawId();
      const GeomDet *geomDet(theGeometry->idToDet(detId1));
      

      if (!hit1->isValid())
        continue;  // only real hits count as in itTrack1->numberOfValidHits()
      hit_Total++;

      LocalPoint lp = hit1->localPosition();
      GlobalPoint GP = geomDet->surface().toGlobal(lp);

      ///////////////////////////////////////////////////////////////////////////////////////////////////
      // 			 Hit information in PixelBarrel                          		 //
      ///////////////////////////////////////////////////////////////////////////////////////////////////
      if (PixelSubdetector::PixelBarrel == subdetId1) {
        ++nhitinBPIX;   //for cosmic track rate evaluation
        ++nhitinPIXEL;  //for cosmic track rate evaluation
        ++nHits_PIXEL;  // for PIXEL hits per track in Event Tree
        ++hit_PIX;      // for cosmic PIXEL hit rates per layer
        ++hit_BPIX;     // for cosmic PIXEL hit rates per layer

        hHitCountVsPhiBPix->Fill(GP.phi());
        hHitCountVsThetaBPix->Fill(GP.theta());
        hHitCountVsZBPix->Fill(GP.z());
        hHitCountVsXBPix->Fill(GP.x());
        hHitCountVsYBPix->Fill(GP.y());

        int BPIX_layer = (tTopo->pxbLayer(detid_db));
        if (BPIX_layer == 1) {
          ++hit_BPIX_layer1;  // for cosmic PIXEL hit rates per layer
        } else if (BPIX_layer == 2) {
          ++hit_BPIX_layer2;  // for cosmic PIXEL hit rates per layer
        } else if (BPIX_layer == 3) {
          ++hit_BPIX_layer3;  // for cosmic PIXEL hit rates per layer
        } else if (BPIX_layer == 4) {
          ++hit_BPIX_layer4;  // for cosmic PIXEL hit rates per layer
        } else {
          std::cout << "CAUTION : Check Phase! BPIX layer not in {1,2,3}!" << std::endl;
          std::cout << "Layer is : " << BPIX_layer << std::endl;
        }

      }
      ///////////////////////////////////////////////////////////////////////////////////////////////////
      //			Hit information in PixelEndcap                                  	//
      //////////////////////////////////////////////////////////////////////////////////////////////////
      else if (PixelSubdetector::PixelEndcap == subdetId1) {
        ++nhitinFPIX;
        ++nhitinPIXEL;

        ++nHits_PIXEL;
        ++hit_PIX;   // for cosmic PIXEL hit rates per layer
        ++hit_FPIX;  // for cosmic PIXEL hit rates per layer

        hHitCountVsPhiFPix->Fill(GP.phi());
        hHitCountVsThetaFPix->Fill(GP.theta());
        hHitCountVsZFPix->Fill(GP.z());
        hHitCountVsXFPix->Fill(GP.x());
        hHitCountVsYFPix->Fill(GP.y());

        int FPIX_side = (tTopo->pxfSide(detid_db));
        int FPIX_disk = (tTopo->pxfDisk(detid_db));

        if (FPIX_disk == 1) {
          ++hit_FPIX_disk1;  // for cosmic PIXEL hit rates per layer
        } else if (FPIX_disk == 2) {
          ++hit_FPIX_disk2;  // for cosmic PIXEL hit rates per layer
        } else if (FPIX_disk == 3) {
          ++hit_FPIX_disk3;  // for cosmic PIXEL hit rates per layer
        } else {
          std::cout << "CAUTION : Check Phase! FPIX disk not in {1,2}!" << std::endl;
          std::cout << "Disk is : " << FPIX_disk << std::endl;
        }

        if (FPIX_disk == 1 && FPIX_side == 1) {
          ++hit_FPIX_disk1_minus;  // for cosmic PIXEL hit rates per layer
        } else if (FPIX_disk == 1 && FPIX_side == 2) {
          ++hit_FPIX_disk1_plus;  // for cosmic PIXEL hit rates per layer
        } else if (FPIX_disk == 2 && FPIX_side == 1) {
          ++hit_FPIX_disk2_minus;  // for cosmic PIXEL hit rates per layer
        } else if (FPIX_disk == 2 && FPIX_side == 2) {
          ++hit_FPIX_disk2_plus;  // for cosmic PIXEL hit rates per layer
        } else if (FPIX_disk == 3 && FPIX_side == 1) {
          ++hit_FPIX_disk3_minus;  // for cosmic PIXEL hit rates per layer
        } else if (FPIX_disk == 3 && FPIX_side == 2) {
          ++hit_FPIX_disk3_plus;  // for cosmic PIXEL hit rates per layer
        } else {
          std::cout << "CAUTION : FPIX side not in {1,2}!" << std::endl;
        }

        if (FPIX_side == 1) {
          hHitCountVsXFPixMinus->Fill(GP.x());
          hHitCountVsYFPixMinus->Fill(GP.y());
          hHitCountVsZFPixMinus->Fill(GP.z());
          hHitCountVsThetaFPixMinus->Fill(GP.theta());
          hHitCountVsPhiFPixMinus->Fill(GP.phi());
        } else if (FPIX_side == 2) {
          hHitCountVsXFPixPlus->Fill(GP.x());
          hHitCountVsYFPixPlus->Fill(GP.y());
          hHitCountVsZFPixPlus->Fill(GP.z());
          hHitCountVsThetaFPixPlus->Fill(GP.theta());
          hHitCountVsPhiFPixPlus->Fill(GP.phi());
        } else {
          std::cout << "CAUTION : FPIX side not in {1,2}!" << std::endl;
        }
           
      }


      //////////////////////////////////////////////////////////////////////////////////////////////////
      //			Hit information in TEC							//
      //////////////////////////////////////////////////////////////////////////////////////////////////
      else if (SiStripDetId::TEC == subdetId1) {
        ++nhitinTEC;

        if (tTopo->tecIsZMinusSide(detId1)) {
          ++nhitinTECminus;
        } else {
          ++nhitinTECplus;
        }

        int TEC_side = tTopo->tecSide(detid_db);
        int TEC_wheel = tTopo->tecWheel(detid_db);
        int TEC_ring = tTopo->tecRing(detid_db);

        TEC_SIDE.push_back(TEC_side);
        TEC_WHEEL.push_back(TEC_wheel);
        TEC_RING.push_back(TEC_ring);

	if (TEC_wheel == 1) {
          ++nhitinTEC_1; 
        } else if (TEC_wheel == 2) {
          ++nhitinTEC_2;  
        } else if (TEC_wheel == 3) {
          ++nhitinTEC_3;  
        } else if (TEC_wheel == 4) {
          ++nhitinTEC_4;  
        } else if (TEC_wheel == 5) {
          ++nhitinTEC_5; 		  
        } else if (TEC_wheel == 6) {
          ++nhitinTEC_6;  
        } else if (TEC_wheel == 7) {
          ++nhitinTEC_7;  
        } else if (TEC_wheel == 8) {
          ++nhitinTEC_8;  
        } else if (TEC_wheel == 9) {
          ++nhitinTEC_9; 		 		  
        } else {
          std::cout << "CAUTION : Check Phase! TEC wheel not in {1 to 9}!" << std::endl;
          std::cout << "Wheel is : " << TEC_wheel << std::endl;
        }

        if (TEC_wheel == 1 && TEC_side == 1) {
          ++nhitinTEC_1_minus;  
        } else if (TEC_wheel == 1 && TEC_side == 2) {
          ++nhitinTEC_1_plus;  
        } else if (TEC_wheel == 2 && TEC_side == 1) {
          ++nhitinTEC_2_minus;  
        } else if (TEC_wheel == 2 && TEC_side == 2) {
          ++nhitinTEC_2_plus;  
        } else if (TEC_wheel == 3 && TEC_side == 1) {
          ++nhitinTEC_3_minus;  
        } else if (TEC_wheel == 3 && TEC_side == 2) {
          ++nhitinTEC_3_plus; 
        } else if (TEC_wheel == 4 && TEC_side == 1) {
          ++nhitinTEC_4_minus;  
        } else if (TEC_wheel == 4 && TEC_side == 2) {
          ++nhitinTEC_4_plus;  
        } else if (TEC_wheel == 5 && TEC_side == 1) {
          ++nhitinTEC_5_minus;  
        } else if (TEC_wheel == 5 && TEC_side == 2) {
          ++nhitinTEC_5_plus; 	  
	} else if (TEC_wheel == 6 && TEC_side == 1) {
          ++nhitinTEC_6_minus;  
        } else if (TEC_wheel == 6 && TEC_side == 2) {
          ++nhitinTEC_6_plus;  
        } else if (TEC_wheel == 7 && TEC_side == 1) {
          ++nhitinTEC_7_minus;  
        } else if (TEC_wheel == 7 && TEC_side == 2) {
          ++nhitinTEC_7_plus; 
        } else if (TEC_wheel == 8 && TEC_side == 1) {
          ++nhitinTEC_8_minus;  
        } else if (TEC_wheel == 8 && TEC_side == 2) {
          ++nhitinTEC_8_plus;  
        } else if (TEC_wheel == 9 && TEC_side == 1) {
          ++nhitinTEC_9_minus;  
        } else if (TEC_wheel == 9 && TEC_side == 2) {
          ++nhitinTEC_9_plus; 	   
        } else {
          std::cout << "CAUTION : TEC side not in {1,2}!" << std::endl;
        }

      }
      //////////////////////////////////////////////////////////////////////////////////////////////////
      //			Hit information in TOB		   		                        //
      /////////////////////////////////////////////////////////////////////////////////////////////////
      else if (SiStripDetId::TOB == subdetId1) {
        ++nhitinTOB;
      }
      //////////////////////////////////////////////////////////////////////////////////////////////////
      //			Hit information in TIB		                                	//
      /////////////////////////////////////////////////////////////////////////////////////////////////
      else if (SiStripDetId::TIB == subdetId1) {
        ++nhitinTIB;
      }
      //////////////////////////////////////////////////////////////////////////////////////////////////
      //			Hit information in TID		                                	//
      /////////////////////////////////////////////////////////////////////////////////////////////////
      else if (SiStripDetId::TID == subdetId1) {
        ++nhitinTID;

        if (tTopo->tidIsZMinusSide(detId1)) {
          ++nhitinTIDminus;
        } else {
          ++nhitinTIDplus;
        }
        int TID_side = tTopo->tidSide(detid_db);
        int TID_wheel = tTopo->tidWheel(detid_db);
        int TID_ring = tTopo->tidRing(detid_db);

        TID_SIDE.push_back(TID_side);
        TID_WHEEL.push_back(TID_wheel);
        TID_RING.push_back(TID_ring);

	if (TID_wheel == 1) {
          ++nhitinTID_1; 
        } else if (TID_wheel == 2) {
          ++nhitinTID_2;  
        } else if (TID_wheel == 3) {
          ++nhitinTID_3;  		 		  
        } else {
          std::cout << "CAUTION : Check Phase! TID wheel not in {1 to 3}!" << std::endl;
          std::cout << "Wheel is : " << TID_wheel << std::endl;
        }

        if (TID_wheel == 1 && TID_side == 1) {
          ++nhitinTID_1_minus;  
        } else if (TID_wheel == 1 && TID_side == 2) {
          ++nhitinTID_1_plus;  
        } else if (TID_wheel == 2 && TID_side == 1) {
          ++nhitinTID_2_minus;  
        } else if (TID_wheel == 2 && TID_side == 2) {
          ++nhitinTID_2_plus;  
        } else if (TID_wheel == 3 && TID_side == 1) {
          ++nhitinTID_3_minus;  
        } else if (TID_wheel == 3 && TID_side == 2) {
          ++nhitinTID_3_plus;  
        } else {
          std::cout << "CAUTION : TID side not in {1,2}!" << std::endl;
        }

      }

      countHit++;
    }  // for Loop over Hits

    nh_PIXEL.push_back(nHits_PIXEL);

    if (nhitinBPIX > 0) {
      track_BPIX++;
    }
    if (nhitinFPIX > 0) {
      track_FPIX++;
    }
    if (nhitinPIXEL > 0) {
      track_PIXEL++;
    }
    if (nhitinTEC > 0) {
      track_TEC++;
    }
    if (nhitinTECminus > 0) {
      track_TECM++;
    }
    if (nhitinTECplus > 0) {
      track_TECP++;
    }
    if (nhitinTOB > 0) {
      track_TOB++;
    }
    if (nhitinTIB > 0) {
      track_TIB++;
    }
    if (nhitinTID > 0) {
      track_TID++;
    }
    if (nhitinTIDminus > 0) {
      track_TIDM++;
    }
    if (nhitinTIDplus > 0) {
      track_TIDP++;
    }
    if (nhitinTID_1 > 0) {
      track_TID_1++;
    }
    if (nhitinTID_2 > 0) {
      track_TID_2++;
    }
    if (nhitinTID_3 > 0) {
      track_TID_3++;
    }
    if (nhitinTID_1_plus > 0) {
      track_TID_1_plus++;
    }
    if (nhitinTID_1_minus > 0) {
      track_TID_1_minus++;
    }
    if (nhitinTID_2_plus > 0) {
      track_TID_2_plus++;
    }
    if (nhitinTID_2_minus > 0) {
      track_TID_2_minus++;
    }
    if (nhitinTID_3_plus > 0) {
      track_TID_3_plus++;
    }
    if (nhitinTID_3_minus > 0) {
      track_TID_3_minus++;
    }
    if (nhitinTEC_1 > 0) {
      track_TEC_1++;
    }
    if (nhitinTEC_2 > 0) {
      track_TEC_2++;
    }
    if (nhitinTEC_3 > 0) {
      track_TEC_3++;
    }
    if (nhitinTEC_4 > 0) {
      track_TEC_4++;
    }
    if (nhitinTEC_5 > 0) {
      track_TEC_5++;
    }
    if (nhitinTEC_6 > 0) {
      track_TEC_6++;
    }
    if (nhitinTEC_7> 0) {
      track_TEC_7++;
    }
    if (nhitinTEC_8 > 0) {
      track_TEC_8++;
    }
    if (nhitinTEC_9 > 0) {
      track_TEC_9++;
    }
    if (nhitinTEC_1_plus > 0) {
      track_TEC_1_plus++;
    }
    if (nhitinTEC_1_minus > 0) {
      track_TEC_1_minus++;
    }
    if (nhitinTEC_2_plus > 0) {
      track_TEC_2_plus++;
    }
    if (nhitinTEC_2_minus > 0) {
      track_TEC_2_minus++;
    }
    if (nhitinTEC_3_plus > 0) {
      track_TEC_3_plus++;
    }
    if (nhitinTEC_3_minus > 0) {
      track_TEC_3_minus++;
    }
    if (nhitinTEC_4_plus > 0) {
      track_TEC_4_plus++;
    }
    if (nhitinTEC_4_minus > 0) {
      track_TEC_4_minus++;
    }
    if (nhitinTEC_5_plus > 0) {
      track_TEC_5_plus++;
    }
    if (nhitinTEC_5_minus > 0) {
      track_TEC_5_minus++;
    }
    if (nhitinTEC_6_plus > 0) {
      track_TEC_6_plus++;
    }
    if (nhitinTEC_6_minus > 0) {
      track_TEC_6_minus++;
    }
    if (nhitinTEC_7_plus > 0) {
      track_TEC_7_plus++;
    }
    if (nhitinTEC_7_minus > 0) {
      track_TEC_7_minus++;
    }
    if (nhitinTEC_8_plus > 0) {
      track_TEC_8_plus++;
    }
    if (nhitinTEC_8_minus > 0) {
      track_TEC_8_minus++;
    }
    if (nhitinTEC_9_plus > 0) {
      track_TEC_9_plus++;
    }
    if (nhitinTEC_9_minus > 0) {
      track_TEC_9_minus++;
    }

    ntrk++;
    ntrk_runnum++;
    nTotalTracks++;
  }  // for Loop over TrackCollection
  events++;

//  Handle<edmNew::DetSetVector<SiStripCluster> > cluster;
//  iEvent.getByToken(clustercollectionToken_, cluster);

//  for (edmNew::DetSetVector<SiStripCluster>::const_iterator det = cluster->begin(); det != cluster->end(); ++det) {
//    DetectorID = (det->detId());
//    treeCluster->Fill();
//  }

  edm::Handle<reco::MuonCollection> muH;
  iEvent.getByToken(muonTags_, muH);
  const reco::MuonCollection& muonsT0 = *(muH.product());
  float time = -9999.;
  for (unsigned int i = 0; i < muonsT0.size(); i++) {
    //DT time
    reco::MuonTime mt0 = muonsT0[i].time();
    time = mt0.timeAtIpInOut;
    DTtime.push_back(time);
  }

  treeEvent->Fill();
  ClearInEventLoop();
  nTotalEvents++;
  
}  //Event Loop

// ------------ method called once each job just before starting event loop  ------------
void CosmicRateAnalyzer::beginJob() {
  //--- Event tree ---//
  treeEvent->Branch("pt", &pt);
  treeEvent->Branch("charge", &charge);
  treeEvent->Branch("chi2", &chi2);
  treeEvent->Branch("chi2_ndof", &chi2_ndof);
  treeEvent->Branch("eta", &eta);
  treeEvent->Branch("theta", &theta);
  treeEvent->Branch("phi", &phi);
  treeEvent->Branch("p", &p);
  treeEvent->Branch("d0", &d0);
  treeEvent->Branch("dz", &dz);
  treeEvent->Branch("nvh", &nvh);
  treeEvent->Branch("ntrk", &ntrk);
  treeEvent->Branch("nHitsPIXEL", &nh_PIXEL);
  treeEvent->Branch("nHitsBPIX", &nh_BPIX);
  treeEvent->Branch("nHitsFPIX", &nh_FPIX);
  treeEvent->Branch("nHitsTIB", &nh_TIB);
  treeEvent->Branch("nHitsTOB", &nh_TOB);
  treeEvent->Branch("nHitsTID", &nh_TID);
  treeEvent->Branch("nHitsTEC", &nh_TEC);
  treeEvent->Branch("DTtime", &DTtime);
  treeEvent->Branch("magField", &magField);

  treeEvent->Branch("TID_Side", &TID_SIDE);
  treeEvent->Branch("TID_Wheel", &TID_WHEEL);
  treeEvent->Branch("TID_Disk", &TID_RING);
  treeEvent->Branch("TEC_Side", &TEC_SIDE);
  treeEvent->Branch("TEC_Wheel", &TEC_WHEEL);
  treeEvent->Branch("TEC_Disk", &TEC_RING);

  //--- Run tree ---//
  treeRun->Branch("run_time", &run_time);
  treeRun->Branch("runnum", &runnum);
  // a) For track Rate Calculation
  treeRun->Branch("number_of_events", &number_of_events);
  treeRun->Branch("number_of_tracks", &number_of_tracks);
  treeRun->Branch("number_of_tracks_PIX", &number_of_tracks_PIX);
  treeRun->Branch("number_of_tracks_FPIX", &number_of_tracks_FPIX);
  treeRun->Branch("number_of_tracks_BPIX", &number_of_tracks_BPIX);
  treeRun->Branch("number_of_tracks_TID", &number_of_tracks_TID);
  treeRun->Branch("number_of_tracks_TIDM", &number_of_tracks_TIDM);
  treeRun->Branch("number_of_tracks_TIDP", &number_of_tracks_TIDP);
  treeRun->Branch("number_of_tracks_TIB", &number_of_tracks_TIB);
  treeRun->Branch("number_of_tracks_TEC", &number_of_tracks_TEC);
  treeRun->Branch("number_of_tracks_TECP", &number_of_tracks_TECP);
  treeRun->Branch("number_of_tracks_TECM", &number_of_tracks_TECM);
  treeRun->Branch("number_of_tracks_TOB", &number_of_tracks_TOB);
  treeRun->Branch("number_of_tracks_TID_1", &number_of_tracks_TID_1);
  treeRun->Branch("number_of_tracks_TID_2", &number_of_tracks_TID_2);
  treeRun->Branch("number_of_tracks_TID_3", &number_of_tracks_TID_3);
  treeRun->Branch("number_of_tracks_TID_1_plus", &number_of_tracks_TID_1_plus);
  treeRun->Branch("number_of_tracks_TID_2_plus", &number_of_tracks_TID_2_plus);
  treeRun->Branch("number_of_tracks_TID_3_plus", &number_of_tracks_TID_3_plus);
  treeRun->Branch("number_of_tracks_TID_1_minus", &number_of_tracks_TID_1_minus);
  treeRun->Branch("number_of_tracks_TID_2_minus", &number_of_tracks_TID_2_minus);
  treeRun->Branch("number_of_tracks_TID_3_minus", &number_of_tracks_TID_3_minus);
  treeRun->Branch("number_of_tracks_TEC_1", &number_of_tracks_TEC_1);
  treeRun->Branch("number_of_tracks_TEC_2", &number_of_tracks_TEC_2);
  treeRun->Branch("number_of_tracks_TEC_3", &number_of_tracks_TEC_3);
  treeRun->Branch("number_of_tracks_TEC_4", &number_of_tracks_TEC_4);
  treeRun->Branch("number_of_tracks_TEC_5", &number_of_tracks_TEC_5);
  treeRun->Branch("number_of_tracks_TEC_6", &number_of_tracks_TEC_6);
  treeRun->Branch("number_of_tracks_TEC_7", &number_of_tracks_TEC_7);
  treeRun->Branch("number_of_tracks_TEC_8", &number_of_tracks_TEC_8);
  treeRun->Branch("number_of_tracks_TEC_9", &number_of_tracks_TEC_9);
  treeRun->Branch("number_of_tracks_TEC_1_plus", &number_of_tracks_TEC_1_plus);
  treeRun->Branch("number_of_tracks_TEC_2_plus", &number_of_tracks_TEC_2_plus);
  treeRun->Branch("number_of_tracks_TEC_3_plus", &number_of_tracks_TEC_3_plus);
  treeRun->Branch("number_of_tracks_TEC_4_plus", &number_of_tracks_TEC_4_plus);
  treeRun->Branch("number_of_tracks_TEC_5_plus", &number_of_tracks_TEC_5_plus);
  treeRun->Branch("number_of_tracks_TEC_6_plus", &number_of_tracks_TEC_6_plus);
  treeRun->Branch("number_of_tracks_TEC_7_plus", &number_of_tracks_TEC_7_plus);
  treeRun->Branch("number_of_tracks_TEC_8_plus", &number_of_tracks_TEC_8_plus);
  treeRun->Branch("number_of_tracks_TEC_9_plus", &number_of_tracks_TEC_9_plus); 
  treeRun->Branch("number_of_tracks_TEC_1_minus", &number_of_tracks_TEC_1_minus);
  treeRun->Branch("number_of_tracks_TEC_2_minus", &number_of_tracks_TEC_2_minus);
  treeRun->Branch("number_of_tracks_TEC_3_minus", &number_of_tracks_TEC_3_minus);
  treeRun->Branch("number_of_tracks_TEC_4_minus", &number_of_tracks_TEC_4_minus);
  treeRun->Branch("number_of_tracks_TEC_5_minus", &number_of_tracks_TEC_5_minus);
  treeRun->Branch("number_of_tracks_TEC_6_minus", &number_of_tracks_TEC_6_minus);
  treeRun->Branch("number_of_tracks_TEC_7_minus", &number_of_tracks_TEC_7_minus);
  treeRun->Branch("number_of_tracks_TEC_8_minus", &number_of_tracks_TEC_8_minus);
  treeRun->Branch("number_of_tracks_TEC_9_minus", &number_of_tracks_TEC_9_minus); 

  // a) For PIXEL Hit Rate Calculation
  treeRun->Branch("number_of_hits_Total", &number_of_hits_Total);
  treeRun->Branch("number_of_hits_PIX", &number_of_hits_PIX);
  treeRun->Branch("number_of_hits_BPIX", &number_of_hits_BPIX);
  treeRun->Branch("number_of_hits_BPIX_layer1", &number_of_hits_BPIX_layer1);
  treeRun->Branch("number_of_hits_BPIX_layer2", &number_of_hits_BPIX_layer2);
  treeRun->Branch("number_of_hits_BPIX_layer3", &number_of_hits_BPIX_layer3);
  treeRun->Branch("number_of_hits_BPIX_layer4", &number_of_hits_BPIX_layer4);
  treeRun->Branch("number_of_hits_FPIX", &number_of_hits_FPIX);
  treeRun->Branch("number_of_hits_FPIX_disk1", &number_of_hits_FPIX_disk1);
  treeRun->Branch("number_of_hits_FPIX_disk2", &number_of_hits_FPIX_disk2);
  treeRun->Branch("number_of_hits_FPIX_disk3", &number_of_hits_FPIX_disk3);
  treeRun->Branch("number_of_hits_FPIX_disk1_plus", &number_of_hits_FPIX_disk1_plus);
  treeRun->Branch("number_of_hits_FPIX_disk1_minus", &number_of_hits_FPIX_disk1_minus);
  treeRun->Branch("number_of_hits_FPIX_disk2_plus", &number_of_hits_FPIX_disk2_plus);
  treeRun->Branch("number_of_hits_FPIX_disk2_minus", &number_of_hits_FPIX_disk2_minus);
  treeRun->Branch("number_of_hits_FPIX_disk3_plus", &number_of_hits_FPIX_disk3_plus);
  treeRun->Branch("number_of_hits_FPIX_disk3_minus", &number_of_hits_FPIX_disk3_minus);

  //--- Cluster tree ---//
//  treeCluster->Branch("DetID", &DetectorID);

  //-------- Hit Count Vs phi,theta,x,y,z Histograms --------//
  TFileDirectory HitCountDir = fs->mkdir("HitCountPlots");
  hHitCountVsZBPix = HitCountDir.make<TH1D>("h_HitCountVsZBpix", "Number of BPix hits vs z;hit global z;hits", 60, -30., 30.);
  hHitCountVsZFPix = HitCountDir.make<TH1D>("h_HitCountVsZFpix", "Number of FPix hits vs z;hit global z;hits", 100, -100., 100.);
  hHitCountVsXBPix = HitCountDir.make<TH1D>("h_HitCountVsXBpix", "Number of BPix hits vs x;hit global x;hits", 20, -20., 20.);
  hHitCountVsXFPix = HitCountDir.make<TH1D>("h_HitCountVsXFpix", "Number of FPix hits vs x;hit global x;hits", 20, -20., 20.);
  hHitCountVsYBPix = HitCountDir.make<TH1D>("h_HitCountVsYBpix", "Number of BPix hits vs y;hit global y;hits", 20, -20., 20.);
  hHitCountVsYFPix = HitCountDir.make<TH1D>("h_HitCountVsYFpix", "Number of FPix hits vs y;hit global y;hits", 20, -20., 20.);
  hHitCountVsThetaBPix = HitCountDir.make<TH1D>("h_HitCountVsThetaBpix", "Number of BPix hits vs #theta;hit global #theta;hits", 20, 0., 3.2);
  hHitCountVsPhiBPix = HitCountDir.make<TH1D>("h_HitCountVsPhiBpix", "Number of BPix hits vs #phi;hit global #phi;hits", 20, 3.2, 3.2);
  hHitCountVsThetaFPix = HitCountDir.make<TH1D>("h_HitCountVsThetaFpix", "Number of FPix hits vs #theta;hit global #theta;hits", 40, 0., 3.2);
  hHitCountVsPhiFPix = HitCountDir.make<TH1D>("h_HitCountVsPhiFpix", "Number of FPix hits vs #phi;hit global #phi;hits", 20, -3.2, 3.2);
  hHitCountVsZFPixPlus = HitCountDir.make<TH1D>("h_HitCountVsZFPixPlus", "Number of FPix(Z+) hits vs z;hit global z;hits", 60, 15., 60.);
  hHitCountVsZFPixMinus = HitCountDir.make<TH1D>("h_HitCountVsZFPixMinus", "Number of FPix(Z-) hits vs z;hit global z;hits", 100, -60., -15.);
  hHitCountVsXFPixPlus = HitCountDir.make<TH1D>("h_HitCountVsXFPixPlus", "Number of FPix(Z+) hits vs x;hit global x;hits", 20, -20., 20.);
  hHitCountVsXFPixMinus = HitCountDir.make<TH1D>("h_HitCountVsXFPixMinus", "Number of FPix(Z-) hits vs x;hit global x;hits", 20, -20., 20.);
  hHitCountVsYFPixPlus = HitCountDir.make<TH1D>("h_HitCountVsYFPixPlus", "Number of FPix(Z+) hits vs y;hit global y;hits", 20, -20., 20.);
  hHitCountVsYFPixMinus = HitCountDir.make<TH1D>("h_HitCountVsYFPixMinus", "Number of FPix(Z-) hits vs y;hit global y;hits", 20, -20., 20.);
  hHitCountVsThetaFPixPlus = HitCountDir.make<TH1D>("h_HitCountVsThetaFPixPlus", "Number of FPix(Z+) hits vs #theta;hit global #theta;hits", 20, 0., 3.2);
  hHitCountVsPhiFPixPlus = HitCountDir.make<TH1D>("h_HitCountVsPhiFPixPlus","Number of FPix(Z+) hits vs #phi;hit global #phi;hits",20,-3.2,3.2);
  hHitCountVsThetaFPixMinus = HitCountDir.make<TH1D>("h_HitCountVsThetaFPixMinus", "Number of FPix(Z+) hits vs #theta;hit global #theta;hits", 40, 0., 3.2);
  hHitCountVsPhiFPixMinus = HitCountDir.make<TH1D>("h_HitCountVsPhiFPixMinus","Number of FPix(Z-) hits vs #phi;hit global #phi;hits",20,-3.2,3.2);

}

// ------------ method called once each job just after ending the event loop  ------------
void CosmicRateAnalyzer::endJob() {
  fclose(outfile);
  std::cout << "Total Events: " << nTotalEvents << std::endl;
  std::cout << "TotalTracks: " << nTotalTracks << std::endl;
}

// ------------ method called when starting to processes a run  ------------
void CosmicRateAnalyzer::beginRun(edm::Run const&, edm::EventSetup const&) {
  lastruntime = 0.0;
  lastrunnum = 0.0;
  ntrk_runnum = 0.0;
  events = 0.0;
  // a) for Track rate
  track_BPIX = 0.0;
  track_FPIX = 0.0;
  track_PIXEL = 0.0;
  track_TEC = 0.0;
  track_TECM = 0.0;
  track_TECP = 0.0;
  track_TOB = 0.0;
  track_TIB = 0.0;
  track_TID = 0.0;
  track_TIDM = 0.0;
  track_TIDP = 0.0;
  track_TID_1 = 0.0 ;
  track_TID_2 = 0.0 ;
  track_TID_3 = 0.0 ;
  track_TID_1_minus = 0.0 ;
  track_TID_2_minus = 0.0 ;
  track_TID_3_minus = 0.0 ;
  track_TID_1_plus = 0.0 ;
  track_TID_2_plus = 0.0 ;
  track_TID_3_plus = 0.0 ;
  track_TEC_1 = 0.0 ;
  track_TEC_2 = 0.0 ;
  track_TEC_3 = 0.0 ;
  track_TEC_4 = 0.0 ;
  track_TEC_5 = 0.0 ;
  track_TEC_6 = 0.0 ;
  track_TEC_7 = 0.0 ;
  track_TEC_8 = 0.0 ;
  track_TEC_9 = 0.0 ;
  track_TEC_1_minus = 0.0 ;
  track_TEC_2_minus = 0.0 ;
  track_TEC_3_minus = 0.0 ;
  track_TEC_4_minus = 0.0 ;
  track_TEC_5_minus = 0.0 ;
  track_TEC_6_minus = 0.0 ;
  track_TEC_7_minus = 0.0 ;
  track_TEC_8_minus = 0.0 ;
  track_TEC_9_minus = 0.0 ;
  track_TEC_1_plus = 0.0 ;
  track_TEC_2_plus = 0.0 ;
  track_TEC_3_plus = 0.0 ;
  track_TEC_4_plus = 0.0 ;
  track_TEC_5_plus = 0.0 ;
  track_TEC_6_plus = 0.0 ;
  track_TEC_7_plus = 0.0 ;
  track_TEC_8_plus = 0.0 ;
  track_TEC_9_plus = 0.0 ;

  // b) for PIXEL hit rate
  hit_Total = 0.0;
  hit_PIX = 0.0;
  hit_BPIX = 0.0;
  hit_BPIX_layer1 = 0.0;
  hit_BPIX_layer2 = 0.0;
  hit_BPIX_layer3 = 0.0;
  hit_BPIX_layer4 = 0.0;
  hit_FPIX = 0.0;
  hit_FPIX_disk1 = 0.0;
  hit_FPIX_disk2 = 0.0;
  hit_FPIX_disk3 = 0.0;
  hit_FPIX_disk1_plus = 0.0;
  hit_FPIX_disk1_minus = 0.0;
  hit_FPIX_disk2_plus = 0.0;
  hit_FPIX_disk2_minus = 0.0;
  hit_FPIX_disk3_plus = 0.0;
  hit_FPIX_disk3_minus = 0.0;
}

// ------------ method called when ending the processing of a run  ------------

void CosmicRateAnalyzer::endRun(edm::Run const&, edm::EventSetup const&) {
  number_of_tracks = ntrk_runnum;
  run_time = lastruntime;
  runnum = lastrunnum;
  // a) for Track Rate
  number_of_tracks_PIX = track_PIXEL;
  number_of_tracks_FPIX = track_FPIX;
  number_of_tracks_BPIX = track_BPIX;
  number_of_tracks_TEC = track_TEC;
  number_of_tracks_TECM = track_TECM;
  number_of_tracks_TECP = track_TECP;
  number_of_tracks_TOB = track_TOB;
  number_of_tracks_TIB = track_TIB;
  number_of_tracks_TID = track_TID;
  number_of_tracks_TIDM = track_TIDM;
  number_of_tracks_TIDP = track_TIDP;
  number_of_events = events;
  number_of_tracks_TID_1 = track_TID_1;
  number_of_tracks_TID_2 = track_TID_2;
  number_of_tracks_TID_3 = track_TID_3;
  number_of_tracks_TID_1_plus = track_TID_1_plus;
  number_of_tracks_TID_2_plus = track_TID_2_plus;
  number_of_tracks_TID_3_plus = track_TID_3_plus;
  number_of_tracks_TID_1_minus = track_TID_1_minus;
  number_of_tracks_TID_2_minus = track_TID_2_minus;
  number_of_tracks_TID_3_minus = track_TID_3_minus;
  number_of_tracks_TEC_1 = track_TEC_1;
  number_of_tracks_TEC_2 = track_TEC_2;
  number_of_tracks_TEC_3 = track_TEC_3;
  number_of_tracks_TEC_4 = track_TEC_4;
  number_of_tracks_TEC_5 = track_TEC_5;
  number_of_tracks_TEC_6 = track_TEC_6;
  number_of_tracks_TEC_7 = track_TEC_7;
  number_of_tracks_TEC_8 = track_TEC_8;
  number_of_tracks_TEC_9 = track_TEC_9;
  number_of_tracks_TEC_1_plus = track_TEC_1_plus;
  number_of_tracks_TEC_2_plus = track_TEC_2_plus;
  number_of_tracks_TEC_3_plus = track_TEC_3_plus;
  number_of_tracks_TEC_4_plus = track_TEC_4_plus;
  number_of_tracks_TEC_5_plus = track_TEC_5_plus;
  number_of_tracks_TEC_6_plus = track_TEC_6_plus;
  number_of_tracks_TEC_7_plus = track_TEC_7_plus;
  number_of_tracks_TEC_8_plus = track_TEC_8_plus;
  number_of_tracks_TEC_9_plus = track_TEC_9_plus;
  number_of_tracks_TEC_1_minus = track_TEC_1_minus;
  number_of_tracks_TEC_2_minus = track_TEC_2_minus;
  number_of_tracks_TEC_3_minus = track_TEC_3_minus;
  number_of_tracks_TEC_4_minus = track_TEC_4_minus;
  number_of_tracks_TEC_5_minus = track_TEC_5_minus;
  number_of_tracks_TEC_6_minus = track_TEC_6_minus;
  number_of_tracks_TEC_7_minus = track_TEC_7_minus;
  number_of_tracks_TEC_8_minus = track_TEC_8_minus;
  number_of_tracks_TEC_9_minus = track_TEC_9_minus;

  // b) for PIXEL Hit Rate
  number_of_hits_Total = hit_Total;
  number_of_hits_PIX = hit_PIX;
  number_of_hits_BPIX = hit_BPIX;
  number_of_hits_BPIX_layer1 = hit_BPIX_layer1;
  number_of_hits_BPIX_layer2 = hit_BPIX_layer2;
  number_of_hits_BPIX_layer3 = hit_BPIX_layer3;
  number_of_hits_BPIX_layer4 = hit_BPIX_layer4;
  number_of_hits_FPIX = hit_FPIX;
  number_of_hits_FPIX_disk1 = hit_FPIX_disk1;
  number_of_hits_FPIX_disk2 = hit_FPIX_disk2;
  number_of_hits_FPIX_disk3 = hit_FPIX_disk3;
  number_of_hits_FPIX_disk1_plus = hit_FPIX_disk1_plus;
  number_of_hits_FPIX_disk1_minus = hit_FPIX_disk1_minus;
  number_of_hits_FPIX_disk2_plus = hit_FPIX_disk2_plus;
  number_of_hits_FPIX_disk2_minus = hit_FPIX_disk2_minus;
  number_of_hits_FPIX_disk3_plus = hit_FPIX_disk3_plus;
  number_of_hits_FPIX_disk3_minus = hit_FPIX_disk3_minus;

  treeRun->Fill();

  fprintf(outfile,"RunNumber: %i \t Runtime: %f \n", runnum, run_time);
}

// ------------ method fills 'descriptions' with the allowed parameters for the module  ------------
void CosmicRateAnalyzer::fillDescriptions(edm::ConfigurationDescriptions& descriptions) {
  edm::ParameterSetDescription desc;
  desc.setComment("Create tuple with all variables required to calculate cosmic event and track rates.");
  desc.add<edm::InputTag>("tracksInputTag", edm::InputTag("ALCARECOTkAlCosmicsCTF0T"));
  desc.add<edm::InputTag>("muonsInputTag", edm::InputTag("muons1Leg"));
  descriptions.add("cosmicRateAnalyzer", desc);
}

//define this as a plug-in
DEFINE_FWK_MODULE(CosmicRateAnalyzer);
