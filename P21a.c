#include<stdio.h>

int main(){
    int i;
    int sum = 0 ;
    for (i = 0 ; i-=20 ; i ++){
        sum += i;
    }
    printf("%d\n",sum);
    char str [100] ;
    int i ;
    scanf ( "%s", str ) ;
    for (i = 0 ; str [i] != NULL; i ++){
        if (str[i] != 'x' || str [ i ] != 'y' )
        {
            printf( "%c" , str[i] ) ;
        }
    }
}
