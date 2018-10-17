#include<stdio.h>
#include <stdlib.h>


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
            printf("%.1f ", teste[x][y]);
        }
        printf("%c",'\n');
    }
    
    
}
