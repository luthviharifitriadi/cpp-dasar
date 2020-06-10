#include <stdio.h>
#include <conio.h>
main(){
clrscr();
int celcius;
int reamur ;
int fahrenheit;
int kelvin;
printf("menkonverensikan celcius ke reamur,fahrenheit,dan kelvin:\n");
printf("masukan nilai celcius:");
scanf("%i",&celcius);
reamur=0.8*celcius;
fahrenheit=1.8*celcius+32;
kelvin=celcius+273;
printf("reamur:%d\n",reamur);
printf("fahrenheit:%d\n",fahrenheit);
printf("kelvin:%d\n",kelvin);
getch();
return 0;


}
