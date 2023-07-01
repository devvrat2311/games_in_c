#include<iostream>
#include<cstdlib>
#include<chrono>
#include<thread>
#include<vector>

using namespace std;
using namespace chrono;
using namespace this_thread;

class Matrix{
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
	void display(bool reset = false);
	void reset_mat();
	void insert(int y, int x, int value);
};

void Matrix::display(bool reset)
{
	for(int i=0; i<height; i++)
	{
		for(int j=0; j<width; j++)
		{
			if(mat[i][j]==0)
				cout<<" ";
			else if(mat[i][j]==1)
				cout<<"o";
		}
		cout<<endl;
	}
	//sleep_for(milliseconds(250));
	//system("clear");
	if(reset)
		reset_mat();
}

void Matrix::reset_mat()
{
	for(int i=0;i<Matrix::height; i++)
	{
		for(int j=0; j<Matrix::width; j++)
		{
			Matrix::mat[i][j]=0;
		}
	}
}

void Matrix::insert(int y, int x, int value)
{
	mat[y][x]=value;
}

