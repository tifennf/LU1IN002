#!/bin/bash

if [5 -gt 3] 
then
  gcc ./main.c -o ./main.out
  ./main.out
else
  gcc ./$1.c -o ./$1.out
  ./$1.out
fi



