#include <stdio.h>
/*Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երեք թվեր, եթե երեք թվերից 2-ը հավասար են տպել՝ այդ երեքից ամենամեծ թիվը*/
int main (){




	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
        
	int d=0;
	if(a == b && b!=c){

	d=b-c;
	if(d>0)printf("a=b ev b  mec e c-ic");
	else printf("a=b ev b-n poqr e c-ic");

	}else if(a == c && c!=b){
	
		d=a-b;
		if(d>0 )printf("a=c ev a mec e b -ic ");
		else("a=c ev a poqr e b -ic");
	
	}else if( c == b && a!=b){
	
		d=a-b;
		if(d>0)printf("c =b ev a mec e b-ic");
		else printf(" c=b ev  a poqr e b -ic");
	
	}else printf("lav depq che");


	return 0;

}
