#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;

int main();
void MainMenu();


//��������� ������� ��� 3 ��������
void Semenar3();
double CheckSizeOfArr();
int Counter(double *Array, double size);
void SortArr(double *Ex_Array, double size);
void ProductOfNumbers(double *Ex_Array, double size);
void SortMainArr(double *Array, double size);


//��������� ������� ��� 4 ��������
void Seminar4();
bool CheckSizeOfArray(double ROW, double COL);
int Characteristic(double COL, int i, int **Array);
int ColumNumber(double ROW , double COL, int** Array);
void ColumnOutput(double ROW, double COL, int** Array);
void ArraySort(double ROW, double COL, int** Array);
void ArrayOutput(double ROW, double COL, int** Array);


//��������� ������� ��� 5 ��������
void Seminar5();
void FileCreater(char path[64]);