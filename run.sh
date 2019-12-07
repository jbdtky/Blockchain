#!/bin/bash

# Compile
cd Sources/ && gcc client.c block.c transaction.c -o client && ./client