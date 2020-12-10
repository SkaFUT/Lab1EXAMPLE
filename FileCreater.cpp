#include "pch.h"

void FileCreater(char path[64])
{
	ofstream fout;
	fout.open(path);
	fout << "The sea was really rough and the waves were huge. It was so exciting! Canoe was full of water but we weren't scary.";
	fout.close();
}