 	  	 		 	
#define max 10
 
using namespace std;

// struktur tumpukan
struct tumpukan {
	int atas;
	int data[max];
}T;

void awal(){
	T.atas =- 1;
}

int kosong(){
	if(T.atas == -1)
		return 1;
	else
		return 0;
}

int penuh ()
{
	if (T.atas == max-1)
		return 1;
	else
		return 0;	
}

void input (int data)
{
	if (kosong () == 1)
	{
		T.atas++;
		T.data [T.atas] = data;
		cout<<"Data" << T.data[T.atas]<<" masukaan ke stack\n";
	}
	else
	if (penuh () == 0)
	{
		T.atas++;
		T.data [T.atas] = data;
		cout<<"Data" << T.data[T.atas]<<" masukaan ke stack\n";
	}
}


void tampil ()
{
	if (kosong () == 0)
	{
		for(int i = T.atas; i >= 0;)
		{
			cout<<"\nTmpukan ke "<<i + 1 << "=" << T.data[i];
		}
	}
	else 
		cout<<"Tumpuka Kosong\n";
}

main(void)
{
	int pil, data;
	awal();
	do
	{
		cout<<"================"<<endl;
		cout<<"MOVING PROGRAM				"<<endl;
		cout<<"================";
		cout<<"\n1. Masukan Data \n2. Tampilkan Data \n3. Keluar \nPilihan : ";
		
		cin>>pil;
		
		switch(pil)
		{
			case 1 :
				cout<<"Masukan Banyaknya  data  : "; cin>>data;
				input (data);
				break;
			case 2 :
				tampil();
			case 3 :
				cout<<" ";
		}
		getch();
	}
	while (pil !=5);
}
