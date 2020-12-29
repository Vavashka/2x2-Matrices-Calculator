#include <iostream>
#include <conio.h>
#include <string>

using namespace std;


int multiply (int a, int b)
{
    return a * b;
}
float multiply (float a, float b)
{
    return a * b;
}

int main()
{
        int mat1a, mat1b, mat2a, mat2b;
         int mat3a, mat3b, mat4a, mat4b;
        cout << "Please insert numbers for your first matrices\n";
        cin >> mat1a >> mat1b >> mat2a >> mat2b;

        cout << "Please insert numbers for your second matrices\n";
        cin >> mat3a >> mat3b >> mat4a >> mat4b;
        int matrix1 [2][2] =
        {
            {mat1a, mat1b},
            {mat2a, mat2b}
        };

        int matrix2 [2][2] =
        {
            {mat3a,mat3b},
            {mat4a,mat4b}
        };
        int result1, result2, result3, result4 = 0;
        for (int i = 0; i<1; i++)
             {
                 for (int j = 0; j<2; j++)
                 {
                     for (int z = 1; z>0; z--)
                     {

                        result1 += matrix1[i][j] * matrix2[j][i];
                        result2 += matrix1[i][j] * matrix2[j][z];
                        result3 += matrix1[z][j] * matrix2[j][i];
                        result4 += matrix1[z][j] * matrix2[j][z];
                     }



                 };

             };

        int matrix3 [2][2]  =
        {

            //1st matrices number
            {
                result1, result2
            },
            //2nd matrices number
            {
            result3, result4
            }

        };

        cout<< "Press any key to see results" << endl;
        _getch();
        for (int i = 0; i<2; i++) {
            for (int j = 0; j<2; j++) {
                cout << matrix3[i][j] << " ";
            }
            cout <<" " <<endl;
        }

        return 0;




}
