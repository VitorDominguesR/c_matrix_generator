#include<stdio.h>
#include <stdlib.h>



void check_matrix(float matrix[20][20], int x, int y)
{
    if(matrix[x][y-1] < 20.0)
    {
        printf("valor x: %d valor y:%d valor_matriz: %.1f", x, y, matrix[x][y-1]);
    }
}

int main() {
    
    int x,y,postions = 20;
    
    float teste[20][20];
    
    for( y = 0; y<postions;y++)
    {
        for(x=0;x < postions; x++)
        {
            teste[x][y] = (float)(rand()%30);
        }
    }
    
    for( y = 0; y<postions;y++)
    {
        for(x=0;x < postions; x++)
        {
            if(teste[x][y] < 20.0)
            {
            //printf("%.1f ", teste[x][y]);
                check_matrix(teste, x, y);
                printf("%c",'\n');
            }
        }
        printf("%c",'\n');
    }
    
    
}
