/* C PROGRAM TO DISPLAY THE FOLLOWING SERIES-
1 + X +( X2 / !2 )+ ( X3 / !3 ) + ( X4 / !4 ) +…… n terms.*/
#include<stdio.h>
main(){
	printf("THIS PROGRAM IS USED TO DISPLAY THE FOLLOWING SERIES- 1 + X +( X2 / !2 )+ ( X3 / !3 ) + ( X4 / !4 ) +…… n terms.\n ");
 double sum=1, value,term,i;
printf("Enter the number upto which the series must be added: \n also enter the value of X ");
scanf("%lf%lf",&term,&value);//take term and value according to printf 
for(i=1;i<=term;i++){
	value=value/i;
	printf(" when the value of the term is %lf\t",value);
	sum=sum+value; printf(" sum is %lf\n",sum);
	}
	printf("Total sum of the series is %lf",sum);
}
