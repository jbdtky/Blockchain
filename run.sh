#!/bin/bash

# Compile
gcc client.c block.c transaction.c -o client

# Run
./client