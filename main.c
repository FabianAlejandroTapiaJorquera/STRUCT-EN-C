#include <stdio.h>
#include <stdlib.h>

// 1) 
struct persona{
    char nombre[35];
    int edad;
    float peso, estatura;
}persona1 = {"Fabian Alejandro Tapia Jorquera", 25, 73.5, 1.85};


// 2)
typedef struct Animal{
    char tipo[20];
    int patas;
}animal;


// 3)
typedef struct alimento{
    int calorias, gramos;
    char tipo[20];
}comida;

void llenarComida(comida *x){
    printf("Cantidad de calorias: \n");
    scanf("%i", &x->calorias);
    printf("Peso en gramos: \n");
    scanf("%i", &x->gramos);
    printf("Tipo: \n");
    scanf("%s", &x->tipo);
}

void mostrarComida(comida *x){
    printf("Nombre: %s\nCalorias: %i\nGramos: %i",x->tipo, x->calorias, x->gramos);
}

// 4)
typedef struct Persona{
    char nombre[15], apellido[15];
    int edad;
}familia;

void llenarFamilia(familia *x){
    printf("Nombre: ");
    scanf("%s", &x->nombre);
    printf("\nApellido: ");
    scanf("%s", &x->apellido);
    printf("\nEdad: ");
    scanf("%i", &x->edad);
    printf("\n\n");
}

void mostrarFamilia(familia *x){
    printf("%s %s, %i anios\n",x->nombre, x->apellido, x->edad);
}

int main(){
    printf("Persona 1\n\n");
    printf("Nombre: %s\nEdad: %i\nPeso: %.2f\nEstatura: %.2f\n\n",persona1.nombre, persona1.edad, persona1.peso, persona1.estatura);

    animal perro = {"Mamifero", 4};
    animal gato = {"Mamifero", 4};
    printf("Animal 1\n\n");
    printf("Tipo: %s\nPatas: %i\n\n", perro.tipo, perro.patas);
    printf("Animal 2\n\n");
    printf("Tipo: %s\nPatas: %i\n\n", gato.tipo, gato.patas);

    comida salchicha;
    llenarComida(&salchicha);
    mostrarComida(&salchicha);

    familia familiaPerez[5];
    for(int i=0; i<5; i++){
        llenarFamilia(&familiaPerez[i]);
    }
    for(int j=0; j<5; j++){
        mostrarFamilia(&familiaPerez[j]);
    }
    return 0;
}