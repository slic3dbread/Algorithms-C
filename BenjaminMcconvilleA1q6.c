#include<stdio.h>
#include<math.h>

/*This is the function nlgn that outputs the value as a float*/
float nlg(float n){
	return n*log2(n);
}

int main(void){
  float M=0,n=0,i=0,temp=0, midpoint=0, a=0,b=0;

  printf("Enter a positive value of M: ");
  scanf("%f",&M);
  b=M/2;
  do{
	  /*Bisection*/
	  midpoint=a+b/2;
	  
	  temp=nlg(midpoint);
	  
	  /*If the function is less then the M max the a variable which represents 
	  the min range will become equal to the midpoint and n will be set to a because
	  it will be closer to the M*/
	  if(temp=<M){
		  a=midpoint;
		  n=a;
	  }
	  else /*If the temp is less then M the Max range will be halfed to bisect the range*/
		  b=b/2;
	  
	  i++;
  }while(i!=200);
	
  printf("The largest n that satistfys nlgn<%.0f is %.0f\n",M,n);
  return 0;
}
