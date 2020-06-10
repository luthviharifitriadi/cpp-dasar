#include<stdio.h>
#include<conio.h>
main(){
clrscr();
int jarijari;
int volume;
int luas;
printf("masukan nilai jari-jari lingkaran:");
scanf("%i",&jarijari);
printf("nilai jari-jari:%i\n",jarijari);
printf("nilai jari-jari:%i\n",jarijari);
printf("mencari colume bola\n");
volume=1.3*3.14*jarijari*jarijari*jarijari;
printf("jadi volume bola:%d cm3\n",volume);
printf("mencari luas permukaan bola\n");
luas=4*3.14*jarijari*jarijari;
printf("jadi luas permukaan bola:%d cm2\n",luas);
getch();
return 0;
}