#include <iostream>

using namespace std;

void task1() {
    double A, B, C, D;
    cin >> A >> B >> C >> D;
    D = C;
    C = B;
    B = A;
    cout << A << B << C << D<<endl;
}

void task2() {
    int X;
    cin >> X;
    if ((X + 24) > 40) {
        cout << X + 24<<endl;
    }
}

void task3() {
    double S;
    cin >> S;
    double S1 = 0, N = 1;
    for (S1; S1 < S; S1 = S1 + 1 / N) {
        N++;
    }
    cout << N<<endl;
}

void task4() {
    double X;
    cin >> X;
    double z = 1, i = 0;
    for (i; i < 4; i++) {
        z = (z + X / 2) / 2;
    }
    cout << z;
}

void task5() {
    double vilage, P;
    cout << "Enter count vilage - ";
    cin >> vilage;
    cout << "Enter P gosudarstva - ";
    cin >> P;
    cout << P / vilage << endl;
}

int main(){

    while(true){
        int choice;
        cout << "enter task - ";
        cin >> choice;
        if (choice == 1) {
            task1();
        }
        if (choice == 2) {
            task2();
        }
        if (choice == 3) {
            task3();
        }
        if (choice == 4) {
            task4();
        }
        if (choice == 5) {
            task5();
        }
    }

    return 0;
}
