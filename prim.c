#include <stdio.h>
int main (){


	int a;
	int flag=0;
	scanf("%d",&a);
	if(a==0 || a==1){
	printf("not prim ");

	}else if(a== 3|| a==2){
	printf("prime");
	}
	
	else {
              
		
		for(int i=2;i<= a/2;i++)
		{
			if(a%i==0){
		          printf("nor prime");
			  flag=0;
			  break;
			}else{
			  flag=1;
			}
		}
	}



if(flag== 1){

printf("prime");}
else{

return 0;}

}
