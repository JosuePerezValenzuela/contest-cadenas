#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    string cadena;
    cin >> tc;
    while(tc--){
        cin >> cadena;
        int tamaño = cadena.length();
        int periodico = tamaño;
        for(int i = 1; i <= tamaño; ++i){
            //Solo debemos probar periodos que dividen exactamente
            if(tamaño % i == 0){
                bool esPeriodico = true;
                //Para verificar si la cadena es periodica con periodo i
                for(int j = 1; j < tamaño; ++j){
                    if(cadena[j] != cadena[j % i]){
                        esPeriodico = false;
                        break;
                    }
                }

                if(esPeriodico == true){
                    periodico = i;
                    break;
                }
            }
        }
        cout << periodico << endl;
        if(tc > 0){
            cout << endl;
        }
    }
    return 0;
}