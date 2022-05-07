#include<stdio.h>
int main(){
    double P_A = 0.5;               // probability for getting 1 heads
    double P_B = 0.5;               // probability for  getting 1 tail
    double P_X = 0.5;               // P_X is probability OF A union B
    double P_Y = 0.5;               // P_X is probability OF B union A
    if( (P_X)/P_A == (P_Y)/P_B )
    printf(" P(A) = P(B)\n hence proved ");
}
