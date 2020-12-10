#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;

int main();
void MainMenu();


//Прототипы функций для 3 семинара
void Semenar3();
double CheckSizeOfArr();
int Counter(double *Array, double size);
void SortArr(double *Ex_Array, double size);
void ProductOfNumbers(double *Ex_Array, double size);
void SortMainArr(double *Array, double size);


//Прототипы функций для 4 семинара
void Seminar4();
bool CheckSizeOfArray(double ROW, double COL);
int Characteristic(double COL, int i, int **Array);
int ColumNumber(double ROW , double COL, int** Array);
void ColumnOutput(double ROW, double COL, int** Array);
void ArraySort(double ROW, double COL, int** Array);
void ArrayOutput(double ROW, double COL, int** Array);


//Прототипы функции для 5 семинара
void Seminar5();
void FileCreater(char path[64]);