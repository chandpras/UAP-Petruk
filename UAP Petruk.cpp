#include <iostream>
#include <queue>
#include <conio.h>
#define max 5
using namespace std;

queue<int> cart;
string item_list[] = {"Curcuma Plus Sirup","Curfos Sirup","Vitacur Sirup","Kitavit Sirup","Hufagrip Sirup",
		      "Imboost Force Tablet","Combantrin Sirup","Vitacimin tablet","Promag Tablet"};
int item_price[] = {25000,162000,45500,17500,19000,50000,28000,20000,10000};

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
