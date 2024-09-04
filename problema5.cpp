#include <iostream>
#include <string>
using namespace std;

int main()
{
    string texto;
    getline(cin, texto);
    char texto_invertido[10000];
    
    int size_texto = 0;
    while(texto[size_texto] != '\0'){
        size_texto++;
    }
    
    for(int i = 0; i <= size_texto; i++){
        texto_invertido[i] = texto[size_texto - i - 1];
    }
    texto_invertido[size_texto] = '\0';
    cout << texto_invertido;
    return 0;
}
