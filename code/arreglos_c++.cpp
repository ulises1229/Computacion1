// Author: Ulises Olivares
// uolivares@unam.mx
// 09 Sept, 2022

#include <iostream>
using namespace std;

#define N 10

int main() {

    //Definición de un arreglo
    int arr[N]{0};

    // Iterar el arreglo
    for(int i=0; i < N; i++){
        arr[i] = i + i;
        cout << arr[i] << "\t";
    }



    return 0;
}
