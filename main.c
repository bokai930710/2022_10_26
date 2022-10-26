#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i,j,x,y=5;
    for(i=0;i<6;i++){
        x=1;
        for(j=0;j<6;j++){
            if(j<y){
                printf("*");
            }
            else{
                printf("%d",x);
                x=x+1;
            }
            
        }
        y=y-1;
        printf("\n");
    }
    return 0;
}
