
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "persona.h"


struct _Persona
{
  char nombre[20];
  int edad;
  float altura;
};


/* Setters */

void setNombre(Persona persona, char nombre[20])
{
  strcpy(persona->nombre, nombre);
}

void setEdad(Persona persona, int edad)
{
  persona->edad = edad;
}

void setAltura(Persona persona, float altura)
{
  persona->altura = altura;
}


/* Getters */

char* getNombre(Persona persona)
{
  return persona->nombre;
}

int getEdad(Persona persona)
{
  return persona->edad;
}

float getAltura(Persona persona)
{
  return persona->altura;
}


/* Constructor */

Persona cargarPersona(char nombre[20], int edad, float altura)
{
  Persona persona = malloc(sizeof(struct _Persona));

  // Usamos los setters
  setNombre(persona, nombre);
  setEdad(persona, edad);
  setAltura(persona, altura);

  return persona;
}

void mostrarPersona(Persona persona)
{
  // Usamos los getters
  printf("Persona\n\tNombre: %s\n\tEdad: %d\n\tAltura: %.2f\n",
    getNombre(persona),
    getEdad(persona),
    getAltura(persona)
  );
}

