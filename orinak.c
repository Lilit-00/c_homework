#include <stdio.h>
/**/
/*int main() {
    
      int n=0;
      int arr[n];
      printf("Enter number::  ");
      scanf("%d",&n);
      printf("Enter elements:: ");

      for(int i=0;i<n;i++){
          
	      scanf("%d",&arr[i]);
            
      }

       printf("------------");

       for(int i=0;i<n;i++){
        
	       printf("%d \n",arr[i]);
           
       }
	return 0;
}

*/



int main(){
      
	int n;
        printf("Enter n::");
        scanf("%d",&n);
	char arr[5];
	for(int i=0;i<n;i++){
	   scanf("%c",&arr[i]);

	
	};

	for(int i=0;i<n;i++){
	
	 if(arr[i]>30 && arr[i]<40){
	 
		 printf("%c \n",arr[i]);
		 
	 }
	}
// scanf("%s",arr);


return 0;

}
