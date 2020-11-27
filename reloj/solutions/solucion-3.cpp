#include <bits/stdc++.h>
using namespace std;

int main() {
    // Leer input
    int N, M;
    cin >> M >> N;
    vector<int>metros(N, 0);

    for (int i = 0; i < N; i++){
        cin >> metros[i];
    }

    // Definimos la posición final (j)
    int j=0;
    // Definimos la suma en 0
    int suma=0;
    int best=INT_MAX;

    // Iteramos el arreglo; i es nuestra posición inicial
    for (int i = 0; i < N; i++){

        // Este bucle no define j, ya está definida arriba
        for (; j < N and suma < M; j++){
            suma += metros[j];
        }

        // Revisamos si la suma es mayor o igual a M para actualizarla si corresponde
        if (suma >= M){
            best = min(best, j-i);
        }

        // Antes de cambiar el valor inicial, restamos su valor a la suma total
        suma -= metros[i];
    }
    cout << best << "\n";
    return 0;
}
