#include <stdio.h>
int main(){
    int v, h, m;
    printf("Enter total minutes : ");
    scanf("%d",&v);
    h = v/60;
    m = v % 60;
    printf("%d minutes is %d hour(s) and %d miutes(s)\n",v,h,m);
    return 0;
}