#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

struct _Persona;
typedef struct _Persona * Persona;


/* Setters */
void setNombre(Persona persona, char nombre[20]);
void setEdad(Persona persona, int edad);
void setAltura(Persona persona, float altura);


/* Getters*/
char* getNombre(Persona persona);
int getEdad(Persona persona);
float getAltura(Persona persona);


Persona cargarPersona(char nombre[20], int edad, float altura);
void mostrarPersona(Persona persona);

#endif // PERSONA_H_INCLUDED
