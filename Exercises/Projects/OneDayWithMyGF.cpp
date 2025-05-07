#include <iostream>

using namespace std;

int main()
{

    int opcion;
    int puntos = 0;
    bool fueATacobell = false;
    bool fueAlEvento = false;

    // Comida
    cout << "El domingo fuimos a Metrocentro con mi novia y teniamos varias opciones para comer." << endl;
    cout << "A donde deberiamos ir a comer?" << endl;
    cout << "1. Liru Sisa" << endl;
    cout << "2. Wendys" << endl;
    cout << "3. Tacobell" << endl;
    cout << "Selecciona una opcion (1-3): ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Mala idea, le va a caer mal en el estomago." << endl;
        puntos -= 1;
        break;
    case 2:
        cout << "A mi no me gusta Wendys." << endl;
        puntos -= 1;
        break;
    case 3:
        cout << "Fuimos a Tacobell y comimos burritos, le gusto mucho." << endl;
        puntos += 1;
        fueATacobell = true;
        break;
    default:
        cout << "Opcion no valida." << endl;
        break;
    }

    // Segunda decision
    cout << "Luego decidimos que hacer despues de comer." << endl;
    cout << "A donde deberiamos ir?" << endl;
    cout << "1. Parque Cuscatlan" << endl;
    cout << "2. Al evento de su hermano" << endl;
    cout << "3. BINAES" << endl;
    cout << "Selecciona una opcion (1-3): ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Estaba haciendo mucho calor, y nos tocaba caminar bastante." << endl;
        puntos -= 1;
        break;
    case 2:
        if (fueATacobell == true)
        {
            cout << "Iba a sentirse muy feliz por ver a su hermano." << endl;
            puntos += 1;
            fueAlEvento = true;
        }
        break;
    case 3:
        cout << "No nos divertimos mucho ahi." << endl;
        puntos -= 1;
        break;
    default:
        cout << "Opcion no valida." << endl;
        break;
    }

    // Si fuimos al evento luego de Tacobell, hay que ordenar algo para sentarse
    if (fueAlEvento == true)
    {
        cout << "Para poder sentarnos en el evento de su hermano, teniamos que ordenar algo para poder sentarnos." << endl;
        cout << "Que deberiamos pedir?" << endl;
        cout << "1. Limonada" << endl;
        cout << "2. Licuado" << endl;
        cout << "3. Soda" << endl;
        cout << "Selecciona una opcion (1-3): ";
        cin >> opcion;

        if (opcion == 1)
        {
            cout << "La limonada estaba acida, no le gusto mucho." << endl;
            puntos -= 1;
        }
        else if (opcion == 2)
        {
            cout << "El licuado estaba delicioso, fue una excelente eleccion." << endl;
            puntos += 1;
        }
        else if (opcion == 3)
        {
            cout << "La soda estaba muy dulce para ella." << endl;
            puntos -= 1;
        }
        else
        {
            cout << "No pediste nada. Nos toco quedarnos de pie." << endl;
            puntos -= 2;
        }
    }

    // Resultado final
    cout << "Puntaje final del dia: " << puntos << endl;

    if (puntos >= 3)
    {
        cout << "Fue un dia excelente para nosotros" << endl;
    }
    else if (puntos > 0)
    {
        cout << "El dia fue aceptable, pero pudo ser mejor." << endl;
    }
    else
    {
        cout << "Probablemente no va a querer repetir ese plan." << endl;
    }

    return 0;
}   