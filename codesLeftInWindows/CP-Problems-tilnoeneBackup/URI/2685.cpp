#include <iostream>

using namespace std;

int main() {
    int m;
    while(cin >> m){
        if(m>=90 && m<180) cout << "Boa Tarde!!" << endl;
        else if(m>=180 && m<270) cout << "Boa Noite!!" << endl;
        else if(m>=270 && m<360) cout << "De Madrugada!!" << endl;
        else cout << "Bom Dia!!" << endl;
    }
    
    return 0;
}