#include<stdio.h>
#include <stdlib.h>



void check_matrix(float matrix[20][20], int x, int y)
{//checar o entorno do ponto
    if(matrix[x][y-1] < 20.0 && matrix[x][y+1] < 20 && matrix[x-1][y] < 20 && matrix[x+1][y] < 20.0) // checa os pontos no entorno do ponto detectado na função main      
    {// melhorar essa função pois caso x ou y sejam 0, não há coordenadas negativas
        printf("valor x: %d valor y:%d valor_matriz: %.1f", x, y, matrix[x][y]);
    }
}

int main() {
    
    int x,y,postions = 20;
    
    float teste[20][20];
    
    //gera matriz aleatória
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
            if(teste[x][y] < 20.0) //verifica se o numero é pequeno
            {
            //printf("%.1f ", teste[x][y]);
                check_matrix(teste, x, y); //função para checar o entorno da matriz (essa função que devemos desenvolver)
                printf("%c",'\n');
            }
        }
        printf("%c",'\n');
    }
    
    
}
