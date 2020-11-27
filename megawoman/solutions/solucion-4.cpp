#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    long N, P_w, v_w, R;
    cin >> N >> P_w >> v_w >> R;

    // Iteramos por cada robot
    for(int i=0; i < R; i++) {
        long P_r, v_r;
        cin >> P_r >> v_r;

        /* Casos Especiales */
        // Robot inicia en misma posición que MegaWoman
        if(P_w == P_r) {
            cout << "NO" << endl;
            return 0;
        }
        // Robot empieza más a la izquierda y velocidad negativa
        if(P_r < P_w && v_r < 0) {
            // Nos saltamos este robot
            continue; 
        }
        // Robot empieza más a la derecha y velocidad positiva
        if(P_w < P_r && v_r > 0) {
            // Nos saltamos este robot
            continue; 
        }

        /* Caso general */
        // Calculamos t y dist
        long t = (P_w - P_r)/(v_r - v_w);
        long dist = P_w + v_w*t;

        // Revisamos si cumple las condiciones
        if( 0 <= t && dist < N && (P_w - P_r)%(v_r - v_w) == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    // Terminamos de revisar y no hay ataques. Devolvemos SI
    cout << "SI" << endl;
    return 0;
}
