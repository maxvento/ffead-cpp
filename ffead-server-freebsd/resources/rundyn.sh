#!/bin/sh
cd $FEAD_CPP_PATH/rtdcf
rm -f $FEAD_CPP_PATH/*.cntrl
gmake all
cp -Rf $FEAD_CPP_PATH/public/* $FEAD_CPP_PATH/web/default/public/
