
## Bloque 2.1
### Ejercicio 2.1.2
1. ¿Por qué n sigue siendo 10 en main?
por que al llamar a la funcion se realiza una copia
de modo que el valor original no se ve afectado

2. ¿Cómo se resolvería sin usar punteros?
Podriamos hacer que la variable n sea global o tambien que retorne el valor esperado
en lugar de asumir que cambiara el valor del argumento.

3. Reescribir incrementar para que retorne el valor modificado.
```
int incrementar(int x) {
	x = x + 1;
	printf("Dentro de incrementar: x = %d\n", x);
    return x;
}

main () {
    ...
    n = incrementar (n);
    ...
}
```

### Ejercicio 2.1.3
1. Impresiones:
    
Impresion de Programa A:

```bash
local contador = 1
local contador = 1
local contador = 1
global contador = 0
```

Programa B: Imprimira 0

```bash
global contador = 3
```
2. `.exe` adjuntos
3. Codigo refactorizado:

```c
#include <stdio.h>

int incrementar_global(int contador) {
	return ++contador;
}

int main(void) {
	int contador = 0;

	contador = incrementar_global(contador);
	contador = incrementar_global(contador);
	contador = incrementar_global(contador);

	printf("global contador: %d\n", contador);
	return 0;
}
```

4. 

# Bloque 2.2
### Ejercicio 2.2.1
1. Parece que el `.h` contiene los prototipos de las funciones, probablemente solo
deba contener eso, en si el papel que cumple parece ser el de interfaz
2. 
