#ifndef MISOPERACIONES_H_INCLUDED
#define MISOPERACIONES_H_INCLUDED

int menu(int* cargadoX, int* cargadoY, int valorX, int valorY);
int cargarVariable(int* pVariable);
int sumar(int* pResultado, int operador1, int operador2);
int restar(int* pResultado, int operador1, int operador2);
int multiplicar(int* pResultado, int operador1, int operador2);
int dividir(float* pResultado, int operador1, int operador2);
int sacarFactorial(int* pResultado, int operador);

//////////////////////////



int menu(int* cargadoX, int* cargadoY, int valorX, int valorY)
{
    int opcion;
    system("cls");
    if(*cargadoX==1)
    {
        printf("\n1. Ingresar 1er operando (A=%d)", valorX);
    }
    else
    {
         printf("\n1. Ingresar 1er operando (A=x)");
    }

    if(*cargadoY==1)
    {
        printf("\n2. Ingresar 2do operando (B=%d)", valorY);
    }
    else
    {
        printf("\n2. Ingresar 2do operando (B=y)");
    }
    printf("\n3. Calcular todas las operaciones");//solo si 1 y 2 estan Ok
    printf("\n4. Informar resultados");// solo si 3 esta Ok
    printf("\n5. Salir");
    printf("\n***Elija opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

int cargarVariable(int* pVariable)
{
    int retorno=-1;
    int valor;

    if(pVariable != NULL)
    {
        printf("\nIngrese valor: ");
        scanf("%d", &valor);
        *pVariable= valor;
        retorno = 0;
    }
    return retorno;
}



int sumar(int* pResultado, int operador1, int operador2)
{
    int retorno=-1;
    int resultado;
    if(pResultado != NULL)
    {
        resultado = operador1 + operador2;
        retorno = 0; //success
        *pResultado = resultado;
    }
    return retorno;
}

int restar(int* pResultado, int operador1, int operador2)
{
    int retorno=-1;
    int resultado;

    if(pResultado!= NULL)
    {
        resultado = operador1-operador2;
        *pResultado=resultado;
        retorno=0;//success
    }

    return retorno;

}

int multiplicar(int* pResultado, int operador1, int operador2)
{
    int retorno=-1;
    int resultado;
    if(pResultado!=NULL)
    {
        resultado= operador1*operador2;
        *pResultado=resultado;
        retorno=0;//success
    }
    return retorno;
}

int dividir(float* pResultado, int operador1, int operador2)
{
    int retorno=-1;
    float resultado;
    if(pResultado!=NULL && operador2!=0)
    {
        resultado =(float) operador1/operador2;
        *pResultado=resultado;
        retorno=0;//succes
    }
    return retorno;
}
int sacarFactorial(int* pResultado, int operador)
{
    int retorno=-1;
    int resultado=1;//mal necesario
    if(pResultado!=NULL)
    {
        for(int i=operador; i>1; i--)
        {
            resultado *=i;

        }
        *pResultado=resultado;
        retorno=0;
    }

    return retorno;
}


#endif // MISOPERACIONES_H_INCLUDED
