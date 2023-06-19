#include <stdio.h>

int pow(int base, int power){
    int ans = 1;
    for(int i=0; i<power; i++){
        ans *= base;
    }

    return ans;
}

int main(){
    int inp, inp2;
    scanf("%d", &inp);
    scanf("%d", &inp2);
    printf("%d", pow(inp, inp2));
    
    return 0;
}