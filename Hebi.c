#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int i,j, height=30,width=60;
int x=10,y=10;

int circle(int x, int y,int i, int j)
{
    if(i==x&&j==y) return 1;
    else return 0;
}

void drawboard()
{
    for(i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            if(i==0||i==height-1||j==0||j==width-1) printf("#");
            else if(circle(x,y,i,j)) printf("O");
            else printf(" ");
        }
        printf("\n");
    }
}

//now i just need to update x and y values and call the drawboard func


int main()
{
    //moving right

    
    for(int i=0;i<30;i++){
        drawboard();
        x++;
        sleep(1);
        system("clear");
    }
    return 0;
}