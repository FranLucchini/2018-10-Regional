#include <bits/stdc++.h>
using namespace std;

int main() {
    // Leer valores de M y N
    int N, M;
    cin >> M >> N;

    // Leer arreglo
    vector<int>metros(N, 0);
    for (int i = 0; i < N; i++){
        cin >> metros[i];
    }

    // Crear variable de distancia mínima hasta el momento.
    // Inicia con un valor igual al máximo valor de un entero
    int best=INT_MAX;

    // Recorremos el arreglo
    for (int i = 0; i < N; i++){
        
        // Damos valor a la suma la posición actual
        int suma = metros[i];

        // Definimos j como el siguiente intervalo a la derecha de i
        int j = i+1;

        cout << suma << ", i: " << i << ", j: " << j << endl;

        // Avanzamos j hasta que la suma supere M o j sea mayor a N
        for (; j < N and suma < M; j++){
            suma += metros[j];
        }
        cout << suma << ", i: " << i << ", j: " <<j << endl;
        
        // Si la suma actual es mayor a M y es menor que el mejoir valor que
        // tenemos hasta el momento, actualizamos la variable best
        if (suma >= M){
            best = min(best, j-i);
        }

        cout << "Best: " << best << endl;
    }
    cout << best << "\n";
    return 0;
}
