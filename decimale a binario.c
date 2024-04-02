#include <stdio.h>

void codifica(int bin)
{
    int resto[22];
    int i = 0;
    int num = bin;

    while(bin > 0){
        resto[i] = bin % 2;
        bin /= 2;
        i++;
    }
    for(i = i-1; i >= 0; i--){
        printf("%d", resto[i]);
    }
}

int main(){

    codifica(35);  // HERE YOU HAVE TO PUT A NUMBER, IN EXAMPLE IS 35

    return 0;
}
