import os 

datasetStreamExpress2021 = {'CRUZET_StreamExpress_2021_17Aug_Full':'/StreamExpressCosmics/Commissioning2021-TkAlCosmics0T-Express-v1/ALCARECO'}

datasetStreamExpress2018 = {'StreamExpress_2018':'/StreamExpressCosmics/Commissioning2018-TkAlCosmics0T-Express-v1/ALCARECO'}

datasetStreamExpress2020 = {'StreamExpress_2020':'/StreamExpressCosmics/Commissioning2020-TkAlCosmics0T-Express-v1/ALCARECO'}

datasetsCommissioning2018 = {'Commissioning2018':'/Cosmics/Commissioning2018-TkAlCosmics0T-PromptReco-v1/ALCARECO'}

datasetsCRUZET_ReReco_2021 = {'CRUZET_ReReco_2021':'/Cosmics/Commissioning2021-TkAlCosmics0T-ReReco_113X_dataRun3_v2-v1/ALCARECO'}
listFiles = []
listFilesEvents = []
dic = {}
#emptyFiles = 0 
total=0

for key, value in datasetsCRUZET_ReReco_2021.items():
    cmd_file = "dasgoclient -query='file dataset="+ str(value) +"'"
    cmd_CheckRuns = "dasgoclient -query='run dataset="+ str(value) +" | count(run.nevents)'"
#    cmd_CheckFiles = "dasgoclient -query='file dataset="+ str(value) +" | count(file.nevents)'"
#    cmd_CheckTry = "dasgoclient -query='file dataset="+ str(value) +" | count(file.nevents)'"
    cmd_event = "dasgoclient -query='file dataset="+ str(value) +" | grep file.nevents'"
    AllFiles = os.popen(cmd_file)
    AllFilesEvents = os.popen(cmd_event)
    TotalRuns = os.popen(cmd_CheckRuns)
#    TotalFiles = os.popen(cmd_CheckFiles)
    print("TotalRuns in dataset: ", TotalRuns.readlines())
#    print("TotalFiles in dataset: ", TotalFiles.readlines())
    listFiles = AllFiles.readlines()
    listFilesEvents = AllFilesEvents.readlines()
    dic = {listFiles[i] : int(listFilesEvents[i].strip(' \n')) for i in range((len(listFiles))) }

    with open(str(key)+".txt","w") as f:
        for key, value in dic.items():
            if value>0:
                total = total + value
                f.write(key)
#            else :
#		emptyFiles += emptyFiles

#print(type(cmd_CheckRuns))
#print(cmd_file)
#print(len(listFiles))
#print(len(listFilesEvents))
#print(listFilesEvents)
#print("Empty Runs: ", emptyFiles)
print("Total Events: ", total)
