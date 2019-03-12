/**
 * Nama     :
 * NPM      :
 * Kelas    :
 * Tanggal  :
 **/

#include <iostream>
using namespace std;

struct r_mhs{
    char npm[14];
    char nama[40];
    float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int& n){
    cout<<"Masukan Banyak Data: ";cin>>n;
}
void inputMhs(larikMhs& mhs,int n){
    for (int i=0;i<n;i++){
        cout<<"Data ke-"<<i+1<<endl;
        cout<<"NPM      : ";cin>>mhs[i].npm;
        cout<<"Nama     : ";cin>>mhs[i].nama;
        cout<<"IPK      : ";cin>>mhs[i].ipk;
        cout<<endl;
    }
}
void cetakMhs(larikMhs mhs,int n){
    cout<<"Data Mahasiswa\n";
    for (int i=0;i<n;i++){
        cout<<i+1<<" "<<mhs[i].npm<<" "<<mhs[i].nama<<" "<<mhs[i].ipk<<endl;
    }
}
void sortNPM(larikMhs& mhs,int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (mhs[j].npm>mhs[j+1].npm)
            swap(mhs[j],mhs[j+1]);
        }
    }
}

int main(){
    int n;
    larikMhs mhs;
    banyakData(n);
    inputMhs(mhs,n);
    sortNPM(mhs,n);
    cetakMhs(mhs,n);
}
