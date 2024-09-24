#include <bits/stdc++.h>

using namespace std;

int main(){
    string cadena;
    int tc, i, j, k, suma, maximo, tamaño;
    cin >> tc;
    while(tc--){
        cin >> cadena;
        tamaño = cadena.length();
        maximo = -1;
        for(i = 1; i < tamaño; ++i){
            //Suma para guardar el num de caracteres consecutivos iguales
            suma = 0;
            k = i;
            for(j = 0; suma + tamaño - (std::max(j, k)) > maximo; ++j, ++k){
                //Si son iguales incremento
                if(cadena[j] == cadena[k]){
                    suma++;
                }else{
                    //Si es diferente actualizo el maximo
                    if(maximo < suma){
                        maximo = suma;
                    }
                    suma = 0;
                }
            }
            //Actualizo al mayor
            if(maximo < suma){
                maximo = suma;
            }
        }
        cout << maximo << endl;
    }
    return 0;
}