#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>

main()
{
char huruf[20];
char pindah[20];
clrscr();
cout<<"Masukkan Sembarang Kata=";
gets(huruf);
cout<<"Panjang Kata Yang Diinputkan=";
cout<<strlen(huruf);
getch();
}