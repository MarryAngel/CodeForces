//============================================================================
// Name        : 598A-TrickySum.cpp
// Author      : Maria Angelica
// Link        : https://codeforces.com/contest/598/problem/A
// Copyright   : Codeforces - 598A - Trick Sum
// Description : Math
//============================================================================
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int qtdTeste, expoente;
    long double resultado, numero;
    cin >> qtdTeste;
    while(qtdTeste--){
        cin >> numero;
        expoente=log(numero)/log(2);
        resultado=(numero+1)*numero/2-2*(pow(2,expoente+1)-1);
        cout << fixed << setprecision(0) << resultado << endl;
    }
    return 0;
}
