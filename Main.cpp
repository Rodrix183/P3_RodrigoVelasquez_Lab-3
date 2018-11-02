#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int*** crearCubo();

void provisionarMatrix(int);

void liberarMatrix(int***);

int main(){
    
    bool vive = true;
    int turno = 0;
    int op1 = 0;
    int op2 = 0;
    //vidas de los jugadores
    int vidas1 = 15;
    int vidas2 = 15;

    //submarinos
    //int 1sub1 = 1;
    //int 1sub2 = 1;
    
    do{
        if(turno % 2 == 0){
            //aqui jugador 1
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



int*** crearCubo(){
    int*** cubo = new int**[12];
    for(int i = 0; i <12;i++){
        cubo[i]=new int*[12];
    }
    
    for(int i = 0; i < 12;i++){
        for(int j = 0;j < 12;j++){
            cubo[i][j] = new int[12];
        }
    }

    return cubo;
}

void liberarMatrix(int*** matriz){

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


