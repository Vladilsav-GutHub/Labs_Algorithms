#pragma once
using namespace std;
#include <string>
#include <iostream>
#include <random>
#include <sstream>
#include <string>
#include <iomanip>

int GenerateRandomElementsArr(int arr[], const int SIZE);

int SumRangeArray(int arr[], int startIndex, int endIndex);

int ProizvedRangeArr(int arr[], int startIndex, int endIndex);

int insert_element(int arr[], int& size, int value, int index, const int SIZE);

int print_array(int arr[], int size);