
#include <iostream>

using namespace std;

int wybor, cofnij;

void line() {
    cout << "-----------------------------" << endl;
}

void cofnij_do_panelu();

//FUNKCJA PRZECHOWUJE KATEGORIE POSIŁKÓW I WYŚWIETLA JE
void kategorie() {

    int wybor_kategorii;
    static const string kat[] = {
            "Burgery wolowe",
            "Burgery drobiowe",
            "Pizza",
            "Makarony",
            "Salatki",
            "Zimne napoje",
            "Gorace napoje"
    };

    //OBLICZA ILOŚĆ ELEMENTOW W TABLICY "kat[]"
    static const int kat_ilosc = sizeof(kat) / sizeof(kat[0]);

    //WYSWIETLA ELEMENTY TABLICY "kat[]"
    for (int i = 0; i < kat_ilosc; i++) {
        line();
        cout << "[" << i + 1 << "] " << kat[i] << endl;

    }
    line();
    cout << "Wybierz kategorie:";
    cin >> wybor_kategorii;
}

void kreator_zamowien() {
    cofnij = 0;
    while (cofnij = 0) {
        line();
        cout << "cos";
        kategorie();
    }

}

void historia_zamowien() {
    line();
    cout << "Historia zamowien" << endl;
}

void raport_dobowy() {
    line();
    cout << "Raport dobowy" << endl;
}

void zamkniecie_dnia() {
    line();
    cout << "Zamkniecie dnia" << endl;
}

void panel() {
    static const string panel_opcje[] = {

            "Kreator zamowien",
            "Historia zamowien",
            "Raport dobowy",
            "Zamkniecie dnia"


    };
    static const int panel_opcje_ilosc = sizeof(panel_opcje) / sizeof(panel_opcje[0]);


    for (int i = 0; i < panel_opcje_ilosc; i++) {
        line();
        cout << "[" << i + 1 << "] " << panel_opcje[i] << endl;

    }
    line();
    cout << "Wybierz opcje:";

}

void panel_wybor(int wybor_panel) {

    switch (wybor_panel) {

        case 1:
            return kreator_zamowien();
            break;

        case 2:
            return historia_zamowien();
            break;
        case 3:
            return raport_dobowy();
            break;
    }
}

int execute_panel() {

    panel();
    cin >> wybor;
    cofnij = 0;
    panel_wybor(wybor);
    return wybor;

}


int main() {

    while (true) {
        execute_panel(); //WYWOŁANIE FUNKCJI WYSWIETLAJĄCEJ GŁÓWNY PANEL

        //ZAKOŃCZENIE DZIAŁANIA PROGRAMU
        if (wybor = 0) {

            int close;
            cout << "Czy na pewno chcesz zamknac dzien?" << endl
                 << "[0] NIE" << endl << "[1] TAK";
            cin >> close;


            if (close == 1) {

                zamkniecie_dnia();
                return 0;

            } else if (close == 0) {

                execute_panel();

            }
        }
    }

}
