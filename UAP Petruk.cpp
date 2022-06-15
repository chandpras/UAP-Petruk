#include <iostream>
#include <queue>
#include <conio.h>
#define max 5
using namespace std;

queue<int> cart;
string item_list[] = {"Curcuma Plus Sirup","Curfos Sirup","Vitacur Sirup","Kitavit Sirup","Hufagrip Sirup",
		      "Imboost Force Tablet","Combantrin Sirup","Vitacimin tablet","Promag Tablet","Diapet Kapsul"};
int item_price[] = {25000,162000,45500,17500,19000,50000,28000,20000,10000,5000};

void push()
{
	int push;
	if(cart.size() == max)
	{
		system("cls");
		cout << "* Keranjang Penuh ! *" << endl;
	}else
	{
		cout << ">> Masukkan barang : ";
		cin >> push;
		cart.push(push);
		if(push >= 1 && push <= 10)
		{
			cout << "* Barang baru telah ditambahkan ke keranjang *" << endl;	
		}else
		{
			cart.pop();
			cout << "Pilihan barang tidak tersedia !" << endl;
		}
	}
}

void pop()
{
	if(cart.empty())
	{
		system("cls");
		cout << "* Keranjang Kosong !*" << endl;
	}else
	{
		cout << "* " << item_list[cart.front()-1] << " telah dihapus dari keranjang *" << endl;
		cart.pop();
	}
}

void clear()
{
	while(!cart.empty())
	{
		cart.pop();
	}
	cout << "* Keranjang Dikosongkan *";
}

void show (queue <int> cart)
{
	if (cart.empty())
	{
    		return;
	}else
	{
		int x = cart.front();
		cart.pop();
		cout << "- " << item_list [x-1] << endl;
		show (cart);
		cart.push(x);
	}
}

void checkout()
{
	int pay;
	if(cart.empty())
	{
		cout << "keranjang masih kosong";
	}else
	{
		cout  << "=== " << item_list[cart.front()-1] << "\t[Rp. " << item_price[cart.front()-1] << "] ===" << endl;
		cout << "Masukkan uang anda : ";
		cin >> pay;
		if(pay < item_price[cart.front()-1])
		{
			cout << "Uang tidak mencukupi";
		}else if(pay >= item_price[cart.front()-1])
		{
			cout << "kembalian : Rp. " << pay - item_price[cart.front()-1];
			cart.pop();
		}
	}
}

int main()
{
	
	cout << "============================================\n";
    	cout << "\t\tAPOTEK ANTI WARAS" << endl;
    	cout << "============================================\n";
    	cout << endl;
    	cout << "List Barang : " << endl;
    	for(int i = 0; i < 9; i++)
    	{
    		cout << i+1 << ". " << item_list[i] << "\t[Rp. " << item_price[i] << "]" << endl;
		}
		cout << "============================================\n";
		cout << "\n1). Tambah Barang Ke Keranjang";
		cout << "\n2). Hapus Barang Dari Keranjang";
		cout << "\n3). Kosongkan Keranjang";
		cout << "\n4). Cek Keranjang";
		cout << "\n5). Keluar Program";
		cout << "\n>> Masukkan Pilihan : ";
		cin >> choose;
}
