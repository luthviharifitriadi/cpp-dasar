#include <stdio.h>
#include <conio.h>
main(){
clrscr();
long int jam,upah,hasil,kesehatan,beras,pph,bersih;
printf("menghitung gajih:\n");
printf("perjam:");
scanf("%li",&jam);
printf("upah:");
scanf("%li",&upah);
hasil=jam*upah;
kesehatan=0.1*hasil;
beras=0.1*kesehatan;
pph=0.1*hasil;

bersih=hasil+kesehatan+beras+pph;
printf("upah perjam:%li\n",hasil);
printf("tunjangan kesehatan:%li\n",kesehatan);
printf("tunjangan beras:%li\n",beras);
printf("pph:%d\n",pph);
printf("gajih bersih:%li\n",bersih);


getch();
return 0;
}