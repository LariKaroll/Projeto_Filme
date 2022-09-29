#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(){
	int n1;
	
	printf("Escolha seu filme: \n");
	printf("1 - DoctorStranger \n");
	printf("2 - SpiderMan \n");
	printf("3 - WandaVision \n");
	printf("4 - ThorLoveThunder \n");
	printf("5 - TheAvengers \n");
	scanf("%d", &n1);
	
	switch(n1){
		case 1 :
		printf("Sala 2 : DoctorStranger");
		break;
		
		case 2 :
		printf("Sala 1 : SpiderMan");
		break;
		
		case 3 :
		printf("Sala 5 : WandaVision");
		break;
		
		case 4 :
		printf("Sala 4 : ThorLoveThunder");
		break;
		
		case 5 :
		printf("Sala 3 : TheAvengers");
		break;
	}
}
