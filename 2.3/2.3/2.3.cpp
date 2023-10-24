#include <iostream>
using namespace std;

int main() {

    setlocale(0, "");
    char station;

    cout << "Введите букву станции: ";
    cin >> station;

    station = tolower(station);

    switch (station) {
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e': {
        cout << "Время в пути до станции " << station << " составляет 10 минут." << endl;
        break;
    }
    default: {
        cout << "Неизвестная станция." << endl;
        break;
    }
    }

    return 0;
}