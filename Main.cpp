#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int*** crearCubo();

void liberarMatrix();

int main(){
    
    bool vive = true;
    int turno = 0;
    do{
        if(turno % 2 == 0){
            //aqui jugador 1
            int sub1 = 0;
        }else if(turno % 2 != 0){
            //aqui jugador 2
            int sub2 = 0;
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




