#include<iostream>

using namespace std;

int main()
{
    char contour, fill;
    int width, height;
    cout << "Введите символ для контура:\n";
    cin >> contour;
    cout << "Введите символ для заливки:\n";
    cin >> fill;
    cout << "Введите ширину:\n";
    cin >> width;
    cout << "Введите высоту:\n";
    cin >> height;
    if (height && width <= 0) {
        cout << "Пожалуйста, введите положительные числа\n";
        return 1;
    }
    for (int i = 0; i < width; i++) {
        cout << contour; 
    }
      cout << endl;
    for (int i = 1; i < height - 1; i++) {
        cout << contour;
        for (int j = 1; j < width - 1; j++) {
        cout << fill;
        }
        cout << contour;
        cout << endl;
    }
    if (height > 1){
        for (int i = 0; i < width; i++){
            cout << contour;
        }
        cout << endl;
    }
    return 0;
}
