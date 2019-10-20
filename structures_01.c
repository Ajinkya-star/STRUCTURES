#include <stdio.h>
#include <stdlib.h>

struct sit{
	char name[25];
	char div;
	char prn[13];
};

int main(){
	int i;
	struct sit a[5];
	for(i=0;i<5;i++){
		printf("enter name:\n");
		scanf("%s",&a[i].name);
		printf("enter div:\n");
		scanf("%c",&a[i].div);
		printf("enter prn:");
		scanf("%s",&a[i].prn);
	}
	printf("yor details are\n");
	
	for(i=0;i<5;i++){
		printf("%s\n",a[i].name);
		printf("%c\n",a[i].div);
		printf("%s",a[i].prn);
	}

	
	
}

