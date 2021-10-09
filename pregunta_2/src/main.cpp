#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
using namespace std; 


int main (){
    
    //leer el archivo
    ifstream lector("texto.txt", ifstream::in);

    if (!lector.is_open())
    {
        cerr << "Error leyendo archivo texto1.txt" << endl;
        return -1;
    }

    //escritor de archivo
    std::ofstream escritor("archivoGenerado.txt", std::ofstream::out);


    //variables
    string linea {}; 
    string palabra; 
    int contadorLinea {0};

    //leer linea por linea
    while (getline(lector, linea)) {

        contadorLinea++;

        istringstream streamLinea(linea); 

        //leer palabra por palabra
       while (streamLinea >> palabra)
       {

           //omitir comas y puntos
           istringstream streamPalabraFinal(palabra);

           string palabraFinal {};

           char c = streamPalabraFinal.get();
           char coma = ',';
           char punto = '.';

           while(streamPalabraFinal.good()){
               if(c != coma && c != punto){

                   palabraFinal +=c; 
               }
               c = streamPalabraFinal.get();
           }

           if(palabraFinal.length() > 4){
               escritor << palabraFinal << " " << palabraFinal.length() <<endl;
           }
           palabraFinal = "";
       }
       
    }
    escritor << "Total de lineas: " << contadorLinea;

    lector.close();
    escritor.close();

    return 0;
}