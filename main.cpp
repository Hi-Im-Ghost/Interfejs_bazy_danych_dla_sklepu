#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>
#include <locale.h>

#include<cstdlib>
#include <iostream>
#include <string>
#include <limits>

#include <SQLAPI.h>

using namespace std;

COORD coord = { 0, 0 };

void gotoxy(int x, int y) {
    coord.X = x; coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void wys_klienci(SACommand &wyswietl_klient)
{
                    wyswietl_klient.Execute();
                    gotoxy(46, 5);
                    printf("KLIENT");
                    gotoxy(0, 6);
                    printf("==================================================");

                    gotoxy(0, 7);
                    printf(" ID_KLIENTA\t IMIE\t NAZWISKO\t PESEL\t NR_TELEFONU\t MIASTO\t ULICA\t NR_BUDYNKU\t NR_MIESZKANIA\t ZNIZKA\n");

                    gotoxy(0, 8);
                    printf("==================================================");
                    gotoxy(0, 10);
                    while(wyswietl_klient.FetchNext()) {
                    long ID_KLIENTA = wyswietl_klient.Field(_TSA("ID_KLIENTA"));
                    SAString IMIE = wyswietl_klient.Field(_TSA("IMIE"));
                    SAString NAZWISKO = wyswietl_klient.Field(_TSA("NAZWISKO"));
                    SAString PESEL = wyswietl_klient.Field(_TSA("PESEL"));
                    long NR_TELEFONU = wyswietl_klient.Field(_TSA("NR_TELEFONU"));
                    SAString MIASTO = wyswietl_klient.Field(_TSA("MIASTO"));
                    SAString ULICA = wyswietl_klient.Field(_TSA("ULICA"));
                    SAString NR_BUDYNKU = wyswietl_klient.Field(_TSA("NR_BUDYNKU"));
                    long NR_MIESZKANIA = wyswietl_klient.Field(_TSA("NR_MIESZKANIA"));
                    long ZNIZKA = wyswietl_klient.Field(_TSA("ZNIZKA"));
                    printf("%ld\t %s\t %s\t %s\t %ld\t %s\t %s\t %s\t %ld\t %ld \n", ID_KLIENTA, IMIE.GetMultiByteChars(), NAZWISKO.GetMultiByteChars(), PESEL.GetMultiByteChars(), NR_TELEFONU, MIASTO.GetMultiByteChars(), ULICA.GetMultiByteChars(), NR_BUDYNKU.GetMultiByteChars(), NR_MIESZKANIA, ZNIZKA);
                    }

}

void wys_pracownicy(SACommand &wyswietl_pracownicy)
{
                    wyswietl_pracownicy.Execute();
                    gotoxy(56, 5);
                    printf("PRACOWNICY");
                    gotoxy(0, 6);
                    printf("================================================================================================================");

                    gotoxy(0, 7);
                    printf(" ID_PRACOWNIKA\t IMIE\t NAZWISKO\t PESEL\t NR_TELEFONU\t MIASTO\t ULICA\t NR_BUDYNKU\t NR_MIESZKANIA\t STAZ\t\t PENSJA \t STANOWISKO \t PREMIA \t NR_UMOWY\n");

                    gotoxy(0, 8);
                    printf("================================================================================================================");
                    gotoxy(0, 10);
                    while(wyswietl_pracownicy.FetchNext()) {
                    long ID_PRACOWNIKA = wyswietl_pracownicy.Field(_TSA("ID_PRACOWNIKA"));
                    SAString IMIE = wyswietl_pracownicy.Field(_TSA("IMIE"));
                    SAString NAZWISKO = wyswietl_pracownicy.Field(_TSA("NAZWISKO"));
                    SAString PESEL = wyswietl_pracownicy.Field(_TSA("PESEL"));
                    long NR_TELEFONU = wyswietl_pracownicy.Field(_TSA("NR_TELEFONU"));
                    SAString MIASTO = wyswietl_pracownicy.Field(_TSA("MIASTO"));
                    SAString ULICA = wyswietl_pracownicy.Field(_TSA("ULICA"));
                    SAString NR_BUDYNKU = wyswietl_pracownicy.Field(_TSA("NR_BUDYNKU"));
                    long NR_MIESZKANIA = wyswietl_pracownicy.Field(_TSA("NR_MIESZKANIA"));
                    long STAZ = wyswietl_pracownicy.Field(_TSA("STAZ"));
                    long PENSJA = wyswietl_pracownicy.Field(_TSA("PENSJA"));
                    SAString STANOWISKO = wyswietl_pracownicy.Field(_TSA("STANOWISKO"));
                    long PREMIA = wyswietl_pracownicy.Field(_TSA("PREMIA"));
                    long NR_UMOWY = wyswietl_pracownicy.Field(_TSA("NR_UMOWY"));
                    printf("%ld\t %s\t %s\t %s\t %ld\t %s\t %s\t %s\t %ld\t %ld\t %ld\t %s\t %ld\t %ld \n", ID_PRACOWNIKA, IMIE.GetMultiByteChars(), NAZWISKO.GetMultiByteChars(), PESEL.GetMultiByteChars(), NR_TELEFONU, MIASTO.GetMultiByteChars(), ULICA.GetMultiByteChars(), NR_BUDYNKU.GetMultiByteChars(), NR_MIESZKANIA, STAZ, PENSJA, STANOWISKO.GetMultiByteChars(), PREMIA,NR_UMOWY);
                    }
}

void wys_producent(SACommand &wyswietl_producent)
{
                    wyswietl_producent.Execute();
                    gotoxy(56, 5);
                    printf("PRODUCENT");
                    gotoxy(5, 6);
                    printf("=========================================================================================");

                    gotoxy(5, 7);
                    printf(" ID_PRODUCENTA\t NIP\t NAZWA\t MIASTO\t ULICA\t NR_BUDYNKU \n");

                    gotoxy(5, 8);
                    printf("=========================================================================================");
                    gotoxy(6, 10);
                    while(wyswietl_producent.FetchNext()) {
                    long ID_PRODUCENTA = wyswietl_producent.Field(_TSA("ID_PRODUCENTA"));
                    SAString NIP = wyswietl_producent.Field(_TSA("NIP"));
                    SAString NAZWA = wyswietl_producent.Field(_TSA("NAZWA"));
                    SAString MIASTO = wyswietl_producent.Field(_TSA("MIASTO"));
                    SAString ULICA = wyswietl_producent.Field(_TSA("ULICA"));
                    SAString NR_BUDYNKU = wyswietl_producent.Field(_TSA("NR_BUDYNKU"));
                    printf("\t %ld\t %s\t %s\t %s\t %s\t %s\t %s \n", ID_PRODUCENTA, NIP.GetMultiByteChars(), NAZWA.GetMultiByteChars(), MIASTO.GetMultiByteChars(), ULICA.GetMultiByteChars(), NR_BUDYNKU.GetMultiByteChars());
                    }

}

void wys_towary(SACommand &wyswietl_towary)
{
                    wyswietl_towary.Execute();
                    gotoxy(56, 5);
                    printf("TOWARY");
                    gotoxy(0, 6);
                    printf("======================================================================================================================");

                    gotoxy(0, 7);
                    printf(" ID_TOWARU\t ID_PRODUCENTA\t NAZWA\t TYP\t STAN\t CENA_NETTO_SZT\t CENA_BRUTTO_SZT\t CZAS_GWARANCJI\n");

                    gotoxy(0, 8);
                    printf("======================================================================================================================");
                    gotoxy(0, 10);
                    while(wyswietl_towary.FetchNext()) {
                    long ID_TOWARU = wyswietl_towary.Field(_TSA("ID_TOWARU"));
                    long ID_PRODUCENTA = wyswietl_towary.Field(_TSA("ID_PRODUCENTA"));
                    SAString NAZWA = wyswietl_towary.Field(_TSA("NAZWA"));
                    SAString TYP = wyswietl_towary.Field(_TSA("TYP"));
                    long STAN = wyswietl_towary.Field(_TSA("STAN"));
                    double CENA_NETTO_SZT = wyswietl_towary.Field(_TSA("CENA_NETTO_SZT"));
                    double CENA_BRUTTO_SZT = wyswietl_towary.Field(_TSA("CENA_BRUTTO_SZT"));
                    SAString CZAS_GWARANCJI = wyswietl_towary.Field(_TSA("CZAS_GWARANCJI"));
                    printf("%ld\t %ld\t %s\t %s\t %ld\t %lf\t %lf\t %s\n", ID_TOWARU, ID_PRODUCENTA, NAZWA.GetMultiByteChars(), TYP.GetMultiByteChars(), STAN, CENA_NETTO_SZT, CENA_BRUTTO_SZT, CZAS_GWARANCJI.GetMultiByteChars());
                    }
}


void wys_outlet(SACommand &wyswietl_outlet)
{
                    wyswietl_outlet.Execute();
                    gotoxy(46, 5);
                    printf("OUTLET");
                    gotoxy(5, 6);
                    printf("======================================================================================================================");

                    gotoxy(5, 7);
                    printf(" ID_OUTLET\t ID_TOWARU\t OBNIZKA\t OPIS \n");

                    gotoxy(5, 8);
                    printf("======================================================================================================================");
                    gotoxy(6, 10);
                    while(wyswietl_outlet.FetchNext()) {
                    long ID_OUTLET = wyswietl_outlet.Field(_TSA("ID_OUTLET"));
                    long ID_TOWARU = wyswietl_outlet.Field(_TSA("ID_TOWARU"));
                    long OBNIZKA = wyswietl_outlet.Field(_TSA("OBNIZKA"));
                    SAString OPIS = wyswietl_outlet.Field(_TSA("OPIS"));
                    printf("%ld\t %ld\t %ld\t %s \n", ID_OUTLET, ID_TOWARU, OBNIZKA, OPIS.GetMultiByteChars());
                    }
}

void wys_zamowienia(SACommand &wyswietl_zamowienia)
{
                    wyswietl_zamowienia.Execute();
                    gotoxy(46, 5);
                    printf("OUTLET");
                    gotoxy(5, 6);
                    printf("======================================================================================================================");

                    gotoxy(5, 7);
                    printf(" ID_ZAMOWIENIA\t WARTOSC_NETTO\t WARTOSC_BRUTTO \n");

                    gotoxy(5, 8);
                    printf("======================================================================================================================");
                    gotoxy(6, 10);
                    while(wyswietl_zamowienia.FetchNext()) {
                    long ID_ZAMOWIENIA = wyswietl_zamowienia.Field(_TSA("ID_ZAMOWIENIA"));
                    double WARTOSC_NETTO = wyswietl_zamowienia.Field(_TSA("WARTOSC_NETTO"));
                    double WARTOSC_BRUTTO = wyswietl_zamowienia.Field(_TSA("WARTOSC_BRUTTO"));
                    printf("%ld\t %lf\t %lf \n", ID_ZAMOWIENIA, WARTOSC_NETTO, WARTOSC_BRUTTO);
                    }
}

void wys_koszyk(SACommand &wyswietl_koszyk)
{
                    wyswietl_koszyk.Execute();
                    gotoxy(46, 5);
                    printf("KOSZYK");
                    gotoxy(5, 6);
                    printf("======================================================================================================================");

                    gotoxy(5, 7);
                    printf(" ID_KOSZYKA\t ID_ZAMOWIENIA\t ID_TOWARU\t ILOSC \n");

                    gotoxy(5, 8);
                    printf("======================================================================================================================");
                    gotoxy(6, 10);
                    while(wyswietl_koszyk.FetchNext()) {
                    long ID_KOSZYKA = wyswietl_koszyk.Field(_TSA("ID_KOSZYKA"));
                    long ID_ZAMOWIENIA = wyswietl_koszyk.Field(_TSA("ID_ZAMOWIENIA"));
                    long ID_TOWARU = wyswietl_koszyk.Field(_TSA("ID_TOWARU"));
                    long ILOSC = wyswietl_koszyk.Field(_TSA("ILOSC"));
                    printf("%ld\t %ld\t %ld\t %ld \n", ID_KOSZYKA, ID_ZAMOWIENIA, ID_TOWARU, ILOSC);
                    }
}


void wys_faktura(SACommand &wyswietl_faktura)
{
                    wyswietl_faktura.Execute();
                    gotoxy(56, 5);
                    printf("FAKTURA");
                    gotoxy(0, 6);
                    printf("========================================================================================================================");

                    gotoxy(0, 7);
                    printf(" ID_FAKTURY\t NR_FAKTURY\t DATA_WYSTAWIENIA\t ID_KLIENTA \t ID_PRACOWNIKA \t ID_ZAMOWIENIA\t TYP_FAKTURY\n");

                    gotoxy(0, 8);
                    printf("========================================================================================================================");
                    gotoxy(0, 10);
                    while(wyswietl_faktura.FetchNext()) {
                    long ID_FAKTURY = wyswietl_faktura.Field(_TSA("ID_FAKTURY"));
                    SAString NR_FAKTURY = wyswietl_faktura.Field(_TSA("NR_FAKTURY"));
                    SAString DATA_WYSTAWIENIA = wyswietl_faktura.Field(_TSA("DATA_WYSTAWIENIA"));
                    long ID_KLIENTA = wyswietl_faktura.Field(_TSA("ID_KLIENTA"));
                    long ID_PRACOWNIKA = wyswietl_faktura.Field(_TSA("ID_PRACOWNIKA"));
                    long ID_ZAMOWIENIA = wyswietl_faktura.Field(_TSA("ID_ZAMOWIENIA"));
                    SAString TYP_FAKTURY = wyswietl_faktura.Field(_TSA("TYP_FAKTURY"));
                    printf("%ld\t %s\t %s\t %ld\t %ld\t %ld\t %s \n", ID_FAKTURY, NR_FAKTURY.GetMultiByteChars(), DATA_WYSTAWIENIA.GetMultiByteChars(), ID_KLIENTA, ID_PRACOWNIKA, ID_ZAMOWIENIA, TYP_FAKTURY.GetMultiByteChars());
                    }
}

void wys_rejestr(SACommand &wyswietl_rejestr)
{
                    wyswietl_rejestr.Execute();
                    gotoxy(56, 5);
                    printf("REJESTR");
                    gotoxy(0, 6);
                    printf("=======================================================================================================================");

                    gotoxy(0, 7);
                    printf(" ID_REJESTR\t ID_FAKTURY\t DATA_ZLOZENIA\t DATA_PRZYJECIA \t DATA_REALIZACJI \t DATA_WPLATY\n");

                    gotoxy(0, 8);
                    printf("=======================================================================================================================");
                    gotoxy(0, 10);
                    while(wyswietl_rejestr.FetchNext()) {
                    long ID_REJESTR = wyswietl_rejestr.Field(_TSA("ID_REJESTR_KUPNA"));
                    long ID_FAKTURY = wyswietl_rejestr.Field(_TSA("ID_FAKTURY_KUPNA"));
                    SAString DATA_ZLOZENIA = wyswietl_rejestr.Field(_TSA("DATA_ZLOZENIA"));
                    SAString DATA_PRZYJECIA = wyswietl_rejestr.Field(_TSA("DATA_PRZYJECIA"));
                    SAString DATA_REALIZACJI = wyswietl_rejestr.Field(_TSA("DATA_REALIZACJI"));
                    SAString DATA_WPLATY = wyswietl_rejestr.Field(_TSA("DATA_WPLATY"));
                    printf("%ld\t\t %ld\t %s\t %s\t %s\t %s \n", ID_REJESTR, ID_FAKTURY, DATA_ZLOZENIA.GetMultiByteChars(), DATA_PRZYJECIA.GetMultiByteChars(), DATA_REALIZACJI.GetMultiByteChars(), DATA_WPLATY.GetMultiByteChars());
                    }

}

void wys_zwroty(SACommand &wyswietl_zwroty)
{
                    wyswietl_zwroty.Execute();
                    gotoxy(56, 5);
                    printf("ZWROTY");
                    gotoxy(5, 6);
                    printf("==========================================================================================================");

                    gotoxy(5, 7);
                    printf(" ID_ZWROTU\t ID_TOWARU\t ID_KLIENTA\t ID_FAKTURY \t\t DATA_ZWROTU \t\t STATUS\n");

                    gotoxy(5, 8);
                    printf("==========================================================================================================");
                    gotoxy(6, 10);
                    while(wyswietl_zwroty.FetchNext()) {
                    long ID_ZWROTU = wyswietl_zwroty.Field(_TSA("ID_ZWROTU"));
                    long ID_TOWARU = wyswietl_zwroty.Field(_TSA("ID_TOWARU"));
                    long ID_KLIENTA = wyswietl_zwroty.Field(_TSA("ID_KLIENTA"));
                    long ID_FAKTURY = wyswietl_zwroty.Field(_TSA("ID_FAKTURY"));
                    SAString DATA_ZWROTU = wyswietl_zwroty.Field(_TSA("DATA_ZWROTU"));
                    SAString STATUS = wyswietl_zwroty.Field(_TSA("STATUS"));
                    printf("\t%ld\t\t %ld\t\t %ld\t\t %ld\t\t %s\t\t %s \n", ID_ZWROTU, ID_TOWARU, ID_KLIENTA, ID_FAKTURY, DATA_ZWROTU.GetMultiByteChars(), STATUS.GetMultiByteChars());
                    }

}

void widok_naj_sprzedawca(SACommand &zapytanie)
{
    zapytanie.setCommandText("SELECT * FROM NAJLEPSZY_SPRZEDAWCA");
    zapytanie.Execute();
    gotoxy(56, 5);
    printf("NAJLEPSZY SPRZEDAWCA");
    gotoxy(0, 6);
    printf("==============================================================================================================================================================");

    gotoxy(0, 7);
    printf(" ID_PRACOWNIKA\t IMIE\t NAZWISKO\t ILOSC_ZAMOWIEN \t ILOSC_PRODUKTOW \t WARTOSC_NETTO \t WARTOSC_BRUTTO \n");

    gotoxy(0, 8);
    printf("==============================================================================================================================================================");
    gotoxy(0, 10);
    while(zapytanie.FetchNext()) {
    long ID_PRACOWNIKA = zapytanie.Field(_TSA("ID_PRACOWNIKA"));
    SAString IMIE = zapytanie.Field(_TSA("IMIE"));
    SAString NAZWISKO = zapytanie.Field(_TSA("NAZWISKO"));
    long ILOSC_ZAMOWIEN = zapytanie.Field(_TSA("ILOSC_ZAMOWIEN"));
    long ILOSC_PRODUKTOW = zapytanie.Field(_TSA("ILOSC_PRODUKTOW"));
    double WARTOSC_NETTO = zapytanie.Field(_TSA("WARTOSC_NETTO"));
    double WARTOSC_BRUTTO = zapytanie.Field(_TSA("WARTOSC_BRUTTO"));
    printf("%ld\t %s\t %s\t %ld\t %ld\t %lf\t %lf\t \n", ID_PRACOWNIKA, IMIE.GetMultiByteChars(), NAZWISKO.GetMultiByteChars(), ILOSC_ZAMOWIEN, ILOSC_PRODUKTOW, WARTOSC_NETTO, WARTOSC_BRUTTO);
    }
}

void widok_pra_sklepu(SACommand &zapytanie)
{
    zapytanie.setCommandText("SELECT * FROM PRACOWNICY_SKLEPU");
    zapytanie.Execute();
    gotoxy(56, 5);
    printf("PRACOWNICY SKLEPU");
    gotoxy(0, 6);
    printf("=========================================================================================================================================");

    gotoxy(0, 7);
    printf(" ID_PRACOWNIKA\t IMIE\t NAZWISKO\t PESEL\t NR_TELEFONU\t MIASTO\t ULICA\t NR_BUDYNKU\t NR_MIESZKANIA\t STAZ\t\t PENSJA \t STANOWISKO \t PREMIA \t  NR_UMOWY\n");

    gotoxy(0, 8);
    printf("=========================================================================================================================================");
    gotoxy(0, 10);
    while(zapytanie.FetchNext()) {
    long ID_PRACOWNIKA = zapytanie.Field(_TSA("ID_PRACOWNIKA"));
    SAString IMIE = zapytanie.Field(_TSA("IMIE"));
    SAString NAZWISKO = zapytanie.Field(_TSA("NAZWISKO"));
    SAString PESEL = zapytanie.Field(_TSA("PESEL"));
    long NR_TELEFONU = zapytanie.Field(_TSA("NR_TELEFONU"));
    SAString MIASTO = zapytanie.Field(_TSA("MIASTO"));
    SAString ULICA = zapytanie.Field(_TSA("ULICA"));
    SAString NR_BUDYNKU = zapytanie.Field(_TSA("NR_BUDYNKU"));
    long NR_MIESZKANIA = zapytanie.Field(_TSA("NR_MIESZKANIA"));
    long STAZ = zapytanie.Field(_TSA("STAZ"));
    long PENSJA = zapytanie.Field(_TSA("PENSJA"));
    SAString STANOWISKO = zapytanie.Field(_TSA("STANOWISKO"));
    long PREMIA = zapytanie.Field(_TSA("PREMIA"));
    long NR_UMOWY = zapytanie.Field(_TSA("NR_UMOWY"));
    printf("%ld\t %s\t %s\t %s\t %ld\t %s\t %s\t %s\t %ld\t %ld\t %ld\t %s\t %ld\t %ld \n", ID_PRACOWNIKA, IMIE.GetMultiByteChars(), NAZWISKO.GetMultiByteChars(), PESEL.GetMultiByteChars(), NR_TELEFONU, MIASTO.GetMultiByteChars(), ULICA.GetMultiByteChars(), NR_BUDYNKU.GetMultiByteChars(), NR_MIESZKANIA, STAZ, PENSJA, STANOWISKO.GetMultiByteChars(), PREMIA, NR_UMOWY);
    }
}

void widok_klienci(SACommand &zapytanie)
{
    zapytanie.setCommandText("SELECT * FROM ZWERYFIKOWANI_KLENCI_SKLEPU");
    zapytanie.Execute();
    gotoxy(56, 5);
    printf("ZWERYFIKOWANI KLIENCI SKLEPU");
    gotoxy(0, 6);
    printf("======================================================================================================================");

    gotoxy(0, 7);
    printf(" ID_KLIENTA\t IMIE\t NAZWISKO\t PESEL\t NR_TELEFONU\t MIASTO\t ULICA\t NR_BUDYNKU\t NR_MIESZKANIA\t ZNIZKA\n");

    gotoxy(0, 8);
    printf("==================================================");
    gotoxy(0, 10);
    while(zapytanie.FetchNext()) {
    long ID_KLIENTA = zapytanie.Field(_TSA("ID_KLIENTA"));
    SAString IMIE = zapytanie.Field(_TSA("IMIE"));
    SAString NAZWISKO = zapytanie.Field(_TSA("NAZWISKO"));
    SAString PESEL = zapytanie.Field(_TSA("PESEL"));
    long NR_TELEFONU = zapytanie.Field(_TSA("NR_TELEFONU"));
    SAString MIASTO = zapytanie.Field(_TSA("MIASTO"));
    SAString ULICA = zapytanie.Field(_TSA("ULICA"));
    SAString NR_BUDYNKU = zapytanie.Field(_TSA("NR_BUDYNKU"));
    long NR_MIESZKANIA = zapytanie.Field(_TSA("NR_MIESZKANIA"));
    long ZNIZKA = zapytanie.Field(_TSA("ZNIZKA"));
    printf("%ld\t %s\t %s\t %s\t %ld\t %s\t %s\t %s\t %ld\t %ld \n", ID_KLIENTA, IMIE.GetMultiByteChars(), NAZWISKO.GetMultiByteChars(), PESEL.GetMultiByteChars(), NR_TELEFONU, MIASTO.GetMultiByteChars(), ULICA.GetMultiByteChars(), NR_BUDYNKU.GetMultiByteChars(), NR_MIESZKANIA, ZNIZKA);
    }
}

void widok_naj_produkt(SACommand &zapytanie)
{
    zapytanie.setCommandText("SELECT * FROM NAJPOPULARNIEJSZY_PRODUKT");
    zapytanie.Execute();
    gotoxy(56, 5);
    printf("NAJPOPULARNIEJSZY PRODUKT");
    gotoxy(0, 6);
    printf("======================================================================================================================");

    gotoxy(0, 7);
    printf(" ID_TOWARU\t NAZWA\t TYP\t PRODUCENT \t ILOSC_SPRZEDANYCH_SZTUK \n");

    gotoxy(0, 8);
    printf("======================================================================================================================");
    gotoxy(0, 10);
    while(zapytanie.FetchNext()) {
    long ID_TOWARU = zapytanie.Field(_TSA("ID_TOWARU"));
    SAString NAZWA = zapytanie.Field(_TSA("NAZWA"));
    SAString TYP = zapytanie.Field(_TSA("TYP"));
    SAString PRODUCENT = zapytanie.Field(_TSA("PRODUCENT"));
    long ILOSC_SPRZEDANYCH_SZTUK = zapytanie.Field(_TSA("ILOSC_SPRZEDANYCH_SZTUK"));
    printf("%ld\t %s\t %s\t %s\t %ld \n", ID_TOWARU, NAZWA.GetMultiByteChars(), TYP.GetMultiByteChars(), PRODUCENT.GetMultiByteChars(), ILOSC_SPRZEDANYCH_SZTUK);
    }
}

void widok_zwra_produkt(SACommand &zapytanie)
{
    zapytanie.setCommandText("SELECT * FROM NAJCZESCIEJ_ZWRACANY_PRODUKT");
    zapytanie.Execute();
    gotoxy(56, 5);
    printf("NAJCZESCIEJ ZWRACANY PRODUKT");
    gotoxy(0, 6);
    printf("======================================================================================================================");

    gotoxy(0, 7);
    printf(" ID_TOWARU\t NAZWA\t TYP\t PRODUCENT \t ILOSC_ZWROTOW \n");

    gotoxy(0, 8);
    printf("======================================================================================================================");
    gotoxy(0, 10);
    while(zapytanie.FetchNext()) {
    long ID_TOWARU = zapytanie.Field(_TSA("ID_TOWARU"));
    SAString NAZWA = zapytanie.Field(_TSA("NAZWA"));
    SAString TYP = zapytanie.Field(_TSA("TYP"));
    SAString PRODUCENT = zapytanie.Field(_TSA("PRODUCENT"));
    long ILOSC_ZWROTOW = zapytanie.Field(_TSA("ILOSC_ZWROTOW"));
    printf("%ld\t %s\t %s\t %s\t %ld \n", ID_TOWARU, NAZWA.GetMultiByteChars(), TYP.GetMultiByteChars(), PRODUCENT.GetMultiByteChars(), ILOSC_ZWROTOW);
    }
}

void widok_sprzedaz_m(SACommand &zapytanie)
{
    zapytanie.setCommandText("SELECT * FROM WARTOSC_SPRZEDAZY_MIESIECZNA");
    zapytanie.Execute();
    gotoxy(56, 5);
    printf("WARTOSC SPRZEDAZY MIESIECZNA");

    gotoxy(5, 6);
    printf("======================================================================================================================");

    gotoxy(5, 7);
    printf(" MIESIAC\t ILOSC_ZAMOWIEN\t ILOSC_PRODUKTOW\t WARTOSC_NETTO\t WARTOSC_BRUTTO \n");

    gotoxy(5, 8);
    printf("======================================================================================================================");
    gotoxy(6, 10);
    while(zapytanie.FetchNext()) {
    long MIESIAC = zapytanie.Field(_TSA("MIESIAC"));
    long ILOSC_ZAMOWIEN = zapytanie.Field(_TSA("ILOSC_ZAMOWIEN"));
    long ILOSC_PRODUKTOW = zapytanie.Field(_TSA("ILOSC_PRODUKTOW"));
    double WARTOSC_NETTO = zapytanie.Field(_TSA("WARTOSC_NETTO"));
    double WARTOSC_BRUTTO = zapytanie.Field(_TSA("WARTOSC_BRUTTO"));
    printf("\t %ld\t %ld\t %ld\t %lf\t %lf \n", MIESIAC, ILOSC_ZAMOWIEN, ILOSC_PRODUKTOW, WARTOSC_NETTO, WARTOSC_BRUTTO);
    }
}

void widok_sprzedaz_r(SACommand &zapytanie)
{
    zapytanie.setCommandText("SELECT * FROM WARTOSC_SPRZEDAZY_ROCZNA");
    zapytanie.Execute();
    gotoxy(56, 5);
    printf("WARTOSC SPRZEDAZY ROCZNA");

    gotoxy(5, 6);
    printf("======================================================================================================================");

    gotoxy(5, 7);
    printf(" ROK\t ILOSC_ZAMOWIEN\t ILOSC_PRODUKTOW\t WARTOSC_NETTO\t WARTOSC_BRUTTO \n");

    gotoxy(5, 8);
    printf("======================================================================================================================");
    gotoxy(6, 10);
    while(zapytanie.FetchNext()) {
    long ROK = zapytanie.Field(_TSA("ROK"));
    long ILOSC_ZAMOWIEN = zapytanie.Field(_TSA("ILOSC_ZAMOWIEN"));
    long ILOSC_PRODUKTOW = zapytanie.Field(_TSA("ILOSC_PRODUKTOW"));
    double WARTOSC_NETTO = zapytanie.Field(_TSA("WARTOSC_NETTO"));
    double WARTOSC_BRUTTO = zapytanie.Field(_TSA("WARTOSC_BRUTTO"));
    printf("\t %ld\t %ld\t %ld\t %lf\t %lf \n", ROK, ILOSC_ZAMOWIEN, ILOSC_PRODUKTOW, WARTOSC_NETTO, WARTOSC_BRUTTO);
    }
}

void widok_kupna_m(SACommand &zapytanie)
{
    zapytanie.setCommandText("SELECT * FROM WARTOSC_ZAKUPOW_MIESIECZNA");
    zapytanie.Execute();
    gotoxy(56, 5);
    printf("WARTOSC ZAKUPOW MIESIECZNA");

    gotoxy(5, 6);
    printf("======================================================================================================================");

    gotoxy(5, 7);
    printf(" MIESIAC\t ILOSC_ZAMOWIEN\t ILOSC_PRODUKTOW\t WARTOSC_NETTO\t WARTOSC_BRUTTO \n");

    gotoxy(5, 8);
    printf("======================================================================================================================");
    gotoxy(6, 10);
    while(zapytanie.FetchNext()) {
    long MIESIAC = zapytanie.Field(_TSA("MIESIAC"));
    long ILOSC_ZAMOWIEN = zapytanie.Field(_TSA("ILOSC_ZAMOWIEN"));
    long ILOSC_PRODUKTOW = zapytanie.Field(_TSA("ILOSC_PRODUKTOW"));
    double WARTOSC_NETTO = zapytanie.Field(_TSA("WARTOSC_NETTO"));
    double WARTOSC_BRUTTO = zapytanie.Field(_TSA("WARTOSC_BRUTTO"));
    printf("\t %ld\t %ld\t %ld\t %lf\t %lf \n", MIESIAC, ILOSC_ZAMOWIEN, ILOSC_PRODUKTOW, WARTOSC_NETTO, WARTOSC_BRUTTO);
    }
}

void widok_kupna_r(SACommand &zapytanie)
{
    zapytanie.setCommandText("SELECT * FROM WARTOSC_ZAKUPOW_ROCZNA");
    zapytanie.Execute();
    gotoxy(56, 5);
    printf("WARTOSC ZAKUPOW ROCZNA");

    gotoxy(5, 6);
    printf("======================================================================================================================");

    gotoxy(5, 7);
    printf(" ROK\t ILOSC_ZAMOWIEN\t ILOSC_PRODUKTOW\t WARTOSC_NETTO\t WARTOSC_BRUTTO \n");

    gotoxy(5, 8);
    printf("======================================================================================================================");
    gotoxy(6, 10);
    while(zapytanie.FetchNext()) {
    long ROK = zapytanie.Field(_TSA("ROK"));
    long ILOSC_ZAMOWIEN = zapytanie.Field(_TSA("ILOSC_ZAMOWIEN"));
    long ILOSC_PRODUKTOW = zapytanie.Field(_TSA("ILOSC_PRODUKTOW"));
    double WARTOSC_NETTO = zapytanie.Field(_TSA("WARTOSC_NETTO"));
    double WARTOSC_BRUTTO = zapytanie.Field(_TSA("WARTOSC_BRUTTO"));
    printf("\t %ld\t %ld\t %ld\t %lf\t %lf \n", ROK, ILOSC_ZAMOWIEN, ILOSC_PRODUKTOW, WARTOSC_NETTO, WARTOSC_BRUTTO);
    }
}



int main(int argc, char* argv[])
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL,"65001");
    int wybor=0, menu=0;
    SAConnection polacz;
    string n_tabeli,zalogowano;
    char DATABASE[30],LOGIN[50],PASSWORD[50];
    do{

    cout<<"Podaj nazwe bazy: ";
    scanf("%s",DATABASE);
    cout<<"Podaj login: ";
    scanf("%s",LOGIN);
    cout<<"Podaj hasło: ";
    scanf("%s",PASSWORD);



    if((strcmp(DATABASE, "XE")==0)&&(strcmp(LOGIN, "student")==0)&&(strcmp(PASSWORD, "student123")==0))
    {
        cout<<"Zalogowano do bazy danych sklepu"<<endl;
        zalogowano="T";
        polacz.Connect(_TSA(DATABASE), _TSA(LOGIN), _TSA(PASSWORD), SA_Oracle_Client);
    }
    else
    {
        cout<<"Podano błędne dane logowania. Spróbuj ponownie"<<endl;
        zalogowano="F";
    }
    }while(zalogowano!="T");


    try
    {
    SACommand zapytanie;
    zapytanie.setConnection(&polacz);
    do{
        cout <<"****************************************************************"<<endl;
        cout << "*******************    SKLEP KOMPUTEROWY    *********************"<< endl;
        cout << "******************* 1. Wyświetl dane        *********************"<< endl;
        cout << "******************* 2. Zastosuj widoki      *********************"<<endl;
        cout << "******************* 3. Kursory              *********************"<<endl;
        cout << "******************* 4. Stwórz tabele        *********************"<< endl;
        cout << "******************* 5. Dodaj do tabeli      *********************"<< endl;
        cout << "******************* 6. Usuń tabele          *********************"<< endl;
        cout << "******************* 7. Własne zapytanie     *********************"<< endl;
        cout << "******************* 8. Wyjście              *********************"<<endl;
        cout <<"****************************************************************"<<endl;
        cout<<"Wybierz opcję z menu:"<<endl;
        cin>>menu; if(cin.fail()) throw "Błąd krytyczny! Nie można podawać liter w menu!";

    switch(menu)
    {
        case 1:
            {
                system("cls");
                cout<<"Wyświetlanie danych!"<<endl;
                cout<<"Podaj nazwę tabeli, którą chcesz wyświetlić:"<<endl;
                cin>>n_tabeli;
                if(n_tabeli=="KLIENT")
                {
                    SACommand wyswietl_klient(&polacz,_TSA("Select * from KLIENT"));
                    wys_klienci(wyswietl_klient);
                    polacz.Commit();
                    cout<<"Wczytano tabele: "<<n_tabeli<<endl;
                }else if(n_tabeli=="PRACOWNICY")
                {
                    SACommand wyswietl_pracownicy(&polacz,_TSA("Select * from PRACOWNICY"));
                    wys_pracownicy(wyswietl_pracownicy);
                    polacz.Commit();
                    cout<<"Wczytano tabele: "<<n_tabeli<<endl;
                }else if(n_tabeli=="PRODUCENT")
                {
                    SACommand wyswietl_producent(&polacz,_TSA("Select * from PRODUCENT"));
                    wys_producent(wyswietl_producent);
                    polacz.Commit();
                    cout<<"Wczytano tabele: "<<n_tabeli<<endl;
                }else if(n_tabeli=="TOWARY")
                {
                    SACommand wyswietl_towary(&polacz,_TSA("Select * from TOWARY"));
                    wys_towary(wyswietl_towary);
                    polacz.Commit();
                    cout<<"Wczytano tabele: "<<n_tabeli<<endl;
                }else if(n_tabeli=="OUTLET")
                {
                    SACommand wyswietl_towary(&polacz,_TSA("Select * from OUTLET"));
                    wys_towary(wyswietl_towary);
                    polacz.Commit();
                    cout<<"Wczytano tabele: "<<n_tabeli<<endl;
                }else if(n_tabeli=="ZAMOWIENIA")
                {
                    SACommand wyswietl_towary(&polacz,_TSA("Select * from ZAMOWIENIA"));
                    wys_towary(wyswietl_towary);
                    polacz.Commit();
                    cout<<"Wczytano tabele: "<<n_tabeli<<endl;
                }else if(n_tabeli=="KOSZYK")
                {
                    SACommand wyswietl_towary(&polacz,_TSA("Select * from KOSZYK"));
                    wys_towary(wyswietl_towary);
                    polacz.Commit();
                    cout<<"Wczytano tabele: "<<n_tabeli<<endl;
                }else if(n_tabeli=="FAKTURA")
                {
                    SACommand wyswietl_faktura(&polacz,_TSA("Select * from FAKTURA"));
                    wys_faktura(wyswietl_faktura);
                    polacz.Commit();
                    cout<<"Wczytano tabele: "<<n_tabeli<<endl;
                }else if(n_tabeli=="REJESTR")
                {
                    SACommand wyswietl_rejestr(&polacz,_TSA("Select * from REJESTR"));
                    wys_rejestr(wyswietl_rejestr);
                    polacz.Commit();
                    cout<<"Wczytano tabele: "<<n_tabeli<<endl;
                }else if(n_tabeli=="ZWROTY")
                {
                    SACommand wyswietl_zwroty(&polacz,_TSA("Select * from ZWROTY"));
                    wys_zwroty(wyswietl_zwroty);
                    polacz.Commit();
                    cout<<"Wczytano tabele: "<<n_tabeli<<endl;
                }else
                {
                    cout<<"Nie istnieje taka tabela!"<<endl;
                    cout<<"Proszę podać dokładną nazwę włącznie z _"<<endl;
                }
                break;
            }
        case 2:
            {
                system("cls");
                cout<<"Lista dostępnych widoków: "<<endl;
                cout<<"1. NAJLEPSZY SPRZEDAWCA"<<endl;
                cout<<"2. PRACOWNICY SKLEPU"<<endl;
                cout<<"3. ZWERYFIKOWANI KLENCI SKLEPU"<<endl;
                cout<<"4. NAJPOPULARNIEJSZY PRODUKT"<<endl;
                cout<<"5. NAJCZĘŚCIEJ ZWRACANY PRODUKT"<<endl;
                cout<<"6. WARTOŚĆ SPRZEDAŻY MIESIĘCZNA"<<endl;
                cout<<"7. WARTOŚĆ SPRZEDAŻY ROCZNA"<<endl;
                cout<<"8. WARTOŚĆ ZAKUPÓW MIESIĘCZNA"<<endl;
                cout<<"9. WARTOŚĆ ZAKUPÓW ROCZNA"<<endl;
                cin>>wybor;
                if(wybor == 1)
                {
                    system("cls");
                    widok_naj_sprzedawca(zapytanie);
                    polacz.Commit();
                    cout<<"Wczytano widok: "<<wybor<<" - NAJLEPSZY SPRZEDAWCA"<<endl;
                }
                else if(wybor == 2)
                {
                    system("cls");
                    widok_pra_sklepu(zapytanie);
                    polacz.Commit();
                    cout<<"Wczytano widok: "<<wybor<<" - PRACOWNICY SKLEPU"<<endl;
                }
                else if(wybor == 3)
                {
                    system("cls");
                    widok_klienci(zapytanie);
                    polacz.Commit();
                    cout<<"Wczytano widok: "<<wybor<<" - ZWERYFIKOWANI KLIENCI SKLEPU"<<endl;
                }
                else if(wybor == 4)
                {
                    system("cls");
                    widok_naj_produkt(zapytanie);
                    polacz.Commit();
                    cout<<"Wczytano widok: "<<wybor<<" - NAJPOPULARNIEJSZY PRODUKT"<<endl;
                }
                else if(wybor == 5)
                {
                    system("cls");
                    widok_zwra_produkt(zapytanie);
                    polacz.Commit();
                    cout<<"Wczytano widok: "<<wybor<<" - NAJCZĘŚCIEJ ZWRACANY PRODUKT"<<endl;
                }
                else if(wybor == 6)
                {
                    system("cls");
                    widok_sprzedaz_m(zapytanie);
                    polacz.Commit();
                    cout<<"Wczytano widok: "<<wybor<<" - WARTOŚĆ SPRZEDAŻY MIESIĘCZNA"<<endl;
                }
                else if(wybor == 7)
                {
                    system("cls");
                    widok_sprzedaz_r(zapytanie);
                    polacz.Commit();
                    cout<<"Wczytano widok: "<<wybor<<" - WARTOŚĆ SPRZEDAŻY ROCZNA"<<endl;
                }
                else if(wybor == 8)
                {
                    system("cls");
                    widok_kupna_m(zapytanie);
                    polacz.Commit();
                    cout<<"Wczytano widok: "<<wybor<<" - WARTOŚĆ ZAKUPÓW MIESIĘCZNA"<<endl;
                }
                else if(wybor == 9)
                {
                    system("cls");
                    widok_kupna_r(zapytanie);
                    polacz.Commit();
                    cout<<"Wczytano widok: "<<wybor<<" - WARTOŚĆ ZAKUPÓW ROCZNA"<<endl;
                }else
                {
                    cout<<"Nie istnieje taki widok!"<<endl;
                }
                break;
            }
        case 3:
            {
                system("cls");
                cout<<"Lista dostępnych kursorów: "<<endl;
                cout<<"1. NADAJ PREMIE PRACOWNIKĄ"<<endl;
                cout<<"2. WYŚWIETL PRACOWNIKÓW O PODANYM STANOWISKU"<<endl;
                cout<<"3. REKOMPENSTA ZA ZWROTY"<<endl;
                cout<<"4. CZYSZCZENIE KOSZYKA"<<endl;
                cin>>wybor;
                if(wybor == 1)
                {
                    system("cls");

                    zapytanie.setCommandText("CALL NADAJ_PREMIE()");
                    zapytanie.Execute();
                    polacz.Commit();
                    cout<<"Kursor "<<wybor<<" został wykonany"<<endl;
                }
                else if(wybor == 2)
                {
                    system("cls");
                    char kursor_wyswietl[600],nazwa_stanowiska[50];

                    cout<<"Podaj nazwe stanowiska:";
                    cin.clear();
                    cin.ignore(numeric_limits < std::streamsize >::max(), '\n' );
                    cin.getline(nazwa_stanowiska,50);

                    sprintf(kursor_wyswietl,"CALL SZUKAJ_PO_STANOWISKU ('%s')", nazwa_stanowiska);

                    zapytanie.setCommandText(kursor_wyswietl);
                    zapytanie.Execute();
                    polacz.Commit();
                    cout<<"Kursor "<<wybor<<" został wykonany"<<endl;
                }
                else if(wybor == 3)
                {
                    system("cls");
                    zapytanie.setCommandText("CALL REKOMPENSATA()");
                    zapytanie.Execute();
                    polacz.Commit();
                    cout<<"Kursor "<<wybor<<" został wykonany"<<endl;
                }
                else if(wybor == 4)
                {
                    system("cls");
                    char kursor_koszyk[600],id_zamowienia[50];

                    cout<<"Podaj id zamowienia:";
                    cin.clear();
                    cin.ignore(numeric_limits < std::streamsize >::max(), '\n' );
                    cin.getline(id_zamowienia,50);

                    sprintf(kursor_koszyk,"CALL CZYSC_KOSZYK (%s)", id_zamowienia);
                    zapytanie.setCommandText(kursor_koszyk);
                    zapytanie.Execute();
                    polacz.Commit();
                    cout<<"Kursor "<<wybor<<" został wykonany"<<endl;
                }
                break;
            }
        case 4:
            {
                char stworz_tablice[600],nazwa_tablicy[50],dane[500];

                cout<<"Podaj nazwe tablicy:";
                cin.clear();
                cin.ignore(numeric_limits < std::streamsize >::max(), '\n' );
                cin.getline(nazwa_tablicy,50);

                cout<<"Podaj dane tabeli(nazwa_kolumny1 typ_danych1, nazwa_kolumny2 typ_danych2) pamiętaj o przecinku!";
                cin.clear();
                cin.ignore(numeric_limits < std::streamsize >::max(), '\n' );
                cin.getline(dane,500);

                sprintf(stworz_tablice,"Create table %s (%s)", nazwa_tablicy,dane);

                zapytanie.setCommandText(stworz_tablice);
                zapytanie.Execute();
                polacz.Commit();
                cout<<"Wykonano!"<<endl;
                break;
            }
        case 5:
            {
                char dodaj_do_tablicy[1100],nazwa_tablicy[50],dane[1000];

                cout<<"Podaj nazwe tablicy:";
                cin.clear();
                cin.ignore(numeric_limits < std::streamsize >::max(), '\n' );
                cin.getline(nazwa_tablicy,50);

                cout<<"Podaj dane, które chcesz wprowadzić do tabeli(dane oddziel przecinkami, jeśli typ danej to słowo użyj '', w przypadku daty użyj tego formatu:TO_DATE('2020/11/25', 'YYYY/MM/DD'))";
                cin.clear();
                cin.ignore(numeric_limits < std::streamsize >::max(), '\n' );
                cin.getline(dane,1000);

                sprintf(dodaj_do_tablicy,"INSERT INTO %s VALUES(%s)", nazwa_tablicy,dane);
                zapytanie.setCommandText(dodaj_do_tablicy);
                zapytanie.Execute();
                polacz.Commit();
                cout<<"Wykonano!"<<endl;
                break;
            }
        case 6:
            {
                char usun_zapytanie[500],nazwa_tablicy[50];
                cout<<"Podaj nazwę tabeli, którą chcesz usunąć"<<endl;
                cin.clear();
                cin.ignore(numeric_limits < std::streamsize >::max(), '\n' );
                cin.getline(nazwa_tablicy,50);

                sprintf(usun_zapytanie,"DROP TABLE %s CASCADE CONSTRAINTS PURGE",nazwa_tablicy);

                zapytanie.setCommandText(usun_zapytanie);
                zapytanie.Execute();
                polacz.Commit();
                cout<<"Tabela "<<nazwa_tablicy<<" została usunięta"<<endl;

                break;
            }
        case 7:
            {
                cout<<"Witaj w kreatorze tworzenia własnego zapytania"<<endl;
                cout<<"Napisz własne zapytanie w języku SQL poniżej"<<endl;
                cout<<"Uwaga!"<<endl<<"Zapytania, które wyświetlają dane, wymagają zadeklarowania zmiennych"<<endl;
                cout<<"nie są obsługiwane przez ten kreator. By zrealizowaæ takie zapytanie proszę wybraś inną opcję w menu"<<endl;
                cout<<"lub skorzystaj z dedykowanego programu"<<endl;
                char wlasne_zapytanie[1000];
                cin.clear();
                cin.ignore(numeric_limits < std::streamsize >::max(), '\n' );
                cin.getline(wlasne_zapytanie,1000);
                zapytanie.setCommandText(wlasne_zapytanie);
                zapytanie.Execute();
                polacz.Commit();
                cout<<"Wykonano!"<<endl;
                break;
            }
    }
    }while (menu!=8);

    }
    catch(SAException &x)
    {
        try
        {
            polacz.Rollback();
        }
        catch(SAException &)
        {
        }
        printf("%s\n", x.ErrText().GetMultiByteChars());
    }
    catch (const char *s)
  {
      cout<<"X01K512: "<<s<<endl;
  }
    return 0;
}
