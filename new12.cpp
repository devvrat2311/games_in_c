#include<iostream>
#include "kbhit.hpp"
#include "matrix.hpp"
#include<cstdlib>

using namespace std;

Matrix grid(45,60);

int yCoord = 14, xCoord = 29;
void borderMake()
{
	for(int i=0; i<45; i++)
	{
		for(int j=0; j<60; j++)
		{
			if(i==0 || i==44 || j==0 || j==59)
			{
				grid.insert(i,j,-1);
			}
		}
	}
}

void move()
{
	while(1)
	{
		if(kbhit())
		{
			int key = getchar();

			switch(key){
				case 119:
					yCoord--;
					break;
				case 115:
					yCoord++;
					break;
				case 100:
					xCoord++;
					break;
				case 97:
					xCoord--;
					break;
				default:
					break;
			}
			
			if (key == 27) 
				break;
			grid.insert(yCoord, xCoord, 1);
			system("clear");	
	  		borderMake();
			grid.display(true);

		}
	}
}

int main()
{
	grid.insert(yCoord, xCoord, 1);
	grid.display();
	move();
}

