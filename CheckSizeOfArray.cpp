#include "pch.h"

bool CheckSizeOfArray(double ROW, double COL)
{
	bool ok = true;//покажет удовлетворяет ли нас размрерность
	bool light = true; //булевая перменная Light с англ свет(маячок) будет сигналом для выхода с for
	
		if ((ROW<0.0)||(COL < 0.0))
		{
			cout << "You entered a negative number, the array size cannot be negative.\nEnter a natural number.for example: (3 and 4)\nTry again\n";
		}
		else
		{
			if ((ROW==(int)ROW) || (COL == (int)COL))
			{
				light = false;
				ok = false;
			}
			else
			{
				cout << "You entered a real number, the dimension of the array must be expressed as a natural number.for example: (2 and 3)\nTry again\n";
			}
		}
	
	return ok;
}