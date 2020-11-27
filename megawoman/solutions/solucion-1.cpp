#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int N, P_w, v_w, R;
    cin >> N >> P_w >> v_w >> R;

    // Iteramos por cada robot
    for(int i=0; i < R; i++) {
        int P_r, v_r;
        cin >> P_r >> v_r;

        /* Casos Especiales */
        // Robot inicia en misma posición que MegaWoman
        if(P_w == P_r) {
            cout << "NO" << endl;
            return 0;
        }
        // Robot empieza más a la derecha
        if(P_w < P_r) {
            // nos saltamos este robot
            continue; 
        }

        /* Caso general */
        // Calculamos t
        int t = P_w - P_r;
        int dist = P_w + t;

        // Revisamos si cumple las condiciones
        if( 0 <= t && dist < N) {
            cout << "NO" << endl;
            return 0;
        }
    }

    // Terminamos de revisar y no hay ataques. Devolvemos SI
    cout << "SI" << endl;
    return 0;
}
