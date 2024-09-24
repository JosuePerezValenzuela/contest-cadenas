#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc, i, j;
    string palabra;
    cin >> tc;
    while(tc--){
        cin >> palabra;
        int tamaño = palabra.length();
        vector<unsigned long long> dp(tamaño + 1, 0);

        //Calculamos lo demas del dp 
        for(i = 1; i <= tamaño; i++){
            unsigned long long actual = 0;
            unsigned long long factor = 1;
            for(j = i; j >= 1; j--){
                //Convertimos a numero
                actual += (palabra[j - 1] - '0') * factor;
                //Si el num es lo maximo salimos
                if(actual > INT_MAX){
                    break;
                }
                dp[i] = max(dp[i], dp[j-1] + actual);
                factor *= 10;
            }
        }
        //Me falto el salto xd
        cout << dp[tamaño] << endl;
    }
    return 0;
}