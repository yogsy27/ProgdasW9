#include <bits/stdc++.h>
using namespace std;
int jumlah_murid = 4;
struct studentType {
    string StudFname;
    string StudLname;
    int testScore;
    char grade;
};

void read_data( studentType List[], int size){
    cout<<"masukkan nama depan, nama belakang, nilai"<<endl;
    for( int i=0; i< size; i++){
        cout<< "murid ke" << i+1 << ": ";
        cin>> List[i].StudFname>> List[i].StudLname>> List[i].testScore;

    }
}

void NILAI(studentType List[], int size){
    int i=0;
    for ( int i=0; i< size; i++)
    if (List[i].testScore >= 90)
        List[i].grade = 'A';
    else if (List[i].testScore >= 80)
        List[i].grade = 'B';
    else if (List[i].testScore >= 70)
        List[i].grade = 'C';
    else if (List[i].testScore >= 60)
        List[i].grade = 'D';
    else
        List[i].grade = 'F';
}

int TERTINGGI(studentType List[], int size){
    int tertinngi= List[0].testScore;
    for ( int i=0; i< size; i++){
        if (List[i].testScore > tertinngi){
            tertinngi = List[i].testScore;
        }

    }
    return tertinngi;
}

void DISP_TERTINGGI(studentType List[], int size, int tertinngi){
    cout<<"Nilai Tertinggi: "<< tertinngi << endl;
    cout<<"Murid dengan nilai tertinggi: "<<endl;
    for ( int i=0; i< size; i++){
        if (List[i].testScore == tertinngi){
            cout<< List[i].StudLname<<"," << " " << List[i].StudFname << endl;
        }
    }
}

void DISPLAY(studentType List[], int size ){
    cout<<"Daftar Nilai Murid: "<<endl;
    for ( int i=0; i< size; i++){
        cout<< List[i].StudLname << ", " << List[i].StudFname << " " << List[i].testScore << " " << List[i].grade << endl<<endl;
    }
}

int main() {
    studentType murid[jumlah_murid];

    murid[jumlah_murid-1]= {"Kylian", "Mbappe", 90, 'A'};
    murid[jumlah_murid-2]= {"Andi", "Wijaya", 84, 'B'};
    read_data(murid, (jumlah_murid-2));
    NILAI(murid, jumlah_murid);
    int tertinggi= TERTINGGI(murid, jumlah_murid);
    DISPLAY(murid, jumlah_murid);
    
    DISP_TERTINGGI(murid, jumlah_murid, tertinggi);
    return 0;
}