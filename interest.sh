#!/bin/sh

# Hw 4 Part 2
# Ryan Michal

# Hello World Program in Bash Shell

#part 2 question 1

# futurevalue=$(bc -l <<< '100 + (1 + 0.05/12) ^ 12');

# echo $futurevalue;

#####################################
#part 2 question 2

# $1 is the first arugment
# this script is called by getrate

futurevalue=$(bc -l <<< "100 + (1 + $1/12) ^ 12");

echo $futurevalue;