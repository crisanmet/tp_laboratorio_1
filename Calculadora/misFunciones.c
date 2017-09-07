int sumar (float a, float b){
    float resultado;
    resultado= a + b;
    return resultado;

}

int restar (float a, float b){
    float resultado;
    resultado = a - b;
    return resultado;

}

 int multiplicar (float a, float b){
    float resultado;
    resultado = a * b;
    return resultado;

}


 int dividir (float a, float b){
    float resultado;
    resultado = a / b;
    return resultado;

}



int factorial(float a)
{
    float resultado;
    if(a==1)
    return 1;
    resultado= a* factorial(a-1);
    return resultado;
}


