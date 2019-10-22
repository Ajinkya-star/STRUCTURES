#include <stdio.h>
#include <stdlib.h>

struct sit{
	char name[25];

	char prn[13];
};

int main(){
	int n;
	printf("Enter details of required number of students\n");
	scanf("%d",&n);
	int i;
	struct sit a[n];
	for(i=0;i<n;i++){
		printf("enter name:\n");
		scanf("%s",&a[i].name);
			printf("enter prn:\n");
		scanf("%s",&a[i].prn);
	}

	printf("yor details are\n");
	
	for(i=0;i<n;i++){
		printf("%s\n",a[i].name);
	
		printf("%s\n",a[i].prn);
	}

	
	
}

