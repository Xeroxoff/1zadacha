#include <iostream>
#include <bitset>  // для работы с двоичной системой счисления

using namespace std;

int main() {
 
    int A = 0b101101;  
    int B = 0b110011;  
    int and_result = A & B;
    int sum_result = A + B;
    cout << "Результат побитовой операции AND: " << bitset<6>(and_result) << endl;
    cout << "Результат суммы чисел: " << bitset<7>(sum_result) << endl;

    return 0;
}
