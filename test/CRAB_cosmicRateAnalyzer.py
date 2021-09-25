# Implementation : Description of running this tool can be find  at :
# https://twiki.cern.ch/twiki/bin/view/CMS/TkAlCosmicsRateMonitoring

import FWCore.ParameterSet.Config as cms
import os
import sys

process = cms.Process("Demo")
process.load("FWCore.MessageLogger.MessageLogger_cfi")
process.MessageLogger.cerr.FwkReport.reportEvery = 20000

process.options = cms.untracked.PSet( wantSummary = cms.untracked.bool(True))
process.load('Configuration.StandardSequences.MagneticField_cff') # B-field map
process.load('Configuration.Geometry.GeometryRecoDB_cff') # Ideal geometry and interface
process.load("Configuration.StandardSequences.FrontierConditions_GlobalTag_cff") # Global tag
from Configuration.AlCa.GlobalTag import GlobalTag
process.GlobalTag = GlobalTag(process.GlobalTag, '113X_dataRun3_v2')

process.maxEvents=cms.untracked.PSet(input=cms.untracked.int32(-1))

# xxxxxxxxxxxxxxxxxx For running on root files in a text file xxxxxxxxxxxxxxxxxxxxxxxxx//
import FWCore.Utilities.FileUtils as FileUtils
filename='CRAB_CRUZET2021_files.txt'
readFiles = cms.untracked.vstring( FileUtils.loadListFromFile (os.environ['CMSSW_BASE']+'/src/Alignment/TrackerAlignment/test/'+str(filename)) )
process.source = cms.Source("PoolSource",
			   fileNames = readFiles,
			   )

process.TFileService = cms.Service("TFileService", fileName = cms.string("CRUZET_ReReco_2021_CRAB.root") )
process.load("Alignment.TrackerAlignment.cosmicRateAnalyzer_cfi")
process.p = cms.Path(process.cosmicRateAnalyzer)
