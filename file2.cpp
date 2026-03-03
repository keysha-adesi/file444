#include <iostream>
using namespace std;

//int main ()

   // int phi ,R ,LUAS;
   // cout << "masukin phi =";
   // cin >> phi;

    //luas =phi*r*r;

  //  cout << "hasilnya =" << luas << endl;


//deklarasi variable
float jarijari;
float phi = 3.14159;
//bagian fungsi
void awal(){
 cout << "masukin jari-jari lingkaran =";
 cin >> jarijari;
}
float luas (float jarijari,float phi){
    return phi*jarijari*jarijari;
}
void akhir(){
    cout << "hasil luas untuk lingkaran dengan jari-jari" <<jarijari<<"adalah =" << luas(jarijari,phi);
}
int main(){
    awal();
    akhir();
}


































 


