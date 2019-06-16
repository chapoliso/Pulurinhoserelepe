#include <stdio.h>
#include <stdlib.h>

int exibeTabuleiro (char m[9][9]){
	system("color f0");
	system("CLS");
  int i, j;
  for(i=0; i<9; i++){

    for(j=0; j<9; j++){
      printf("%c\t", m[i][j]);
    }
    printf("\n\n");
  }
  return 0;
}

 int validaMovimento(){
  
  
  
 
 	int x, l, c;
 	char matriz[9][9];
    switch(x){
        case 1: 
        if(matriz[l-1][c-1]==' '||matriz[l-2][c-2]==' '){
            return 0;
        }
        else
            printf("Comando inválido, digite o comando novamente");
            return 0;
        break;
        
        case 2:
        if(matriz[l-1][c]==' '||matriz[l-2][c]==' '){
            return 0;
        }
        else
            printf("Comando inválido, digite o comando novamente");
            return 0;
        break;
        case 3:
        if(matriz[l-1][c+1]==' '||matriz[l-2][c+2]==' '&&matriz[l-1][c+1]!= matriz[8][8]&&matriz[l-2][c+2]!= matriz[8][8]){
            return 0;
        }
        else
            printf("Comando inválido, digite o comando novamente");
            return 0;
        break;
        case 4:
        if(matriz[l][c-1]==' '||matriz[l][c-2]==' '){
            return 0;
        }
        else
            printf("Comando inválido, digite o comando novamente");
            return 0;
        break;
        case 5:
        if(1==1){
        	//if função mover pulo encerra movimento, se não return 0
            return 0;
		}
        else
            printf("Comando inválido, digite o comando novamente");
            return 0;
        break;
        case 6:
        if(matriz[l][c+1]==' '||matriz[l][c+2]==' '){
            return 0;
        }
        else
            printf("Comando inválido, digite o comando novamente");
            return 0;
        break;
        case 7:
        if(matriz[l+1][c-1]==' '||matriz[l+2][c-2]==' '){
            return 0;
        }
        else
            printf("Comando inválido, digite o comando novamente");
            return 0;
        break;
        case 8:
        if(matriz[l+1][c]==' '||matriz[l+2][c]==' '){
            return 0;
        }
        else
            printf("Comando inválido, digite o comando novamente");
            return 0;
        break;
        case 9:
        if(matriz[l+1][c+1]==' '||matriz[l+2][c+2]==' '){
            return 0;
        }
        else
            printf("Comando inválido, digite o comando novamente");
            return 0;
        break;
        default:
        printf("Comando inválido, digite o comando novamente");

    }

    return 1;
    
 
}


int main(){
  
  char matriz[9][9] = {{'X','X','X','X',' ',' ',' ',' ','A'},
                      {'X','X','X',' ',' ',' ',' ',' ','B'},
                      {'X','X',' ',' ',' ',' ',' ',' ','C'},
                      {'X',' ',' ',' ',' ',' ',' ',' ','D'},
                      {' ',' ',' ',' ',' ',' ',' ','O','E'},
                      {' ',' ',' ',' ',' ',' ','O','O','F'},
                      {' ',' ',' ',' ',' ','O','O','O','G'},
                      {' ',' ',' ',' ','O','O','O','O','H'},
                      {'1','2','3','4','5','6','7','8',' '}};

exibeTabuleiro(matriz);                      	


validaMovimento( );
 
  return 0;
}






