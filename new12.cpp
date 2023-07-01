#include<iostream>
#include "kbhit.hpp"
#include "matrix.hpp"

using namespace std;

Matrix grid(30,60);

int yCoord = 14, xCoord = 29;

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
			grid.display();
		}
	}
}	
int main()
{
	grid.insert(yCoord, xCoord, 1);
	grid.display();
	move();
}

