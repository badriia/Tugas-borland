#include <conio.h>
#include <iostream.h>

main()
{
	int bill,a,b;
   cout<<"\t\t Latihan Perulangan C++ dengan for "<<endl;
   cout<<"\t\t=============================="<<endl;
   cout<<"\t\t\n 1. Menampilkan deret Angka 1 sampai 10 : ";
   for(bill=0;bill<=10;bill++)
   {
   cout<<bill;
   }
   cout<<"\t\t\n 2. Menampilkan deret bilangan genap dari angka 1 sampai 10 : ";
   for(a=0;a<=10;a=a+2)
   {
   cout<<a;
   }
   cout<<"\t\t\n 3. Menampilkan bilangan ganjil dari angka 1 sampai 10 : ";
   for(b=1;b<=10;b=b+2)
   {
   cout<<b;
   }

getch();
}
