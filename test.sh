#!/bin/bash
echo "run tests"
cmake --build .
ctest --verbose