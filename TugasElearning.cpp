#include<iostream.h>
#include<conio.h>
#define PHI 3.14

int main()
{
float luas, kel, jari_jari;

cout<<"--------- * MENGHITUNG LUAS DAN KELILING LINGKARAN * ---------"<<endl<<endl<<endl;
cout<<"\t\tMasukkan jari jari lingkaran : ";cin>>jari_jari;
cout<<endl<<endl;

luas = PHI * jari_jari * jari_jari;
kel = 2 * PHI * jari_jari;

cout<<"------------------------- * JAWABAN * ------------------------"<<endl<<endl;
cout<<"\tJadi Luas Lingkaran\t\t: "<<luas<<endl;
cout<<"\tJadi Keliling lingkaran\t\t: "<<kel<<endl<<endl;
cout<<"------------------------- * SELESAI * ------------------------"<<endl;

getch();
}
