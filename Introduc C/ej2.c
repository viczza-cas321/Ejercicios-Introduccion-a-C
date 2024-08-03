#include <stdio.h>
int main(){
        float gradf, gradc;
        int upper, lower, steps;
        upper=300;
        lower=0;
        steps=1;
        gradf=lower;
        printf("Farhenheit\tCelsius\n");
        while(gradf<=upper){
                gradc= (5/9.0)*(gradf-32);
                printf("%6.0f %16.2f\n", gradf, gradc);
                gradf+=steps;
        }
        return 0;

}


