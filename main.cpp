#include <iostream>
#include <iomanip>
using namespace std;

// Valiutos reiksmiu lentele.
// GBP - Didziosios Britanijos svaras,
// USD - Jungtiniu Amerikos Valstiju doleris,
// INR - Indijos rupija.
double GBP_Bendras = 0.8593;
double GBP_Pirkti = 0.8450;
double GBP_Parduoti = 0.9060;
double USD_Bendras = 1.0713;
double USD_Pirkti = 1.0547;
double USD_Parduoti = 1.1309;
double INR_Bendras = 88.8260;
double INR_Pirkti = 85.2614;
double INR_Parduoti = 92.8334;

void konvertavimas() {
    int operacija = 0;
    double pradk;
    double galutk;
    while (operacija != 7) {
        cout << "Vartotojas pasirenka kokia valiuta konvertuoti" << endl;
        cout << "1. Eurus konvertuoti i GBP - Didziosios Britanijos svaras" << endl;
        cout << "2. Eurus konvertuoti i USD - Jungtiniu Amerikos Valstiju doleris" << endl;
        cout << "3. Eurus konvertuoti i INR - Indijos rupija" << endl;
        cout << "4. GBP - Didziosios Britanijos svaras i Eurus" << endl;
        cout << "5. USD - Jungtiniu Amerikos Valstiju doleris i Eurus" << endl;
        cout << "6. INR - Indijos rupija i Eurus" << endl;
        cin >> operacija;
        switch (operacija) {
            case 1:
                cout << "Irasykite norima valiutos kieki." << endl;
                cin >> pradk;
                galutk = pradk * GBP_Bendras;
                cout << pradk << fixed << setprecision(2) << " EUR " << galutk << fixed << setprecision(2) << " GBP " << endl;
                break;
            case 2:
                cout << "Irasykite norima valiutos kieki." << endl;
                cin >> pradk;
                galutk = pradk * USD_Bendras;
                cout << pradk << fixed << setprecision(2) << " EUR " << galutk << fixed << setprecision(2) << " USD " << endl;
                break;
            case 3:
                cout << "Irasykite norima valiutos kieki." << endl;
                cin >> pradk;
                galutk = pradk * INR_Bendras;
                cout << pradk << fixed << setprecision(2) << " EUR " << galutk << fixed << setprecision(2) << " INR " << endl;
                break;
            case 4:
                cout << "Irasykite norima valiutos kieki." << endl;
                cin >> pradk;
                galutk = pradk / GBP_Bendras;
                cout << pradk << fixed << setprecision(2) << " GBP " << galutk << fixed << setprecision(2) << " EUR " << endl;
                break;
            case 5:
                cout << "Irasykite norima valiutos kieki." << endl;
                cin >> pradk;
                galutk = pradk / USD_Bendras;
                cout << pradk << fixed << setprecision(2) << " USD " << galutk << fixed << setprecision(2) << " EUR " << endl;
                break;
            case 6:
                cout << "Irasykite norima valiutos kieki." << endl;
                cin >> pradk;
                galutk = pradk / INR_Bendras;
                cout << pradk << fixed << setprecision(2) << " INR " << galutk << fixed << setprecision(2) << " EUR " << endl;
                break;
            case 7:
                cout << "Jus isejote is valiutos konvertavimo programos." << endl;
                break;
            default:
                cout << "Tokio pasirinkimo nera, bandykite dar karta." << endl;
    }
}
}


        void pirkimas() {
            int operac = 0;
            double pradik;
            double galutik;
            while (operac != 7) {
                cout << "Pasirinkite kokia valiuta norite nusipirkti - EUR, GBP, USD, INR" << endl;
                cout << "1. Nusipirkti GBP - Didziosios Britanijos svaras uz EUR - eurus" << endl;
                cout << "2. Nusipirkti USD - Jungtiniu Amerikos Valstiju doleris uz EUR - eurus" << endl;
                cout << "3. Nusipirkti INR - Indijos rupija uz EUR - eurus" << endl;
                cout << "4. Nusipirkti EUR - euras uz GBP - Didziosios Britanijos svaras" << endl;
                cout << "5. Nusipirkti EUR - euras uz USD - Jungtiniu Amerikos Valstiju doleris" << endl;
                cout << "6. Nusipirkti EUR - euras uz INR - Indijos rupija" << endl;
                cin >> operac;

                switch (operac) {
                    case 1:
                        cout << "Irasykite kieki valiutos pirkimui." << endl;
                    cin >> pradik;
                    galutik = pradik * GBP_Pirkti;
                    cout << pradik << fixed << setprecision(2) << " EUR " << galutik << fixed << setprecision(2) << " GBP " << endl;
                    break;
                    case 2:
                        cout << "Irasykite kieki valiutos pirkimui." << endl;
                    cin >> pradik;
                    galutik = pradik * USD_Pirkti;
                    cout << pradik << fixed << setprecision(2) << " EUR " << galutik << fixed << setprecision(2) << " USD " << endl;
                    break;
                    case 3:
                        cout << "Irasykite kieki valiutos pirkimui." << endl;
                    cin >> pradik;
                    galutik = pradik * INR_Pirkti;
                    cout << pradik << fixed << setprecision(2) << " EUR " << galutik << fixed << setprecision(2) << " INR " << endl;
                    break;
                    case 4:
                        cout << "irasykite kieki valiutos pirkimui." << endl;
                    cin >> pradik;
                    galutik = pradik / GBP_Pirkti;
                    cout << pradik << fixed << setprecision(2) << " GBP " << galutik << fixed << setprecision(2) << " EUR " << endl;
                    break;
                    case 5:
                        cout << "irasykite kieki valiutos pirkimui." << endl;
                    cin >> pradik;
                    galutik = pradik / USD_Pirkti;
                    cout << pradik << fixed << setprecision(2) << " USD " << galutik << fixed << setprecision(2) << " EUR " << endl;
                    break;
                    case 6:
                        cout << "irasykite kieki valiutos pirkimui." << endl;
                    cin >> pradik;
                    galutik = pradik / INR_Pirkti;
                    cout << pradik << fixed << setprecision(2) << " INR " << galutik << fixed << setprecision(2) << " EUR " << endl;
                    break;
                    case 7:
                        cout << "Jus isejote is valiutos pirkimo programos." << endl;
                    break;
                    default:
                        cout << "Tokio pasirinkimo nera, bandykite dar karta." << endl;
                }
            }
        }
                void pardavimas() {int op = 0;
                    double prad;
                    double galut;
                    while (op != 7) {
                        cout << "Pasirinkite valiuta, kuria norite parduoti." << endl;
                        cout << "1. Parduoti GBP - Didziosios Britanijos svaras uz EUR - euras" << endl;
                        cout << "2. Parduoti USD - Jungtiniu Amerikos Valstiju doleris uz EUR - euras" << endl;
                        cout << "3. Parduoti INR - Indijos rupija uz EUR - euras" << endl;
                        cout << "4. Parduoti EUR - euras uz GBP - Didziosios Britanijos svaras" << endl;
                        cout << "5. Parduoti EUR - euras uz USD - Jungtiniu Amerikos Valstiju doleris" << endl;
                        cout << "6. Parduoti EUR - euras uz INR - Indijos rupija" << endl;
                        cin >> op;


                    switch (op) {
                        case 1:
                            cout << "Irasykite kieki valiutos pardavimui." << endl;
                        cin >> prad;
                        galut = prad * GBP_Parduoti;
                        cout << prad << fixed << setprecision(2) << " GBP " << galut << fixed << setprecision(2) << " EUR " << endl;
                        break;
                        case 2:
                            cout << "irasykite kieki valiutos pardavimui." << endl;
                        cin >> prad;
                        galut = prad * USD_Parduoti;
                        cout << prad << fixed << setprecision(2) << " USD " << galut << fixed << setprecision(2) << " EUR " << endl;
                        break;
                        case 3:
                            cout << "irasykite kieki valiutos pardavimui." << endl;
                        cin >> prad;
                        galut = prad * INR_Parduoti;
                        cout << prad << fixed << setprecision(2) << " INR " << galut << fixed << setprecision(2) << " EUR " << endl;
                        break;
                        case 4:
                            cout << "irasykite kieki valiutos pardavimui." << endl;
                        cin >> prad;
                        galut = prad / GBP_Parduoti;
                        cout << prad << fixed << setprecision(2) << " EUR " << galut << fixed << setprecision(2) << " GBP " << endl;
                        break;
                        case 5:
                            cout << "irasykite kieki valiutos pardavimui." << endl;
                        cin >> prad;
                        galut = prad / USD_Parduoti;
                        cout << prad << fixed << setprecision(2) << " EUR " << galut << fixed << setprecision(2) << " USD " << endl;
                        break;
                        case 6:
                            cout << "irasykite kieki valiutos pardavimui." << endl;
                        cin >> prad;
                        galut = prad / INR_Parduoti;
                        cout << prad << fixed << setprecision(2) << " EUR " << galut << fixed << setprecision(2) << " INR " << endl;
                        break;
                        case 7:
                            cout << "Jus isejote is valiutos pardavimo programos." << endl;
                        break;
                        default:
                            cout << "Tokio pasirinkimo nera, bandykite dar karta" << endl;
                    }
                    }
    }


int main() {
        int pasirinkimas=0;
        while(pasirinkimas!=4) {
            cout << "Pasirinkite viena is siu progtamu:" << endl;
            cout << "Valiutos konvertavimas:" << endl;
            cout << "Valiutos pirkimas:" << endl;
            cout << "Valiutos pardavimas" << endl;
            cout << "Iseiti is programos" << endl;
            cin >> pasirinkimas;

            switch(pasirinkimas) {
                case 1:
                    konvertavimas();
                break;
                case 2:
                    pirkimas();
                break;
                case 3:
                    pardavimas();
                break;
                case 4:
                    cout << "Jus isejote is valiutu programos" << endl;
                break;
                default:
                    cout << "Tokio pasirinkimo nera, banykite dar karta." << endl;
            }
        }

    return 0;
}
