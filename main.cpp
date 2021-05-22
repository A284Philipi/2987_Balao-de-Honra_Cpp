#include <iostream>
#include <string>

using namespace std;

int main()
{
    int posicao;
    string letra;
    cin >> letra;
    posicao = letra[0] - 64;
    cout << posicao <<endl;
    return 0;
}
