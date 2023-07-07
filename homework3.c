#include <stdio.h>
/*Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել տառ, ստուգել և տպել տառը բաղաձայն է, թե ձայնավոր*/
int main(){

        char sym;
	scanf("%c",&sym);
	if(sym =='a' ||sym =='o' || sym=='u'|| sym=='e'||sym=='y'){
	printf("zaynavor");
	}else printf("baxazayn");
}
