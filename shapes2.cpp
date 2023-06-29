#include<iostream>
#include<vector>
#include<chrono>
#include<thread>
#include<cstdlib>

using namespace std;
using namespace chrono;
using namespace this_thread;

class Matrix{
private:
	int height;
	int width;
	vector<vector<int>> mat;


public:
	Matrix(int height, int width)
	{
		this -> height = height;
		this -> width = width;
		this -> mat.resize(height, vector<int>(width));
	}	
	void show()
	{
		for(int i=0;i<height;i++)
		{
			for(int j=0; j<width; j++)
			{
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
	}	
	void makeLineRight(int x, int y, int length)
	{
		while(length--)
		{
			mat[x][y++]=1;
		}
		display();
	}
	void makeLineLeft(int x, int y, int length)
	{
		while(length--)
		{
			mat[x][y--]=1;
		}
		display();
	}
	void makeLineUp(int x, int y, int length)
	{
		while(length--)
		{
			mat[x--][y]=1;
		}
		display();
	}
	void makeLineDown(int x, int y, int length)
	{
		while(length--)
		{
			mat[x++][y]=1;
		}
		display();
	}
	void reset_mat()
	{
		for(int i=0;i<height;i++)
		{
			for(int j=0;j<width;j++)
			{
				mat[i][j]=0;
			}
		}
	}
	void display(bool reset=false)
	{
		for(int i=0; i<height; i++)
		{
			for(int j=0; j<width; j++)
			{
				if(mat[i][j]==0)
					cout<<" ";
				else if(mat[i][j]==1)
					cout<<"o";
				cout<<" ";
			}
			cout<<endl;
		}
		sleep_for(seconds(1));
		system("clear");
		if(reset)
			reset_mat();
		
	}
	void makeSquare(int x, int y, int length)
	{
		makeLineRight(x,y,length);
		makeLineDown(x,y+length,length);
		makeLineLeft(x+length,y+length,length);
		makeLineUp(x+length,y,length);
		display(true);
	}
};
void effects(Matrix m)
{
	m.makeSquare(10,10,5);
	m.makeSquare(10,10,4);
	m.makeSquare(15,15,3);
}
int main()
{
	Matrix m1(30, 30);
	effects(m1);	
	return 0;	
}
		

