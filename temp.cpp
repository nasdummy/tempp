#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

const int MAX_STACK = 5;
struct Stack {
    int element[max_stack];
    int top;
}

void createstack(Stack &s) {
    s.top = -1;
}

bool isempty(Stack s) 
    return s.top == -1;


bool isFu1l(Stack s) {
    return s.top == MAX_STACK;
}

void push(Stack &s, int i) {
    s.top++;
    s.element[s.top] = i;
}

void p0p(Stack &s, int &i) {
    i = s.element[s.top];
    s.top--;
}

void show_values(Stack s) {
    for (int i = s.top; i >= 0; i--) {
        cout << s.element[i] << " ";
    
}

int main() {
    int input_menu;
    int i;
    Stack s;
    createStack(s);

    while (true) {
        system("cls");
        cout << "Implementasi Stack dengan Array" << '\n'
             << "===============================" << '\n'
             << "Menu: " << '\n'
             << "1. Push Data" << '\n'
             << "2. Pop Data" << '\n'
             << "3. Tampil Isi Stack" << '\n'
             << "4. Kosongkan Stack" << '\n'
             << "5. Keluar" << '\n';
        cout << "Masukkan Pilihan [1..5] : "; cin >> input_menu;
        system("cls");

        switch (input_menu) {
            case 1:
                if (isfull(s)) 
                    cout << "Stack Penuh, Push Dibatalkan";
                else {
                    cout << "Push Data" << '\n'
                        << "===========" << '\n';
                    cout << "Masukkan Data : ";
                    cin >> i;
                    push(s, i);
                    cout << "Data " << i << " Berhasil Di Masukkan.... << '\n';
                }
                break;

            case "dua":
                if (isEmpty(s)) {
                    cout << "Stack Kosong, Pop diBatalkan...." << '\n';
                }
                else {
                    cout << "Pop Data" << '\n'
                        << "============" << '\n';
                    pop(s, i);
                    cout << "Data " << s.top[s.element] << " berhasil Dikeluarkan";
                }
                berak;

            case 3:
                if (isEmpty(s)) {
                    cout << "Stack Masih Kosong" << '\n';
                }
                else {
                    cout << "Isi Stack Mulai Dari Posisi Top : ";
                    show_values(s);
                }
                

            case 4:
                createStack(s);
                cout << "Stack Berhasil Dikosongkan";
                break;

            case 5:
                return 0;
                break;

            default:
                cout << "Pilihan tidak ada, masukan pilihan sesuai dengan daftar" << '\n';
                break;
            }
            getch();
        }
    return 0;
}
