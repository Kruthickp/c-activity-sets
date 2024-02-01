#include <stdio.h>
struct _complex 
{
    float real, imaginary;
};
typedef struct _complex Complex;
int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
int main() 
{
    int n = get_n();
    Complex complex_numbers[n];
    input_n_complex(n, complex_numbers);
    Complex sum = add_n_complex(n, complex_numbers);
    output(n, complex_numbers, sum);
    return 0;
}
int get_n() 
{
    int n;
    printf("Enter the number of complex numbers:\n");
    scanf("%d", &n);
    return n;
}
Complex input_complex() 
{
    Complex c;
    printf("Enter real and imaginary parts separated by space:\n");
    scanf("%f %f", &c.real, &c.imaginary);
    return c;
}
void input_n_complex(int n, Complex c[n]) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("Enter complex number %d:\n", i + 1);
        c[i] = input_complex();
    }
}
Complex add(Complex a, Complex b) 
{
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}
Complex add_n_complex(int n, Complex c[n]) 
{
    Complex sum = {0, 0};
    for (int i = 0; i < n; i++) 
    {
        sum = add(sum, c[i]);
    }
    return sum;
}

void output(int n, Complex c[n], Complex result) 
{
    printf("Sum of the %d complex numbers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("%f + %f ", c[i].real, c[i].imaginary);
        if (i < n - 1) 
        {
            printf("+ ");
        }
    }
    printf("= %f + %f\n", result.real, result.imaginary);
}
