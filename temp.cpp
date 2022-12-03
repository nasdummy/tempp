#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;


struct Node{
    int data;
    Node *next;
};

Node *n=NULL, *head=NULL, *tail=NULL, *x=NULL;


void buatNodeAwal(int i){
	n = new Node;
	n->data = i;
	tail = n;
	head = n;
	tail->next = NULL;
	}

void tambahDiBelakang (int i){
	n = new Node;
	n->data = i;
	tail->next = n;
	tail = n;
	tail->next = NULL;
	}

void tambahDiDepan (int i){
	n = new Node;
	n->data = i;
	n->next = head;
	head = n; 
	}
      
void tambahDiTengah (int i, int j){
	x = head;
	while(x->data != j) x = x->next;
	n = new Node;
	n->data = i;
	n->next = x->next ;
	x->next = n;
	}

void hapusDiDepan (){
	x = head;
	head = head->next ;
	delete(x);
	}
	
void hapusDiBelakang(){
	x = head;
	while (x->next != tail) x = x->next;
	tail = x;
	delete(x->next);
	tail->next = NULL;
	}

void hapusDiTengah(int i){
	Node *temp=NULL;
	x = head;
	while(x->data != i){
		temp = x;
		x = x->next;
	}
	temp->next = x->next;
	delete(x);
	}

void tampilData(){
	x = head;
	while(x!=NULL){
		cout << x->data<< " ";
		x=x->next; 
	}
}	
 	
int main (){
    system("cls");
    int pilih, pilih2, input, data;
    do{
        cout << "Menu :" << endl;
		cout<<"1. Buat Node Awal"<<endl;
        cout<<"2. Tambah Node"<<endl;
        cout<<"3. Hapus Node "<<endl;
        cout<<"4. Tampil Data"<<endl;
        cout<<"5. Keluar"<<endl;
        cout<<endl;
        cout<<"Masukkan Pilihan [1..5] : ";cin>>pilih;
        switch(pilih)
        {
            case 1:
            	cout<<"Masukkan Nilai : "; cin >> input;
                buatNodeAwal(input);
                cout<<"Nilai "<<input<< " berhasil dimasukkan di node awal..."<<endl;
                cout<<endl;
                getch();
                break;
            case 2:
            	cout<<" Menu Tambah Node :"<<endl;
            	cout<<"1. Tambah Node Di Depan"<<endl;
        		cout<<"2. Tambah Node Di Tengah"<<endl;
        		cout<<"3. Tambah Node DI Belakang"<<endl;
        		cout<<endl;
        		cout<<"Masukkan Pilihan [1..3] : ";cin>>pilih2;
        		switch(pilih2){
        			case 1 :
        				cout<<"Masukkan Nilai : "; cin >> input;
                		tambahDiDepan(input);
                		cout<<"Nilai "<<input<< " berhasil ditambahkan di depan..."<<endl;
                		cout<<endl;
                		getch();
                		break;
                	case 2 :
                		cout<<"Masukkan Nilai : "; cin >> input;
                        cout << "Dimasukkan setelah angka : "; cin >> data;
                		tambahDiTengah(input, data);
                		cout<<"Nilai "<<input<< " berhasil ditambahkan di tengah..."<<endl;
                		cout<<endl;
                		getch();
                		break;
                	case 3 :
                		cout<<"Masukkan Nilai : "; cin >> input;
                		tambahDiBelakang(input);
                		cout<<"Nilai "<<input<< " berhasil ditambahkan di belakang..."<<endl;
                		cout<<endl;
                		getch();
                		break;
                	default:{
                		cout<<"Tidak ada dalam pilihan"<<endl;
            		}
				}
                break;
            case 3:
            	hapusDiDepan();
                cout<<endl;
                getch();
                break;
            case 4:
            	cout<<"Isi Linked List"<<endl;
            	cout<<"================="<<endl;
            	cout<<endl;
            	tampilData();
                cout<<endl;
                getch();
                break;
            case 5:
            	getch();
			    return 0;
            default:
            {
                cout<<"Tidak ada dalam pilihan"<<endl;
            }
        }
    } while (pilih>=1 && pilih <=4);
    getch();
}
