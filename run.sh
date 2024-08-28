#!/bin/bash

fileName="data.txt"

## Build program:
echo ":::::::::::: Building C++ Program with dependencies  :::::::::::::::"
echo "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
echo "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
# cmd also found in readme:
clang++ main.cpp file_class/file_class.cpp file_system/file_system.cpp -std=c++17 -o main

## Run program:
echo "::::::::::::::::::::  Running C++ Program  :::::::::::::::::::::::::"
echo "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
echo "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
./main

## Read file output:
echo ":::::::::::::::::::::  Read File Output  :::::::::::::::::::::::::::"
echo "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
echo "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
#cat "${fileName}"
ls ./data
