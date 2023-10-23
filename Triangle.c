#include<stdio.h>
#include<stdlib.h>

int i,j,k,l,m, batas;
char pilihan;
int counter=0;

void segitiga1(){
	for(i=0; i<batas; i++){
		for(j=0; j<5; j++){
			for(k=batas; k>i; k--){
				printf(" ");
			}
			for(l=0; l<=i; l++){
				if(i>3-j == 0){
					printf(" ");
				}else{
					printf("*");
				}
			}
		}
		printf("\n");
	}
}

void segitiga2()
{
		for(i=1; i<=batas; i++){
		for(j=1; j<=5; j++){
			for(k=batas+1; k>i; k--){
				printf(" ");
			}
			for(l=1; l<=i; l++){
				if (i>5-j == 0)
				{
				printf(" ");	
				}
				else 
				{
				printf("%i",i);
				}
			}
		}
		for(j=0; j<1; j++){
			printf(" ");
		}
		for(j=1; j<=batas; j++){
			for(l=1; l<=i; l++){
				if (j-1<i == 0)
				{
					printf(" ");
				}
				else 
				{
					printf("%i",i);	
				}
			}
			for(k=batas+1; k>i; k--){
				printf(" ");
			}
		}
		printf("\n");
	}
}

void pilihan_segitiga()
{	
	if (counter<=1){
		scanf("%c");
		printf("Pilihan : ");
		scanf("%c",&pilihan);
	
		switch (pilihan){
			case '1':
				counter++;
				segitiga1();
				printf("\n\n");
				main();
				break;
			case '2':
				counter++;
				segitiga2();
				printf("\n\n");
				main();
				break;
			default : printf ("Inputan yang Anda Masukkan Salah!!");
				printf("\n\n");
				pilihan_segitiga();
		}
	}else{
		exit(0);
	}
} 

void tinggi_max()
{
	printf("Masukkan Tinggi Segitiga (max 5) :");
	scanf("%i",&batas);
	if (batas < 0) batas = 0;
		else if (batas > 5) {
			printf("Inputan Yang Anda Masukkan Terlalu Besar\n\n");
			tinggi_max();
		}
}

void main(){
	if (counter <= 1)
	{
		tinggi_max();
		printf("Pilih Varian Segitiga mu !!!\n");
		printf("1. Biasa\n");
		printf("2. Spesial\n");
		pilihan_segitiga();
	}else{
		exit (0);
	}
}
