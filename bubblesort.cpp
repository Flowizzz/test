#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {3,45,78,23,41};
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (numbers[j] > numbers[j+1]) {
                int a = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = a;
            }
        }
    }
    
    for (int i = 1; i <= 5; i++) {
        cout << numbers[i] << " ";
    }
    
    return 0;
}
