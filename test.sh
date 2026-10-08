#!/user/bin/env bash 
set -eu
mkdir -p build 
g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o build/app

./build/app < tests/input1.txt > build/actual1.txt
diff -u tests/expected1.txt build/actual1.txt

./build/app < tests/input2.txt > build/actual2.txt
diff -u tests/expected2.txt build/actual2.txt

./build/app < tests/input3.txt > build/actual3.txt
diff -u tests/expected3.txt build/actual3.txt

./build/app < tests/input4.txt > build/actual4.txt
diff -u tests/expected4.txt build/actual4.txt

echo "All acceptance tests passed"