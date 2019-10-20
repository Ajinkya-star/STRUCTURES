#include <stdio.h>


struct sit{
	char name[25];
	char div;
	char prn[13];
};

		

struct sit getdata();
void display(struct sit);

int main(){
	int j;
	struct sit b[3];
	for(j=0;j<3;j++){
		b[j]=getdata();
	}
	printf("your details are:\n");
	for(j=0;j<3;j++){
		display(b[j]);
	}
	

}

struct sit getdata(){
	
		struct sit a;
		printf("enter name:\n");
		scanf("%s",&a.name);
		printf("enter div:\n");
		scanf(" %c",&a.div);
		printf("enter prn:\n");
		scanf("%s",&a.prn);
		return a;
}

void display(struct sit c){
	
		printf("%s\n",c.name);
		printf("%c\n",c.div);
		printf("%s\n",c.prn);
	}
	

