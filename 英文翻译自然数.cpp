#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n<0||n>=1000){
		printf("ERR");
		return 0;
	}
	if(n<20){
		switch(n){
			case 0:{
				printf("zero");
				break;
			}
			case 1:{
				printf("one");
				break;
			}
			case 2:{
				printf("two");
				break;
			}
			case 3:{
				printf("three");
				break;
			}
			case 4:{
				printf("four");
				break;
			}
			case 5:{
				printf("five");
				break;
			}
			case 6:{
				printf("six");
				break;
			}
			case 7:{
				printf("seven");
				break;
			}
			case 8:{
				printf("eight");
				break;
			}
			case 9:{
				printf("nine");
				break;
			}
			case 10:{
				printf("ten");
				break;
			}
			case 11:{
				printf("eleven");
				break;
			}
			case 12:{
				printf("twelve");
				break;
			}
			case 13:{
				printf("thirteen");
				break;
			}
			case 14:{
				printf("fourteen");
				break;
			}
			case 15:{
				printf("fifteen");
				break;
			}
			case 16:{
				printf("sixteen");
				break;
			}
			case 17:{
				printf("seventeen");
				break;
			}
			case 18:{
				printf("eighteen");
				break;
			}
			case 19:{
				printf("nineteen");
				break;
			}
		}
		return 0;
	}
	if(n>=20&&n<100){
		switch(n/10){
			case 2:{
				printf("twenty");
				break;
			}
			case 3:{
				printf("thirty");
				break;
			}
			case 4:{
				printf("forty");
				break;
			}
			case 5:{
				printf("fifty");
				break;
			}
			case 6:{
				printf("sixty");
				break;
			}
			case 7:{
				printf("seventy");
				break;
			}
			case 8:{
				printf("eighty");
				break;
			}
			case 9:{
				printf("ninety");
				break;
			}
		}
		if(n/10%10!=0){
			if(n%10!=0) printf("-");
				else return 0;
		}
		switch(n%10){
			case 1:{
				printf("one");
				break;
			}
			case 2:{
				printf("two");
				break;
			}
			case 3:{
				printf("three");
				break;
			}
			case 4:{
				printf("four");
				break;
			}
			case 5:{
				printf("five");
				break;
			}
			case 6:{
				printf("six");
				break;
			}
			case 7:{
				printf("seven");
				break;
			}
			case 8:{
				printf("eight");
				break;
			}
			case 9:{
				printf("nine");
				break;
			}
		}
		return 0;
	}
	if(n>=100&&n<1000){
		switch(n/100){
			case 1:{
				printf("one hundred");
				break;
			}
			case 2:{
				printf("two hundred");
				break;
			}
			case 3:{
				printf("three hundred");
				break;
			}
			case 4:{
				printf("four hundred");
				break;
			}
			case 5:{
				printf("five hundred");
				break;
			}
			case 6:{
				printf("six hundred");
				break;
			}
			case 7:{
				printf("seven hundred");
				break;
			}
			case 8:{
				printf("eight hundred");
				break;
			}
			case 9:{
				printf("nine hundred");
				break;
			}
		}
		if(n%100!=0){
			printf(" and ");
		}else return 0;
		switch(n/10%10){
			case 1:{
				switch(n%10){
					case 0:{
						printf("ten");
						break;
					}
					case 1:{
						printf("eleven");
						break;
					}
					case 2:{
						printf("twelve");
						break;
					}
					case 3:{
						printf("thirteen");
						break;
					}
					case 4:{
						printf("fourteen");
						break;
					}
					case 5:{
						printf("fifteen");
						break;
					}
					case 6:{
						printf("sixteen");
						break;
					}
					case 7:{
						printf("seventeen");
						break;
					}
					case 8:{
						printf("eighteen");
						break;
					}
					case 9:{
						printf("nineteen");
						break;
					}
				}
				return 0;
			}
			case 2:{
				printf("twenty");
				break;
			}
			case 3:{
				printf("thirty");
				break;
			}
			case 4:{
				printf("forty");
				break;
			}
			case 5:{
				printf("fifty");
				break;
			}
			case 6:{
				printf("sixty");
				break;
			}
			case 7:{
				printf("seventy");
				break;
			}
			case 8:{
				printf("eighty");
				break;
			}
			case 9:{
				printf("ninety");
				break;
			}
		}
		if(n/10%10!=0){
			if(n%10!=0) printf("-");
				else return 0;
		}
		switch(n%10){
			case 1:{
				printf("one");
				break;
			}
			case 2:{
				printf("two");
				break;
			}
			case 3:{
				printf("three");
				break;
			}
			case 4:{
				printf("four");
				break;
			}
			case 5:{
				printf("five");
				break;
			}
			case 6:{
				printf("six");
				break;
			}
			case 7:{
				printf("seven");
				break;
			}
			case 8:{
				printf("eight");
				break;
			}
			case 9:{
				printf("nine");
				break;
			}
		}
	}
	return 0;
}
