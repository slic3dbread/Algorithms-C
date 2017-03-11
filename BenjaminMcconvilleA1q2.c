#include<stdio.h>
int main(void){
	/*The variables are all set to zero initally to get rid of garbage values.*/
  int a[50], size=0, i=0, j1=0, j2 = 0, big=0, secondbig=0;

  printf("Enter the size of the array: ");
  scanf("%d",&size);
  printf("Enter %d elements in to the array: ", size);
  for(i=0; i<size; i++)
      scanf("%d", &a[i]);
 
  /* The for loop compares the the number in the array at i with the biggest number and the second biggest number
     previously stored. 
	 If the number is greater or equal the the j variable will be replaced for both the biggest and the second biggest number. As well the biggest and the second biggest number will be replaced. 
	 If only the second number is greater or equal to the number in the array it's j value will be replaced as well as the second biggest number.*/
  for(i=0; i<size; i++){
	if(a[i]>=big){
		j2=j1;
		secondbig=big;
		big=a[i];
		j1=i;
	}
	else if(a[i]>=secondbig){
		secondbig=a[i];
		j2=i;
	}
  }
 
  printf("Second biggest: %d \n And it is found at position %d \n", secondbig, j2);
  return 0;
}
