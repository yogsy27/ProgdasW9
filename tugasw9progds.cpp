#include <bits/stdc++.h>
using namespace std;

const double pi = 3.1416;



double distance (double xp, double yp, double xq, double yq){
    return sqrt(pow((xp-xq),2)+pow((yp-yq),2));
}  
double radius (double xp, double yp, double xq, double yq){
    return distance(xp,yp,xq,yq);
}
double circumference(double r){
    return 2*pi*r;
}
double area (double r){
    return pi*pow(r,2);
}


int main(){
    double x1, y1, x2, y2, x1l, y1l, x2l, y2l, jarak, jarijari, keliling, luas;
    cout << "Masukkan titik pertama(x y) cm: ";
    cin >> x1 >> y1;
    cout << "Masukkan titik kedua(x y) cm: ";
    cin >> x2 >> y2;
    cout << "Masukkan titik pusat lingkaran (x y) cm: ";
    cin >> x1l >> y1l;
    cout << "Masukkan titik ujung lingkaran (X y) cm: ";
    cin >> x2l >> y2l;

    
    jarak = distance(x1,y1,x2,y2);
    jarijari = radius(x1l,y1l,x2l,y2l);
    keliling = circumference(jarijari);
    luas = area(jarijari);
    

    cout << "\nHASIL" << endl;
    cout << "Jarak dari titik (" << x1 << ", " << y1 <<") ke titik (" << x2 << ", " << y2 <<") adalah " << jarak << " cm" << endl; 
    cout << "Jari jari lingkaran dari titik pusat (" << x1l << ", " << y1l <<") ke titik (" << x2l << ", " << y2l <<") adalah " << jarijari << " cm" << endl;
    cout << "Keliling lingkaran adalah " << keliling << " cm" << endl;
    cout << "Luas lingkaran adalah " << luas << " cm^2" << endl;

    
    return 0;
}

