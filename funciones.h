

/**
* \brief Recibe 2 numeros
* \param carga laprimer variable
* \param carga la segunda variable
* \param Se ejecuta la suma entre las variables
* \return La suma de ambos numeros
*
*/
int sumar (int operandoUno,int operandoDos) //operacion para sumar
{
        int resultado;
        resultado = operandoUno + operandoDos;
        return resultado;
}


/**
* \brief Recibe 2 numeros
* \param carga laprimer variable
* \param carga la segunda variable
* \param Se ejecuta la resta entre las variables
* \return La resta de ambos numeros
*
*/

int restar(int operandoUno,int operandoDos)
{
        int resultado;
        resultado = operandoUno - operandoDos;
        return resultado;
}

/**
* \brief Recibe 2 numeros
* \param carga la primer variable
* \param carga la segunda variable
* \param Se ejecuta la multiplicacion entre las variables
* \return La multiplicacion de ambos numeros
*
*/
int multiplicar(int operandoUno,int operandoDos)
{
    int resultado;
    resultado = operandoUno * operandoDos;
    return resultado;
}

/**
* \brief Recibe 2 numeros
* \param carga laprimer variable
* \param carga la segunda variable
* \param Se ejecuta la division entre las variables
* \return La division de ambos numeros
*
*/
float dividir (float operandoUno, float operandoDos)
{
    int resultado;
    resultado = operandoUno / operandoDos;
    return resultado;

}
/**
* \brief Recibe 1 numero
* \param carga la variable
* \param inicia un contador segun el nº ingresado
* \param Se ejecuta la factorizacion entre las variables
* \return La variable correspondiente
*
*/

    int factorizar(int operadorUno)
{
    int i,factorial=1;

    for (i=1;i<=operadorUno;i++)
    {
      factorial*=i;
    }
    return factorial;

}
