//============================================================================
// Nome        : 600A-ExtractNumbers.cpp
// Autor       : Maria Angelica
// Origem      : Codeforces - 600A - Extract Numbers (https://codeforces.com/contest/600/problem/A)
// Descricao   : String
//============================================================================
#include<bits/stdc++.h>

using namespace std;

bool verificarInteiro(const string &str){
    if( (str.length()>1 && str[0]=='0') )
        return false;
    return str.find_first_not_of("0123456789") == string::npos;
}

int main(){
    string entrada, a="", b="", aux="";
    int tamanho, primeiro=0;
    cin >> entrada;
    for(int i=0; i<=entrada.length(); i++){
        if(entrada[i]==',' || entrada[i]==';' || entrada[i]=='\0'){
            if ( (verificarInteiro(aux) == true) && aux!="" ){
                if(a!="")
                    a=a+','+aux;
                else
                    a=aux;
            }else{
                if(primeiro!=0)
                    b=b+','+aux;
                else
                    b=aux;
                primeiro=1;
            }
            aux="";
        }else
            aux+=entrada[i];
    }

    //Saida do resultado
    if(a=="")
        cout<<"-"<<endl;
    else
        cout<< "\"" << a << "\"" <<endl;
    if(b=="" && primeiro==0)
        cout<<"-"<<endl;
    else
         cout<< "\"" << b << "\"" <<endl;

    return 0;
}
