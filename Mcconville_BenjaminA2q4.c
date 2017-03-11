#include<stdio.h>

int main(void){
	/*The variables are all set to zero initally to get rid of garbage values.*/
  int a[1000], b[1000], n=20,i,j, check, max=200;
  int list[20]={34,50,41,90,99,16,32,57,36,94,18,32,85,49,88,44,68,61,21,34};

  
  printf("Enter an 1 to use the defualt list, press anyother number to use your own:\n");
        scanf("%d",&check);
    if(check!=1){
      do{
          printf("Enter an even number for the size of the array n: ");
          scanf("%d",&n);
      }while(n%2!=0);
      
      printf("Enter %d elements in to the array: ", n);
      for(i=0; i<n; i++)
          scanf("%d", &list[i]);
    }
   
 printf("The Orignal List: ");
  for(i=0; i<n-1; i++){
      printf("%d, ",list[i]);
      if(list[i]>max)
          max=list[i];
  }
  printf("%d\n",list[i]);
  if(list[i]>max)
    max=list[i];
  
  for(i=0;i<max;i++)
    a[i] = 0;
  for(i=0;i<n;i++)
    a[list[i]] = a[list[i]]+1;
  for(j=0;j<=max;j++)
    a[j]=a[j]+a[j-1];
  for(j=n-1;j>=0;j--){
      b[a[list[j]-1]] = list[j];
      a[list[j]-1]=a[list[j]-1]-1;
  }
  for(i=0;i<(n/2);i++){
      a[i]=b[i+(n/2)];
  }
  printf("The smallest List: ");
  for(i=0; i<(n/2)-1; i++){
      printf("%d, ",b[i]);
  }
  printf("%d\n",b[i]);
  
    printf("The biggest List: ");
  for(i=0; i<(n/2)-1; i++){
      printf("%d, ",a[i]);
  }
  printf("%d\n",a[i]);
    
  return 0;
}
