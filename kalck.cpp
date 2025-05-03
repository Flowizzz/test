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
    return 0;
}
