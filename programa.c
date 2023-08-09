int main() {
    double num1, num2;
    system("cls");
printf("ingrese el primer numero:");
if (scanf("%lf", &num1)!=1){
    printf("Error: Ingrese un numero real valido.\n");
    return 1;
}
/*  Aqui esta el desglose de lo que esta sucediendo:
scanf("%lf", &num1):Esta linea esta utilizando la funcion scanf para leer un numero real ingresado por el usuario y
asignarlo a la variable num1.
 El formato %lf se utiliza para leer numeros reales de doble presicion.
 
 !=1: Despues de la llamada a scanf, se compara el valor devuelto por scanf con 1. scanf devuelve la cantidad de
 elementos que se han leido con exito.
  En este caso, esperamos que se lea un solo elemento (un numero real), por lo que comparamos con 1.
  
  if(...){...}: Esta estructura if verifica si la condicion entre parentesis es verdadera.
  Si el resultado de la comparacion (scanf no leyo un solo elemento) es verdadero, se ejecutara el bloque de codigo de 
  las llaves {...}.
  
  printf("Error: Ingrese un numero real valido.\n");: Si scanf no pudo leer un numero real valido (es decir,
  si el usuario ingreso algo que no es un numero real), este bloque de codigo imprimira un mensaje de error.
  
  return 1;: Luego de imprimir el mensaje de error, el programa se detendra y retornara el valor 1 al sistema operativo.
  El valor 1 es comunmente utilizado para indicar que el programa termino con un error.  */

  printf("ingrese el segundo numero:");
  if (scanf("%lf", &num2)!=1){
    printf("Error: Ingrese un numero real valido.\n");
    return 1;
  }

  double suma = num1 + num2;
  double resta = num1 - num2;
  double multiplicacion = num1 * num2;

  if (num2==0){
    printf("Errir: No se puede deividir entre cero.\n");
    return 1;
  }

  double division = num1 / num2;

printf("\nResultados:\n");
printf("Suma: %.4lf\n", suma);
printf("Resta: %.4lf\n", resta);
printf("Multiplicacion> %.4lf\n", multiplicacion);
printf("Division: %.4lf\n", division);

return 0;
}