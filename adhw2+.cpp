#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int l;//�r������ܼ� 
	int x;//loop
	char input[]="I $am 5a$ go68od#@$ st-ude[nt].";
	char *check;
	
	l=strlen(input);
	check=input;
	//�ˬd�r�� 
	for(x=0;x<l;x++){
		if(*(check+x)<122&&*(check+x)>=96){
			printf("%c", *(check+x));
		}
		else if(*(check+x)<91&&*(check+x)>64){
			printf("%c", *(check+x));
		}
		else if(*(check+x)==32){
			printf("%c", *(check+x));
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
} 
