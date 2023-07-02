#!/bin/bash

# Compile the C++ code
g++  "$1" -pedantic-errors

# Check if the compilation was successful
if [ $? -eq 0 ]; then
  # If compilation succeeded, run the program
  ./a
  # Delete the executable
  rm a
else
  # If compilation failed, display an error message
  echo a
fi
