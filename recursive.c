#include <stdio.h>

int f(n){
    if (n==0){
        return 1;
    }
    return n* f(n-1);
}
int comb(int n,int r){
    int c= f(n)/(f(r)* f(n-r));
    return c;
}

int main(){
    printf("factorial:%d", f(f(3)));
    printf("\ncombination:%d", comb(6,2) );
    return 0;
}