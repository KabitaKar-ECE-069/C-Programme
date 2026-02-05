#include <stdio.h>
int findgcd(int a,int b)
{
    if(b == 0){
    return a;
    }
    else{
    return findgcd(b,a%b);
    }
}
void main()
{
    int a,b;
    printf("Enter two numbers;");
    scanf("%d %d",&a,&b);
    int value= findgcd(a,b);
    printf("GCD = %d",findgcd(a,b));

}
