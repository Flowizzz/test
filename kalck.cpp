#include <iostream>
using namespace std;

int main() {
    int spaceCount = 0;
    char findCh = ' ';
    string str;
    
    cout << "Введите строку: ";
    getline(cin,str);
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == findCh) {
            spaceCount++;
        }
    }
    cout << endl;
    cout << "Количество пробелов в строке:" << spaceCount;
    return 0;
}
