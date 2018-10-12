#include <iostream>
using namespace std;

struct data{
char judul[20],tahun[20];
};

data batas[100];
int a,b,c,d;

void inputdata()
{    
   cout<<"\nMasukan Banyaknya data : ";cin>>b;
   d=0;
   for(c=0;c<b;c++)
   {
   d=d+1;
   cout<<"\nData ke-"<<d<<endl;
   cout<<"-----------------------"<<endl;
   cout<<"masukan judul\t: ";cin>>batas[a].judul;
   cout<<"masukan tahun\t: ";cin>>batas[a].tahun;
   a++;
   }
}



void lihatdata()
{
	int i,j;
	cout<<"-----------------------"<<endl;
 	j=0;
 	for(i=0;i<a;i++)
 	{
 		j=j+1;
  		cout<<"Data ke-"<<j<<endl;
  		cout<<"title : "<<batas[i]. judul<<endl;
  		cout<<"tahuh : "<<batas[i]. tahun<<endl;
		cout<<endl;
  	}

}



int main()
{     
 int pilih;
 char w;
  awal:
  cout<<"================"<<endl;
  cout<<"MOVING PROGRAM				"<<endl;
  cout<<"================";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Lihat Data";
  cout<<"\n3. Keluar";
  cout<<"\n\nPilihan : ";
  cin>>pilih;
  if(pilih==1)
   {inputdata();goto awal;}
  if(pilih==2)
   {lihatdata();goto awal;}
  if(pilih==3)
    {
    	cout<<" ";
	}
	else
	{
		cout<<" ";
		
	}
}


