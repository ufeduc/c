#include<stdio.h>
#include<math.h>
float calc_sin (float value);

int main(){
	printf("smartcalc paramaters below this line\n");
	printf("1.floor 2.round 3.ceil 4.sin 5.cos 6.cosh 7.exp 8.tan\n");
	printf("9.tanh 10.sinh 11.log 12.log10 13.sqrt 14.pow 15.trunc\n");
	int paramater;
	scanf("%d",&paramater);
	
	printf("Value: ");
	float value;
	scanf("%f",&value);

	switch (paramater){
		case 1:
			printf("floor");
			break;
		case 2:
			printf("round");
			break;
		case 3:
			printf("ceil");
			break;
		case 4:
			calc_sin(value);
			break;
		case 5:
			printf("cos");
			break;
		case 6:
			printf("cosh");
			break;
		case 7:
			printf("exp");
			break;
		case 8:
			printf("tan");
			break;
		case 9:
			printf("tanh");
			break;
		case 10:
			printf("sinh");
			break;
		case 11:
			printf("log");
			break;
		case 12:
			printf("log10");
			break;
		case 13:
			printf("sqrt");
			break;
		case 14:
			printf("pow");
			break;
		case 15:
			printf("trunch");
			break;
		default:
			printf("help");
			break;

	}
float calc_sin (float value){
	float x;
	x = sin(value);
	return x;
}	
}
