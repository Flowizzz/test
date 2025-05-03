<<<<<<< HEAD
int main()
{
    char contour, filling;
    int width, height;
    
    cout << "Введите символ для контура:\n";
    cin >> contour;
    cout << "Введите символ для заливки:\n";
    cin >> filling;
    cout << "Введите ширину:\n";
    cin >> width;
    cout << "Введите высоту:\n";
    cin >> height;
    if (height && width <= 0) {
        cout << "Высота или ширина не могут быть отрицательными\n";
        return 1;
    }
    for (int i = 0; i < width; i++) {
        cout << contour; 
    }
      cout << endl;
    for (int m = 1; m < height - 1; m++) {
        cout << contour;
        for (int j = 1; j < width - 1; j++) {
        cout << filling;
        }
        cout << contour;
        cout << endl;
    }
    if (height > 1){
        for (int k = 0; k < width; k++){
            cout << contour;
        }
        cout << endl;
    }
=======
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
>>>>>>> 366039d51922bf012a0afd5169b01aaa780b6168
    return 0;
}
