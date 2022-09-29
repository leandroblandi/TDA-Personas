#include <stdio.h>
#include <stdlib.h>

#include "persona.c"

int main(void)
{

    Persona persona1 = cargarPersona("Leandro Blandi", 20, 1.80);
    mostrarPersona(persona1);

    return 0;
}
