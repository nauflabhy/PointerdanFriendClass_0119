#include <iostream>
using namespace std;

class PersegiPanjang
{
    public:
        int panjang, lebar;

    public:
        void input (){
            cout << "Masukan panjang : ";
            cin >> panjang;
            cout << "Masukan lebar : ";
            cin >> lebar;
        }

        int luasPp(int a, int b)
        {
            return a * b;
        }
};

class Lingkaran
{
    public:
        int jarijari;

        void input() {
            cout << "Masukan jari-jari : ";
            cin >> jarijari;
        }

        int luasLingkaran(int r)
        {
            return 3.14 * r * r;
        }
};

int main () {

}