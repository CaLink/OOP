#include <iostream>
#include "Fraction.h"

int main()
{
    Fraction fr(135, 30), qwe(123, 453);
    fr.Info();

    fr.Mult(23);
    fr.Info();
    fr.Div(23);
    fr.Info();
    fr.Mult(qwe);
    fr.Info();
    fr.Div(qwe);
    fr.Info();
    fr.Sum(23);
    fr.Info();






}