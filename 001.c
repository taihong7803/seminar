/**
* 10回足し算するプログラム
*/

#include <stdio.h>

void main()
{
    int sum = 0;
    //10回足し算します
    for(int i =0; i <= 10 ; i++ ) {
        sum = sum + i;
    }
    
    printf("%u",sum);

}