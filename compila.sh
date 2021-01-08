#!/bin/bash

g++ -fsanitize=undefined,address,leak -O0 -g -o "$1" "$1.cpp" ArrayList.cpp
//Se io eseguo questo mi stampa 5 indirizzi di memoria uguali
