#!/bin/bash

if [ "$#" == 0 ] || [ $1 == "-h" ] || [ $1 == "--help" ]
then
  printf "\nUsage: "
  printf "runPlotter.sh [InputFileName] [runMin(optional)] [runMax(optional)]\n\n"
  exit 1;
fi

INPUTFILE=$1
CWD=`pwd`
FILE=\"$CWD/$INPUTFILE\"

if [ "$#" == 1 ]
then
   root -l -b -q "$CMSSW_BASE/src/Alignment/TrackerAlignment/macros/ReRecoComparison/CosmicRateTool_PixelHitRatesFromCSV_Blue.C(${FILE})"
fi
