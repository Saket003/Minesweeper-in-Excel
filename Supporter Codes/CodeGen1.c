#include <stdio.h>

int main(){
    for(int i=2; i<15;i++){
        for(int j=2; j<15;j++){
        printf("Sub %c%dA()\n",(char)64+i,j);
        printf("\tCall CheckSurr(%d,%d)\n",j,i);
        printf("End Sub\n");
        }
    }
}

//gcc Code
//a.exe > Output.txt