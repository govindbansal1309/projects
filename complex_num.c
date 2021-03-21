#include <stdio.h>
/**
 * @brief structure of a complex number with members real and imaginary
 * 
 */
typedef struct complex_t{

float real;

float img;

}complex_t;

/**
 * @brief add function of structure type returns real and imaginary part
 * 
 * @param first 
 * @param second 
 * @return complex_t 
 */
complex_t add(complex_t first, complex_t second)
{
    complex_t temp;
    temp.real = first.real + second.real;
    temp.img = first.img + second.img;
    return(temp);
}

/**
 * @brief subtract function of structure type returns real and imaginary part
 * 
 * @param first 
 * @param second 
 * @return complex_t 
 */
complex_t subtract(complex_t first, complex_t second)
{
    complex_t temp;
    temp.real = first.real - second.real;
    temp.img = first.img - second.img;
    return(temp);
}

/**
 * @brief multiply function of structure type returns real and imaginary part
 * 
 * @param first 
 * @param second 
 * @return complex_t 
 */
complex_t multiply(complex_t first, complex_t second)
{
    complex_t temp;
    temp.real = first.real * second.real;
    temp.img = first.img * second.img;
    return(temp);
}

/**
 * @brief divide function of structure type returns real and imaginary part
 * 
 * @param first 
 * @param second 
 * @return complex_t 
 */
complex_t divide(complex_t first, complex_t second)
{
    complex_t temp;
    temp.real = first.real / second.real;
    temp.img = first.img / second.img;
    return(temp);
}

int main()
{
    complex_t first, second, sum, diff, mul, div;
    first.real = 1;
    first.img = 2;
    second.real = 3;
    second.img = 1;

    sum = add(first, second);
    diff = subtract(first, second);
    mul = multiply(first, second);
    div = divide(first, second);

    printf("\nsum = %.1f + %.1fi", sum.real, sum.img);
    printf("\ndiff = %.1f + %.1fi", diff.real, diff.img);
    printf("\nproduct = %.1f + %.1fi", mul.real, mul.img);
    printf("\ndivision = %.1f + %.1fi", div.real, div.img);
    return 0;
}