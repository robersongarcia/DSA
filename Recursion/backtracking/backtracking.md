La técnica de backtracking o vuelta atrás se trata de probar de forma sistemática todas las posibles opciones para resolver un problema, en pasos iguales o parecidos, por ello se realiza de manera recursiva, y vuelve sobre si mismo con la solución si la consigue o en caso contrario cuando se acaben todas las opciones. Estos algoritmos realizan una busqueda exhaustiva de la solución del problema buscando a través de todas las soluciones parciales del mismo.

Esquema de estos algoritmos

subProgram ensayarSolucion

inicio 
inicializar cuanta de posibles soluciones

repetir 
    tomar siguiente solución (tarea)
    si selección es validad entonces
        anotar seleccion
        si problema solucionado entonces
            exito = true <- condicion de parada
        sino
            ensayarSolucion() llamada para realizar otra tarea, vuelta atras se analiza si se alcanzo la solución del problema

            si no exito entonces
                borrar seleccion
            fin si
        fin si
    fin si
hasta exito o no mas posibilidades

fin