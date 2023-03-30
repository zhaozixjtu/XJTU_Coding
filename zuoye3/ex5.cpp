#include<stdio.h>
int main(){
    int a = 0;
    for (int i = 1; i <= 101; i += 2) {
        if (i % 4 == 1) {
            a += i;
        }
        else {
            a -= i;
        }
    }
    printf("%d", a);
    return 0;
}