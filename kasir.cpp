#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>
line()
{
	cout<<"========================================================\n";
}
bintang()
{
	cout<<"********************************************************\n";
}
header()
{
	cout<<"########################################################\n";
	cout<<"##             Mini Market GG Realita                 ##\n";
	cout<<"##													             ##\n";
	cout<<"###                                                  ###\n";
	cout<<"#####              WELCOME......!!!!!              #####\n";
	cout<<"########################################################\n";
}
main()
{
	int i,j;
   char kode_k,kasir[20],lagi;
   long int total_byr=0,bayar,kembali;
   char kode_brg[30],*barang[30];
   int harga[30];
   int jml_bel[30];
   long int sub_total[30];
   atas:
   clrscr();
   line();
   header();
   line();
   cout<<"KODE KASIR\n";
   cout<<"     1. 16560041 - Gilang Ramadhan\n";
   cout<<"     2. 14560042     - Tony Mauk\n";
   cout<<"Masukkan Kode Kasir[1/2]  : "; cin>>kode_k;
   switch(kode_k)
   {
   	case'1':
      strcpy(kasir,"16560041 - Gilang Ramadhan");
      break;
      case'2':
      strcpy(kasir,"14560042 - Tony Mauk");
      break;
      default:
      strcpy(kasir,"Kode Salah");
      break;
   }
   cout<<"Jumlah item               : ";cin>>j;
   cout<<"Jumlah item               : ";cout<<j;
   clrscr();
   header();
   cout<<"KODE BARANG\n";
   line();
   cout<<"1. Susu Segar     [S]\n";
   cout<<"2. Sikat Gigi     [G]\n";
   cout<<"3. Sabun Mandi    [M]\n";
   cout<<"4. Telur          [T]\n";
   cout<<"5. Pasta Gigi     [P]\n";
   cout<<"6. Shampo         [H]\n";
   cout<<"7. Oreo Cokelat	  [O]\n";
   cout<<"8. Roti           [i]\n";
   line();
   cout<<endl;
   for(i=1;i<=j;i++)
   {
   	cout<<"Data Ke-"<<i<<endl;
   	cout<<"Kode Barang          : ";cin>>kode_brg[i];
      cout<<"Jumlah Beli          : ";cin>>jml_bel[i];
      line();
   }
   for(i=1;i<=j;i++)
   {
   	if(kode_brg[i]=='S'||kode_brg[i]=='s')
      {
      	barang[i]="Susu Segar";
         harga[i]=45000;
      }
   	else if(kode_brg[i]=='G'||kode_brg[i]=='g')
   	{
      	barang[i]="Sikat Gigi";
         harga[i]=75000;
      }
    else if(kode_brg[i]=='M'||kode_brg[i]=='m')
      {
			barang[i]="Sabun Mandi";
         harga[i]=15000;
      }
    else if(kode_brg[i]=='T'||kode_brg[i]=='t')
      {
			barang[i]="Telur";
         harga[i]=2000;
      }
    else if(kode_brg[i]=='P'||kode_brg[i]=='p')
      {
			barang[i]="Pasta Gigi";
         harga[i]=10000;
      }
	  else if(kode_brg[i]=='H'||kode_brg[i]=='h')
      {
		barang[i]="Shampo";
         harga[i]=13000;
      }
     else if(kode_brg[i]=='O'||kode_brg[i]=='o')
      {
      barang[i]="Oreo Cokelat";
         harga[i]=6500;
      }
      else if(kode_brg[i]=='I'||kode_brg[i]=='i')
      {
      barang[i]="Roti";
         harga[i]=3500;
      }
      else
      {
      	barang[i]="Kode Salah";
			harga[i]=0;
      }
   }
   clrscr();
   line();
   header();
   line();
   cout<<"Nama Kasir        : "<<kasir<<endl;
   line();
   cout<<"No.| Nama          |  Harga  | Jumlah |    Sub       \n";
   cout<<"   | Barang        |         | Beli   |    Total     \n";
   line();
   for(i=1;i<=j;i++)
   {
      sub_total[i]=jml_bel[i]*harga[i];
      cout<<setiosflags(ios::left)<<setw(5)<<i;
      cout<<setiosflags(ios::left)<<setw(15)<<barang[i];
      cout<<setiosflags(ios::right)<<setw(8)<<harga[i];
      cout<<setiosflags(ios::right)<<setw(6)<<jml_bel[i];
      cout<<setiosflags(ios::right)<<setw(15)<<sub_total[i]<<endl;
		total_byr=total_byr+sub_total[i];
   }
   line();
   cout<<"                        Total Bayar   :Rp. "<<total_byr<<endl;
   cout<<"                        Uang Bayar    :Rp. "; cin>>bayar;
   kembali=bayar-total_byr;
   cout<<"                        Uang Kembali  :Rp. "<<kembali<<endl;
   cout<<"******************Terima Kasih***********************\n";
   cout<<"Input Lagi [Y/T] : "; cin>>lagi;
   if(lagi=='Y'||lagi=='y')
   	goto atas;
   else
   	goto selesai;
   getch();
   selesai:
}