#pragma once
using namespace std;
#include <iostream>
#include <string>
#include <random>

int GenerateRandomElementsArr(int arr[], const int SIZE);

int SumRangeArray(int arr[], int startIndex, int endIndex);

bool isSumRangeZero(int arr[], int startIndex, int endIndex);

int ProizvedRangeArr(int arr[], int startIndex, int endIndex);

bool ProizvedRangeArr(int arr[], int size, int startIndex, int endIndex, int& result);

int print_array(int array[], int& size, const int SIZE);

int insert(int array[], int& size, int index, int element);

int del(int array[], int& size, int element);

int BubleSort(int array[], int& size);

double BubleSortDouble(double arr[], const int SIZE);

int SelectionSort(int array[], int& size);

int InsertionSort(int array[], int& size);

int LinearSearchMinMax(int array[], int& size);

int BinarySearch(int array[], const int SIZE, int key);

int PositiveElementsArr(int array[], const int SIZE);

int NegativeElementsArr(int array[], const int SIZE);

int CountZeroElementsArr(int array[], const int SIZE);

int CountMultiples(int array[], const int SIZE, int m);

int inputArr(int array[], int n);

int inputElementsArrTxtFile(int array[], int n, const int MAX_SIZE);

int FileInputOutputBinary(int array[], int n, const int MAX_SIZE);

void GenerateDoubleArr(double arr[], int size);

void sum_of_positive_elements(double arr[], const int SIZE);

double prod_between_max_min(double arr[], const int SIZE);