#include<stdio.h>

int test = 10;

int testing[] = {10, 20, 30, 40};

int x = sizeof(testing)/sizeof(testing[0]);
int s;

int main(){

    printf("%d\n", test);
    printf("%d\n", x );
    printf("this is test");
    printf("enter value: ");
    scanf("%d", &s);
    printf("entered value is %d: ", s);
    return 0;
}




