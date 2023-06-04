#include<stdio.h>
#include<stdlib.h>

int i,j, height=30,width=60;
int x,y;

void circle(int x, int y,int i, int j)
{
    if(i==x&&j==y) printf("o");
    else printf(" ");
}

void drawboard()
{
    for(i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            if(i==0||i==height-1||j==0||j==width-1) printf("#");
            else{
                circle(4,10,i,j);
            }
        }
        printf("\n");
    }
}



int main()
{
    drawboard();
    
    return 0;
}