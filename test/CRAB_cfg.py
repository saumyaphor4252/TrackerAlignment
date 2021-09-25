from CRABClient.UserUtilities import config
config = config()

config.General.requestName = 'CRUZET_ReReco'
config.General.workArea = 'CRAB_CRUZET_ReReco'
config.General.transferOutputs = True
config.General.transferLogs = True

config.JobType.pluginName = 'Analysis'
config.JobType.psetName = 'CRAB_cosmicRateAnalyzer.py'
config.JobType.inputFiles = ['CRAB_CRUZET2021_files.txt']
config.JobType.allowUndistributedCMSSW = True

config.Data.userInputFiles = open('CRAB_CRUZET2021_files.txt').readlines()
config.Data.splitting = 'FileBased'
config.Data.unitsPerJob = 1
#config.Data.totalunits = 19
#totalUnits = unitsPerJob * nJobs 
config.Data.publication = False
config.Data.outputPrimaryDataset = 'CRUZET2021_ReReco'
config.Data.outLFNDirBase = '/store/user/ssaumya/CRUZET_2021_ReReco/'

config.Site.storageSite = 'T2_IN_TIFR'
