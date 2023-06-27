#include<iostream>
#include<vector>

using namespace std;

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
	}
	void makeLineLeft(int x, int y, int length)
	{
		while(length--)
		{
			mat[x][y--]=1;
		}
	}
	void makeLineUp(int x, int y, int length)
	{
		while(length--)
		{
			mat[x--][y]=1;
		}
	}
	void makeLineDown(int x, int y, int length)
	{
		while(length--)
		{
			mat[x++][y]=1;
		}
	}
	void display()
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
	}
};

int main()
{
	Matrix m1(30, 30);
	m1.makeLineRight(14,14,10);
	m1.makeLineDown(14,24,10);
	m1.makeLineLeft(24,24,10);
	m1.makeLineUp(24,14,10);
	m1.display();
	return 0;	
}
		

