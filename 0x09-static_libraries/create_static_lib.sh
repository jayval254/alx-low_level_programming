#!/bin/bash
files=$(ls *.c)
for file in $files
do
	gcc -c $file
done
ar rcs liball.a *.o
