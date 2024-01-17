#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    char c = 3;

    do{
    double num, num2;
    char op;
    cout << "CALCULADORA: " << endl;
    cin  >> num;
    cout << num;
    cin  >> op;
    cout << op;
    cin  >> num2;
    cout << num2;
    system("cls");
        switch(op){
        case '+':
        cout << num + num2;
        break;

        case '-':
        cout << num - num2;
        break;

        case '*':
        cout << num * num2;
        break;

        case '/':
        cout << num / num2;

        break;

        default:
        cout << "FALHA NO SISTEMA!";

        }
        cout << endl;
        system("pause");
        system("cls");
    }while(c = 3);
}