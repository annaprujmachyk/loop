#include <iostream>
#include <locale>

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    wcout <<L"Привiт!"<<endl;
    return 0;
}
