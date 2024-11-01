#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

string sifre_yaratma(int uzunluk){

    const string harf_rakam = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string sifre = "";

    srand(time(0));

    for(int i = 0;i<uzunluk; i++){
        sifre += harf_rakam[rand()% harf_rakam.length()];
    }
    return sifre;
}

int main()
{
    int uzunluk;

    cout<<"Sifre uzunlugunu giriniz : ";
    cin>>uzunluk;

    string sifre = sifre_yaratma(uzunluk);

    cout<<"Olusan sifre: "<<sifre;
    return 0;
}
