#include <iostream>
#include <cstdlib>

using std::rand;
using std::srand;
using std::cin;
using std::cout;
using std::endl;

char*** crearCubo();

void inicializarMatrix(char***);

void liberarMatrix(char***);

void print(char***);
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

    //llenar de agua
    inicializarMatrix(MarMuerto);

    
    inicializarMatrix(MarMediterraneo);

    
    do{
        if(turno % 2 == 0){
            //aqui jugador 1
            print(MarMuerto);
            cout<<"------------------------------JUGADOR 1------------------------------";
            cout<<"1. Ataque Normal"<<endl
            <<"2. Ataque Wave XY"<<endl
            <<"3. Ataque Wave XZ"<<endl
            <<"4. Ataque Wave YZ"<<endl
            <<"Ingrese una ataque"<<endl;
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
            print(MarMediterraneo);
            cout<<"------------------------------JUGADOR 2------------------------------";
            cout<<"1. Ataque Normal"<<endl
            <<"2. Ataque Wave XY"<<endl
            <<"3. Ataque Wave XZ"<<endl
            <<"4. Ataque Wave YZ"<<endl
            <<"Ingrese un ataque"<<endl;
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
    //srand(time(NULL));
    for(int i = 0; i < 12;i++){
        for(int j = 0; j<12;j++){
            for(int k = 0;k<12;k++){
                matriz[i][j][k] = '~';
            }
        }
    }  
    int llenar = 15;
    while(llenar != 0){
        int x = rand()%12;
        int y = rand()%12;
        int z = rand()%12;
        bool repetidas = true;
        while(repetidas){
            
            if(matriz[x][y][z]=='~'){
                matriz[x][y][z] = 'x';                
                repetidas = false;
                llenar--;
            }else{
                x = rand()%12;
                y = rand()%12;
                z = rand()%12;
                repetidas = true;
            }
        }
        
    }
    
}

void print(char*** matriz){
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            for(int k = 0; k <12; k++){
                if(matriz[i][j][k] == 'x'){
                    cout<<"("<<i<<","<<j<<","<<k<<")"<<endl;
                }
            }
        }
    }
}

