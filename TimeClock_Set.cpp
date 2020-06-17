#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char** argv) {
    printf("TimeClock_Set by Stunx\n");
    //printf("Primero tendrás que escribir la contraseña\n");
    //system("sudo su -");
    string ano, mes, dia, hora, minutos;
    cout << "Dame el año: " << endl;
    cin >> ano;
    cout << "Dame el mes: " << endl;
    cin >> mes;
    cout << "Dame el dia: " << endl;
    cin >> dia;
    cout << "Okey, ahora para terminar dame la hora y los minutos (OJO: La hora tiene que ser en formato 24): " << endl;
    cout << "Hora: ";
    cin >> hora;
    cout << "Minutos: ";
    cin >> minutos;
    cout << endl;
    string cmd = "\""+ ano + "-" + mes + "-" + dia + " " + hora + ":" + minutos +"\"";
    //cout << cmd << endl;
    cout << "Ahora ingresarás la contraseña del sistema" << endl;
    char* cmdx = strcat("sudo su - && date --set ", cmd.c_str());
    system( cmdx );
}
