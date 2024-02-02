# include<stdio.h>

int main (){
    int a;
    printf("Enter an a integer a: ");
    scanf("%d", &a);

    switch( a%2 ) {
        case 0 :
            printf("a is even \n", &a);
            break;
        case 1 :
            printf("a is odd \n", &a);
            break;
        case -1 :
            printf("a is odd \n", &a);
            break;
    }

    return 0;
}