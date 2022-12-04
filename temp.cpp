#include <iostream>
#include <conio.h> // klo pake getch()
using namespace std;

struct Node{
int data;
Node *next;
};
Node *n=NULL, *head=NULL, *tail=NULL, *x=NULL;

void buatNodeAwal(int i){ //create new node
n = new Node;
n->data = i;
tail = n;
head = n;
tail->next = NULL;
}

void tambahDiBelakang(int i){ //add on back
n = new Node;
n->data = i;
tail->next = n;
tail = n;
tail->next = NULL;
}

void tambahDiDepan(int i){ //add on front
n = new Node; n->data = i; n->next = head;
head = n;
}

void tambahDiTengah(int i, int j){ //add in the middle
x = head;
while(x
->data != j) x = x
->next;
n = new Node; n->data = i; n->next = x->next; x->next = n;
}

void hapusDiDepan(){ //delete on front
x =head;
head = head
->next;
delete(x);
}

void hapusDiBelakang(){ //delete on back
x =head;
while(x
->next != tail) x=x
->next;
tail = x;
delete(x
->next);
tail
->next = NULL;
}

void hapusDiTengah(int i){ //delete in the middle
Node *temp=NULL;
x = head;
while(x
->data != i){
temp = x;
x = x
->next;
}
temp
->next = x
->next;
delete(x);
}

void tampilData(){ //print data
x=head;
while(x!=NULL){
cout << x
->data << " ";
x= x
->next;
}
}

int main(){
Node i;
int pilihan, pilih, i;

do{
cout<<"Menu:"<< endl;
cout<<"1. Buat Node Awal"<<endl;
cout<<"2. Tambah Node"<<endl;
cout<<"3. Hapus Node"<<endl;
cout<<"4. Tampil Data"<<endl;
cout<<"5. Keluar"<<endl;
cout<<"Masukkan Pilihan [1..5]: "; cin>>pilihan;

switch (pilihan){
	case 1: 
			
			cout<<"Buat Node Baru"endl;
			cout<<"=============="endl;
			cout<<"Masukkan Nilai"; cin>> i;
			cout<<"Nilai" << i << "berhasil dimasukkan di node awal" << endl;
			buatNodeAwal (int i);
		
			getch();
			break;
			
	case 2: cout<<"1. Tambah Node di depan"<<endl;
			cout<<"2. Tambah Node di belakang"<<endl;
			cout<<"3. Tambah Node di tengah"<<endl;
			switch (pilih){
			case 1: cout<<"Tambah node di depan"<<endl;
					cout<<"===================="<<endl;
					cout<<"\n";
					cout<<"Masukkan Nilai: "; cin>> i;
					cout<<"Nilai" << i << "berhasil dimasukkan di node depan" << endl;
					tambahDiDepan (int i);
			case 2: cout<<"Tambah node di belakang"<<endl;
					cout<<"======================="<<endl;
					cout<<"\n";
					cout<<"Masukkan Nilai: "; cin>> i;
					cout<<"Nilai" << i << "berhasil dimasukkan di node belakang"endl;
					tambahDiBelakang (int i);
			case 3: cout<<"Tambah node di tengah"<<endl;
					cout<<"====================="<<endl;
					cout<<"\n";
					cout<<"Masukkan Nilai: "; cin>> i;
					cout<<"Nilai" << i << "berhasil dimasukkan di node tengah"endl;
					tambahDiTengah (int i);
				}
			getch();
			break;
	case 3: cout<<"1. Hapus Node di depan"<<endl;
			cout<<"2. Hapus Node di belakang"<<endl;
			cout<<"3. Hapus Node di tengah"<<endl;
			switch (pilih) {
			case 1:	hapusDiDepan ();
					cout<<"Node berhasil di hapus"
			case 2: hapusDiBelakang ();
					cout<<"Node berhasil di hapus"
			case 3: hapusDiTengah (int i);
					cout<<"Node berhasil di hapus"
				}
			getch();
			break;
	
	case 4: tampilData();
			getch();
			break;
			
	case 5:
	cout<<"sistem keluar"<<endl;

return 0; 
	
	}
}



while (pilih>= 1 && pilih <=5);
getch();

}
