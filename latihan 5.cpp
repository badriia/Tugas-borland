#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
float tugas,absen,UTS,UAS,na;
cout <<"MASUKAN NILAI MAHASISWA"<<endl;
cout <<"***********************"<<endl;
cout <<"masukan nilai Tugas :";cin>>tugas;
cout <<"masukan nilai Absen :";cin>>absen;
cout <<"masukan nilai UTS :";cin>>UTS;
cout <<"masukan nilai UAS :";cin>>UAS;

na=(0.1*tugas)+(0.2*absen)+(0.3*UTS)+(0.4*UAS);

cout <<"\n\n=====HASIL AKHIR====="<<endl;

cout << "Nilai akhir anda adalah :"<<na<<endl;

getch();
}
