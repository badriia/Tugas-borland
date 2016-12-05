#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>

main()
{

char kode[5],nama[10],lagi;
int kelas,harga,jumlah,total;

awal:
clrscr();
//
    cout<<"\t\t\t\t PROGRAM TIKET PESAWAT"<<endl;
cout<<"\t\t\t\t  JAKARTA - MALAYSIA "<<endl;
cout<<"\t\t\t==================================="<<endl;
cout<<endl;
//    printf("\n\);
cout<<"masukan kode pesawat[MPT/GRD/BTV]:",gets(kode);
cout<<"\nkelas pesawat :"<<endl;
cout<<"\t 1. Executive "<<endl;
cout<<"\t 2. Bisnis "<<endl;
cout<<"\t 3. Ekonomi "<<endl;
cout<<"\npilih kelas[1/2/3]:",cin>>kelas;

if(strcmp(kode,"MPT")==0)
{
strcpy(nama,"MERPATI");
if (kelas==1){harga=1500000;}
else if (kelas==2){harga=900000;}
else if (kelas==3){harga=500000;}
}

else if(strcmp(kode,"GRD")==0)
{
strcpy(nama,"GARUDA");
if (kelas==1){harga=1200000;}
else if (kelas==2){harga=800000;}
else if (kelas==3){harga=400000;}
}

else if(strcmp(kode,"BTV")==0)
{
strcpy(nama,"BATAVIA");
if (kelas==1){harga=1000000;}
else if (kelas==2){harga=700000;}
else if (kelas==3){harga=300000;}
}

printf("\n")  ;
printf("\nNama Pesawat     :%s",nama);
printf("\nHarga Tiket      :%d",harga);
printf("\n");
cout<<"Jumlah Tiket        :",cin>>jumlah;
total=harga*jumlah;

printf("Total Bayar        :%d",total);
printf("\n\n");
cout<<"\t\t\tINGIN INPUT LAGI[Y/T]:",cin>>lagi;
if(lagi=='y'||lagi=='Y')
goto awal;

getch();
}