#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define PI 3.14
int main(){
	int secim;
	int islem,i,j;
	int sifir=0;
	int bir=1;
	int deger1,deger2,devam;
	float float1,float2,cevre,alan;
	double db1,db2;
	
tekrar0:
	system("cls");
	printf("HESAP MAKINESINE HOS GELDINIZ\nLUTFEN BASLAMAK ICIN BIR TUSA BASINIZ\n");
	getch();
	printf("1-BASIT HESAP MAKINESI\n2-ONDALIKLI ISLEMLER\n3-BILIMSEL HESAP MAKINESI\n4-PARA BIRIMI DEGISTIRME\n5-CIKIS\n");
	scanf("%d",&secim);
	
	if(secim==5){
		system("cls");
		printf("cikis yapiliyor...\n");
		exit (0);
	}
	

	if(secim==1){
tekrar1:
		system("cls");
		printf("BASIT HESAP MAKINESI\n\n\n");
		printf("lutfen yapilacak islemi seciniz\n1:toplama\n2:cikarma\n3:carpma\n4:bolme\n5:ana menuye don\n");
		scanf("%d",&islem);
		switch(islem){
			case 1:
				system("cls");
				printf("TOPLAMA ISLEMI\n\n\n");
				printf("toplanacak ilk degeri giriniz\n");
				scanf("%d",&deger1);
				printf("ikinci degeri giriniz\n");
				scanf("%d",&deger2);
				printf("%d + %d = %d\n",deger1,deger2,deger1+deger2);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar1;
				}
				break;
			case 2:
				system("cls");
				printf("CIKARMA ISLEMI\n\n\n");
				printf("toplam degeri giriniz\n");
				scanf("%d",&deger1);
				printf("cikarilan degeri giriniz\n");
				scanf("%d",&deger2);
				printf("%d - %d = %d\n",deger1,deger2,deger1-deger2);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar1;
				}
				break;
			case 3:
				system("cls");
				printf("CARPMA ISLEMI\n\n\n");
				printf("carpilacak ilk degeri giriniz\n");
				scanf("%d",&deger1);
				printf("carpilacak ikinci degeri giriniz\n");
				scanf("%d",&deger2);
				printf("%d * %d = %d\n",deger1,deger2,deger1*deger2);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar1;
				}
				break;
			case 4:
				system("cls");
				printf("BOLME ISLEMI\n\n\n");
				printf("bolunecek degeri giriniz\n");
				scanf("%f",&float1);
				printf("boleni giriniz\n");
				scanf("%f",&float2);
				printf("%.2f / %.2f = %.2f",float1,float2,float1/float2);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar1;
				}
				break;
			case 5:
				goto tekrar0;
			default:
				system("cls");
				printf("hatali bir secim yaptiniz lutfen bir tusa dokununu ve acilan menuden seciminizi degistiriniz\n");
				getch();
				goto tekrar1;
				break;
		}
	}
	
	
	if(secim==2){
tekrar2:
		system("cls");
		printf("ONDALIKLI ISLEMLER\n\n\n");
		printf("lutfen yapilacak islemi seciniz\n1:toplama\n2:cikarma\n3:carpma\n4:bolme\n5:ana menuye don\n");
		scanf("%d",&islem);
		switch(islem){
			case 1:
				system("cls");
				printf("TOPLAMA ISLEMI\n\n\n");
				printf("toplanacak birinci degeri giriniz\n");
				scanf("%lf",&db1);
				printf("ikinci degeri giriniz\n");
				scanf("%lf",&db2);
				printf("%lf + %lf = %lf\n",db1,db2,db1+db2);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar2;
				}
				break;
			case 2:
				system("cls");
				printf("CIKARMA ISLEMI\n\n\n");
				printf("toplam degeri giriniz\n");
				scanf("%lf",&db1);
				printf("cikarilacak degeri giriniz\n");
				scanf("%lf",&db2);
				printf("%lf - %lf = %lf\n",db1,db2,db1-db2);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar2;
				}
				break;
			case 3:
				system("cls");
				printf("CARPMA ISLEMI\n\n\n");
				printf("carpilacak birinci degeri giriniz\n");
				scanf("%lf",&db1);
				printf("ikinci degeri giriniz\n");
				scanf("%lf",&db2);
				printf("%lf * %lf = %lf\n",db1,db2,db1*db2);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar2;
				}
				break;
			case 4:
				system("cls");
				printf("BOLME ISLEMI\n\n\n");
				printf("bolunecek degeri giriniz\n");
				scanf("%lf",&db1);
				printf("bolen degeri giriniz\n");
				scanf("%lf",&db2);
				printf("%lf / %lf = %lf\n",db1,db2,db1/db2);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar2;
				}
				break;
			case 5:
				goto tekrar0;
			default:
				system("cls");
				printf("hatali bir secim yaptiniz lutfen bir tusa dokununu ve acilan menuden seciminizi degistiriniz\n");
				getch();
				goto tekrar2;
				break;
		}
	}
	if(secim==3){
tekrar3:
		system("cls");
		printf("BILIMSEL HESAP MAKINESI\n\n\n");
		printf("lutfen yapilacak islemi seciniz\n");
		printf("1:us alma\n");
		printf("2:karekok alma\n");
		printf("3:kalan bulma\n");
		printf("4:faktoriyel hesaplama\n");
		printf("5:carpim tablosu goruntule\n");
		printf("6:daire alani-cevresi hesapla\n");
		printf("7:kare alani-cevresi hesapla\n");
		printf("8:dikdortgen alani-cevresi hesapla\n");
		printf("9:trigonometri hesapla\n");
		printf("10:ana menuye don\n");
		scanf("%d",&islem);
		switch(islem){
			case 1:
				system("cls");
				printf("US ALMA\n\n\n");
				printf("ussu alinacak sayiyi giriniz\n");
				scanf("%d",&deger1);
				printf("us degerini giriniz\n");
				scanf("%d",&deger2);
				sifir=pow(deger1,deger2);
				printf("%d ^ %d = %d\n",deger1,deger2,sifir);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar3;
				}
			case 2:
				system("cls");
				printf("KAREKOK ALMA\n\n\n");
				printf("karekokunu almak istediginiz sayiyi giriniz\n");
				scanf("%d",&deger1);
				sifir=sqrt(deger1);
				printf("%d\n",sifir);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar3;
				}
			case 3:
				system("cls");
				printf("KALAN BULMA\n\n\n");
				printf("bolunen degeri giriniz\n");
				scanf("%d",&deger1);
				printf("bolen degeri giriniz\n");
				scanf("%d",&deger2);
				sifir=deger1%deger2;
				printf("%d sayisinin %d bolumunden kalan: %d\n",deger1,deger2,sifir);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar3;
				}
			case 4:
				system("cls");
				printf("FAKTORIYEL HESAPLAMA\n\n\n");
				printf("faktoriyelini hesaplamak istediginiz degeri giriniz\n");
				scanf("%d",&deger1);
				for(i=1;i<=deger1;i++){
					bir*=i;
				}
				printf("%d faktoriyeli: %d\n",deger1,bir);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar3;
				}
			case 5:
				system("cls");
				printf("CARPIM TABLOSU GORUNTULEME\n\n\n");
				for(i=1;i<=10;i++){
					for(j=1;j<=10;j++){
						printf("%d * %d = %d\n",i,j,i*j);
					}
					printf("\n******************\n");
				}
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar3;
				}
			case 6:
				system("cls");
				printf("DAIRE ALANI-CEVRESI HESAPLAMA\n\n\n");
				printf("dairenin yaricapini giriniz\n");
				scanf("%d",&deger1);
				cevre=2*PI*deger1;
				alan=PI*pow(deger1,2);
				printf("dairenin alani: %f\ndairenin cevresi: %f\n",alan,cevre);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar3;
				}
			case 7:
				system("cls");
				printf("KARE ALANI-CEVRESI HESAPLAMA\n\n\n");
				printf("karenin bir kenar uzunlugunu giriniz\n");
				scanf("%d",&deger1);
				printf("karenin alani: %d\nkarenin cevresi: %d\n",deger1*deger1,deger1*4);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar3;
				}
			case 8:
				system("cls");
				printf("DIKDORTGEN ALANI-CEVRESI HESAPLAMA\n\n\n");
				printf("dikdortgenin uzun kenarini giriniz\n");
				scanf("%d",&deger1);
				printf("dikdortgenin kisa kenarini giriniz\n");
				scanf("%d",&deger2);
				printf("dikdortgenin alani: %d\ndikdortgenin cevresi: %d\n",deger1*deger2,2*(deger1+deger2));
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar3;
				}
			case 9:
				system("cls");
				db1*=PI/180.0;
				printf("TRIGONOMETRÝ HESAPLAMA\n\n\n");
				printf("trigonometrik degerleri hesaplanacak aciyi giriniz\n");
				scanf("%lf",&db1);
				printf("sinusu : %lf\n",sin(db1));
				printf("cosinusu : %lf\n",cos(db1));
				printf("tanjanti : %lf\n",tan(db1));
				printf("cotanjanti : %lf\n",1.0/tan(db1));
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar3;
				}
			case 10:
				goto tekrar0;
			default:
				system("cls");
				printf("hatali bir secim yaptiniz lutfen bir tusa dokununu ve acilan menuden seciminizi degistiriniz\n");
				getch();
				goto tekrar3;
				break;
		}
	}
	if(secim==4){
tekrar4:
		system("cls");
		printf("PARA BIRIMI DEGISTIRME\n\n\n");
		printf("hangi islemi yapacaksiniz\n");
		printf("1:TL'den Dolar'a\n");
		printf("2:TL'den Euro'ya\n");
		printf("3:Dolar'dan TL'ye\n");
		printf("4:Dolar'dan Euro'ya\n");
		printf("5:Euro'dan TL'ye\n");
		printf("6:Euro'dan Dolar'a\n");
		printf("7:ana menuye don\n");
		scanf("%d",&islem);
		switch(islem){
			case 1:
				printf("kac tl ceviriyorsunuz\n");
				scanf("%lf",&db1);
				printf("guncel kuru giriniz\n");
				scanf("%lf",&db2);
				printf("tutar %lf dolar\n",db1/db2);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar4;
				}
			case 2:
				printf("kac tl ceviriyorsunuz\n");
				scanf("%lf",&db1);
				printf("guncel kuru giriniz\n");
				scanf("%lf",&db2);
				printf("tutar %lf euro\n",db1/db2);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar4;
				}
			case 3:
				printf("kac dolar ceviriyorsunuz\n");
				scanf("%lf",&db1);
				printf("guncel kuru giriniz\n");
				scanf("%lf",&db2);
				printf("tutar %lf tl\n",db1/db2);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar4;
				}
			case 4:
				printf("kac dolar ceviriyorsunuz\n");
				scanf("%lf",&db1);
				printf("guncel kuru giriniz\n");
				scanf("%lf",&db2);
				printf("tutar %lf euro\n",db1/db2);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar4;
				}
			case 5:
				printf("kac euro ceviriyorsunuz\n");
				scanf("%lf",&db1);
				printf("guncel kuru giriniz\n");
				scanf("%lf",&db2);
				printf("tutar %lf tl\n",db1/db2);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar4;
				}
			case 6:
				printf("kac euro ceviriyorsunuz\n");
				scanf("%lf",&db1);
				printf("guncel kuru giriniz\n");
				scanf("%lf",&db2);
				printf("tutar %lf dolar\n",db1/db2);
				printf("baska bir islem yapmak istemiyorsaniz 0, yapmak istiyorsaniz baska herhangi bir tusu seciniz\n");
				scanf("%d",&devam);
				if(devam==0){
					system("cls");
					printf("cikis yapiliyor...\n");
					exit (0);
				}else{
					goto tekrar4;
				}
			case 7:
				goto tekrar0;
			default:
				system("cls");
				printf("hatali bir secim yaptiniz lutfen bir tusa dokununu ve acilan menuden seciminizi degistiriniz\n");
				getch();
				goto tekrar4;
				break;
		}
	}
}
