#include <stdio.h>
float determinant_2x2(float Matrx_A[2][2]);
int main()
{
    float result = 0, div1 = 0, div2 = 0, div3 = 0, div4 = 0;
    float Matrx_A[2][2];
      for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter a%d%d >> ", i + 1, j + 1);
            scanf("%f", &Matrx_A[i][j]);
        }
    }
    printf("A = |a11 a12| = |%.2f %.2f|\n", Matrx_A[0][0], Matrx_A[0][1]);
    printf("    |a21 a22|   |%.2f %.2f|\n\n\n", Matrx_A[1][0], Matrx_A[1][1]);
    printf("Determinant of A\n");
    result=determinant_2x2( Matrx_A );
    printf("det(A) = %.2f", result);
        return 0;
}
float determinant_2x2(float Matrx_A[2][2] )
{
    float determinant;
for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 1; j++)
        {
                 determinant += ((Matrx_A[i][j]) * (Matrx_A[i+1][j+1])) - ((Matrx_A[i][j+1]) * (Matrx_A[i+1][j]));

        }
    }
    return determinant;
}
