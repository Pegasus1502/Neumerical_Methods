#include<stdio.h>
float findValueAt(float x)
{
    return 1/(1+x*x);
}

int main(){
    int n;
    float i,a,b,sum=0,h;

    int position_of_term=1;

    printf("Enter Value of a ,b: \n");
    scanf("%f%f,&a,&b");

    printf("Enter Value of n: \n");
    scanf("%d,&n");

 //calculations

 h=(b-a)/n;
 sum=findValueAt(a)+findValueAt(b);
 for (i=a+h; i < b; i = i+h)
 {
    if (position_of_term %2==0)
    {
        sum=sum+2*findValueAt(i);
    }else{
        sum=sum+4*findValueAt(i);

    }
    position_of_term++;
 }
 sum=(h*sum)/3;
 printf("\n Value of The integral = %f",sum);

 return 0;

}