#!/usr/bin/env bash

clear;make
mv *.o objs
mv ArrayStack objs
read -p 'Continue y/n: ' continue

if [ "$continue" = "y" ]
then 
  clear;
  ./objs/ArrayStack
elif [ "$continue" = "n" ]
then
  echo "Done"
fi

