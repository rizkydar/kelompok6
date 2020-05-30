#include <iostream>
#include <conio.h>
using namespace std;

main(){
int An[4];
int menu;
char kbl;
int sts=0;
int i;
do{"clrscr";

cout<<"\t\t\nPROGRAM Antrian PEMBELIAN TOKO X DENGAN FIFO\n\n";
cout<<"    1.memasukkan data (push)\n    2.mengambil data (pop)\n    3.tampil\n\n    pilih menu yang anda inginkan [1-3]=  ";
cin>>menu;
    if(menu==1){
       cout<<"push data pada queue\n";
       cout<<"masukkan data ";
      cin>>An[sts];
       sts++;}
   else if(menu==2){
       cout<<"pop data "<<An[0]<<" telah di hapus\n";
      An[0]=NULL;
          for(int i=0;i<sts;i++){
         An[i]=An[i+1];
         }
         sts--;
         }
   else if(menu==3){
   cout<<"isi dari queue\n\n";
       for(i=0;i<sts;i++){
      cout<<An[i]<<"    ";
      }
      }
      cout<<"\n\nkembali ke menu awal [y/t]= ";
      cin>>kbl;
      }
      while(kbl=='y' || kbl=='Y');

getch();
}
