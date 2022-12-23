#include <stdio.h>
#include <stdlib.h>

int main()
{
  
  /* Find LCM of two numbers. */
  
  int a, b, i, j;
  
  printf("Please enter two positive numbers\n");
  
  scanf("%d%d", &a, &b);
  
  if(a==0 || b==0)
  {
                  printf("LCM of these numbers is : 0\n");
       
                  getch();
  } 
  
  else if(a>b)
  {
         for(i=1 ; i<=b ; i++)
         {
                 if((a*i)%b==0)
                 {
                               printf("LCM of these numbers is : %d\n", a*i);
                               break;
                 }              
         }
          
  }      
  else if(b>a)
  {
         for(j=1 ; j<=a ; j++)
         {
                 if((b*j)%a==0)
                 {
                             printf("LCM of these numbers is : %d", b*j);
                             
                             break; 
                 }  
         }      
  } 
  
  else
       printf("LCM of these numbers is : %d\n", a);                              
  
  system("PAUSE");
  	
  return 0;
  
}
