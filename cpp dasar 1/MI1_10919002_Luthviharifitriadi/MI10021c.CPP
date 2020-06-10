#include<stdio.h>
#include<conio.h>
main(){
clrscr();
int diameter;
int jarijari;
int hasil;
int keliling;
printf("menghitung luas dan luas jika diameter yang diketahui:\n");
printf("masukan nilai jari-jari:");
scanf("%i", &jarijari);
printf("masukan diameter tadi yang sudah diubah ke jari-jari:\n");
hasil=3.14*jarijari*jarijari;
printf("jadi luas lingkaran:%d cm2\n",hasil);
printf("cara menghitung keliling:\n");
printf("jari-jari:%i cm\n",jarijari);
keliling=2*3.14*jarijari;
printf("jadi keliling lingkaran:%d cm\n", keliling);


getch();
return 0;
}