#!/bin/bash

if [ $# -eq 0]
then
  gcc ./main.c -o ./main.out
  exit 0
fi

gcc ./$1.c -o ./$1.out
./$1.out

