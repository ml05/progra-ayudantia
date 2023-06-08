#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    // mb usados por cada usuario
    double agustinMB = 0;
    double isabellaMB = 0;
    double sofiaMB = 0;
    // mb usados en cada app
    double instagramMB = 0;
    double whatsappMB = 0;
    double youtubeMB = 0;
    // cantidad de conexiones sobre los 10 mb
    int conexiones10 = 0;
    // lectura linea por linea
    for (int i=0; i<N; i++){
        string nombre, servicio;
        double mb;
        cin >> nombre;
        cin >> servicio;
        cin >> mb;
        // se actualiza el total de mb usados por cada usuario
        if (nombre == "Agustin"){
            agustinMB = agustinMB + mb;
        }
        else if (nombre == "Isabella"){
            isabellaMB = isabellaMB + mb;
        }
        else if (nombre == "Sofia"){
            sofiaMB = sofiaMB + mb;
        }
        // se actualiza el total de mb usados en cada app
        if (servicio == "Instagram"){
            instagramMB = instagramMB + mb;
        }
        else if (servicio == "WhatsApp"){
            whatsappMB = whatsappMB + mb;
        }
        else if (servicio == "Youtube"){
            youtubeMB = youtubeMB + mb;
        }
        // se actualiza la cantidad de conexiones sobre los 10 mb
        if (mb > 10){
            conexiones10 += 1;
        }
    }

    // se imprime el total de mb usados por cada usuario
    cout << agustinMB << endl;
    cout << isabellaMB << endl;
    cout << sofiaMB << endl;
    // cantidad de conexiones
    cout << N << endl;
    // promedio de descarga por conexion
    cout << float(instagramMB + whatsappMB + youtubeMB)/N << endl;
    // cantidad de conexioones con descarga mayor a 10 mb
    cout << conexiones10 << endl;
    return 0;
}
