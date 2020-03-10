/* Nama     : Shania Salsabila
   Kelas    : B
   NPM      : 140810180014
   Deskripsi: Insertion Search
*/


#include <iostream>

using namespace std;

#define N 5

void InsertionSort(int *x){
    int insert,j;
    for(int i = 1; i < N; i++){
        insert = x[i];
        j = i-1;
        while(j >= 0 && x[j] > insert){
            x[j+1] = x[j];
            j--;
        }
        x[j+1] = insert;
    }
}

void printArray(int *x){
    for(int i = 0; i < N; i++)
    {
        cout << " " << x[i];
    }
    cout << endl;
}

int main(){
    int x[N] = {1,99,9,60,1000};
    cout << "Sebelum sort : "; printArray(x);
    InsertionSort(x);
    cout << "Setelah sort : "; printArray(x);
}

