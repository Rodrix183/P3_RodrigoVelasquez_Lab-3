#include <iostream>

using std::cin;
using std::cout;
using std::endl;

char*** crearCubo();

void inicializarMatrix(char***);

void liberarMatrix(char***);

int main(){
    
    bool vive = true;
    int turno = 0;
    int op1 = 0;
    int op2 = 0;
    //vidas de los jugadores
    int vidas1 = 15;
    int vidas2 = 15;
    char*** MarMuerto = NULL;
    char*** MarMediterraneo = NULL;
    //submarinos
    //int 1sub1 = 1;
    //int 1sub2 = 1;
    MarMuerto = crearCubo();
    MarMediterraneo = crearCubo();
    do{
        if(turno % 2 == 0){
            //aqui jugador 1
            cout<<"------------------------------JUGADOR 1------------------------------";
            cout<<"1. Ataque Normal"<<endl
            <<"2. Ataque Wave XY"<<endl
            <<"3. Ataque Wave XZ"<<endl
            <<"4. Ataque Wave YZ"<<endl
            <<"Ingrese una ataque";
            cin>>op1;
            switch(op1){
                case 1:{
              
                }break;

                case 2:{

                }break;

                case 3:{

                }break;

                case 4:{

                }break;
                
                default:
                    cout<<"Opcion no valida pierde turno!"<<endl;
            }
        }else if(turno % 2 != 0){
            //aqui jugador 
            
            cout<<"------------------------------JUGADOR 2------------------------------";
            cout<<"1. Ataque Normal"<<endl
            <<"2. Ataque Wave XY"<<endl
            <<"3. Ataque Wave XZ"<<endl
            <<"4. Ataque Wave YZ"<<endl;
            cin>>op2;
            switch(op2){
                case 1:{

                }break;

                case 2:{

                }break;

                case 3:{

                }break;
                
                case 4:{

                }break;

                default:
                cout<<"Opcion no valida pierde turno!"<<endl;
            }
        }

        turno++;
    }while(vive);     
    
    return 0;
}



char*** crearCubo(){
    char*** cubo = new char**[12];
    for(int i = 0; i <12;i++){
        cubo[i]=new char*[12];
    }
    
    for(int i = 0; i < 12;i++){
        for(int j = 0;j < 12;j++){
            cubo[i][j] = new char[12];
        }
    }

    return cubo;
}

void liberarMatrix(char*** matriz){

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            delete[] matriz[i][j];
            matriz[i][j] = NULL;
        }
    }

    for(int i = 0; i < 12; i++){
        delete[] matriz[i];
        matriz[i] = NULL;
    }

        delete[] matriz;
        matriz = NULL;

}


void inicializarMatrix(char*** matriz){
    for(int i = 0; i < 12;i++){
        for(int j = 0; j<12;j++){
            for(int k = 0;k<12;k++){
                matriz[i][j][k] = '-';
            }
        }
    }    
    
}

