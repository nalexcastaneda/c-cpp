#include <stdio.h>
#include <stdlib.h>

//Funciones de conversion
float in2cm(float in) {
    float cm = 2.54;
    return in * cm;
}/*Pulgadas a Centimetros*/
float cm2in(float cm) {
    float in = 2.54;
    return cm / in;
}/*Centimetros a Pulgadas*/
float ft2m(float ft) {
    float m = 3.281;
    return ft / m;
}/*Pies a Metros*/
float m2ft(float m){
    float ft = 3.281;
    return m * ft;
}/*Metros a Pies*/
float l2gal(float l) {
    float gal = 3;
    return l / gal;
}/*Litros a Galones*/
float gal2l(float gal) {
    float l = 3;
    return gal * l;
}/*Galones a Litros*/
float floz2ml(float floz) {
    float ml = 29.574;
    return floz * ml;
}/*Onzas Liquidas a Mililitros*/
float ml2floz(float ml) {
    float floz = 29.574;
    return ml / floz;
}/*Mililitros a Onzas Liquidas*/
float oz2gm(float oz) {
    float gm = 28.35;
    return oz * gm;
}
float gm2oz(float gm) {
    float oz = 28.35;
    return gm * oz;
}
float lb2kg(float lb) {
    float kg = 2.205;
    return lb / kg;
}
float kg2lb(float kg) {
    float lb = 2.205;
    return kg * lb;
}
float f2c(float f){
    float c = (f - 32)*(5.f/9.f);/*Formula: (32°F − 32) × 5/9 = 0°C*/
    return c;
}
float c2f(float c){
    float f = (((c) * (9.f/5.f) ) + 32);/*Formula: (0°C × 9/5) + 32 = 32°F*/
    return f;
}
//Limpiar pantalla de acuerdo a OS
void clear(){
    #ifdef linux
        system("clear");
    #endif
    #ifdef _WIN32
        system("cls");
    #endif
}

int main()
{
    clear();
    int conv, med;
    printf("--- Calculadora de conversiones ----\n");
    printf("- Elige el tipo de conversion que deseas de la siguiente lista.\n");
    printf(
        "\t1. Distancia: in-cm, cm-in, ft-m, m-ft\n"
        "\t2. Volumen: L-gal, gal-L, fl oz-ml, ml-fl oz\n"
        "\t3. Masa: Oz-gm, gm-Oz, Lb-kg, kg-lb\n"
        "\t4. Temperatura: F-C, C-F\n"
        "> Elige una opcion: "
        );
    scanf("%d", &conv);
    switch (conv)
    {
    //Conversiones de Distancia: in-cm, cm-in, ft-m, m-ft\n
    case 1:
    clear();
        printf("-- Distancia --\n");
        printf(
            "- Elige la medida a convertir:\n"
            "\t1. in-cm\n"
            "\t2. cm-in\n"
            "\t3. ft-m\n"
            "\t4. m-ft\n"
            "> Elegir medida: "
            );
            scanf("%d", &med);
        switch (med)
        {
        float res;
        case 1:
            clear();
            float in;
            printf("-- Convertir de in-cm --\n");
            printf("> Introduce el valor en pulgadas (in): ");
            scanf("%f", &in);
            res = in2cm(in);
            printf("%.2f pulgadas equivale a %.2f centimetros.", in, res);
            break;
        case 2:
            clear();
            float cm;
            printf("-- Convertir de cm-in --\n");
            printf("> Introduce el valor en centimetros (cm): ");
            scanf("%f", &cm);
            res = cm2in(cm);
            printf("%.2f centimetros equivale a %.2f pulgadas.", cm, res);
            break;
        case 3:
            clear();
            float ft;
            printf("-- Convertir de ft-m --\n");
            printf("> Introduce el valor en pies (ft): ");
            scanf("%f", &ft);
            res = ft2m(ft);
            printf("%.2f pies equivale a %.2f metros.", ft, res);
            break;
        case 4:
            clear();
            float m;
            printf("-- Convertir de m-ft --\n");
            printf("> Introduce el valor en metros (m): ");
            scanf("%f", &m);
            res = m2ft(m);
            printf("%.2f metros equivale a %.2f pies.", m, res);
            break;
        default:
            break;
        }
        break;
    //Conversiones de Volumen: L-gal, gal-L, fl oz-ml, ml-fl oz
    case 2:
        clear();
        printf("-- Volumen --\n");
            printf(
            "Elige la medida a convertir:\n"
            "\t1. L-gal\n"
            "\t2. gal-L\n"
            "\t3. fl oz-ml\n"
            "\t4. ml-fl oz\n"
            "Elegir medida: "
            );
        scanf("%d", &med);
        switch (med)
        {
        float res;
        case 1:
            clear();
            float l;
            printf("-- Convertir de L-gal --\n");
            printf("> Introduce el valor en litros (l): ");
            scanf("%f", &l);
            res = l2gal(l);
            printf("%.2f litros equivale a %.2f galones.", l, res);
            break;
        case 2:
            clear();
            float gal;
            printf("-- Convertir de gal-L --\n");
            printf("> Introduce el valor en galones (gal): ");
            scanf("%f", &gal);
            res = gal2l(gal);
            printf("%.2f galones equivale a %.2f litros.", gal, res);
            break;
        case 3:
            clear();
            float floz;
            printf("-- Convertir de fl oz-ml --\n");
            printf("> Introduce el valores en onzas liquidas (fl oz): ");
            scanf("%f", &floz);
            res = floz2ml(floz);
            printf("%.2f onzas liquidas equivale a %.2f mililitros.", floz, res);
            break;
        case 4:
            clear();
            float ml;
            printf("-- Convertir de ml-fl oz --\n");
            printf("> Introduce el valor en mililitros(ml): ");
            scanf("%f", &ml);
            res = ml2floz(ml);
            printf("%.2f mililitros equivale a %.2f onzas liquidas.", ml, res);
            break;
        default:
            break;
        }
        break;
    //Conversiones de Masa: Oz-gm, gm-Oz, Lb-kg, kg-lb
    case 3:
        clear();
        printf("-- Masa --");
            printf(
            "Elige la medida a convertir:\n"
            "\t1. Oz-gm\n"
            "\t2. gm-Oz\n"
            "\t3. Lb-kg\n"
            "\t4. kg-lb\n"
            "Elegir medida: "
            );
        scanf("%d", &med);
        switch (med)
        {
        float res;
        case 1:
            clear();
            float oz;
            printf("-- Convertir de Oz-gm --\n");
            printf("> Introduce el valor en Onzas (oz): ");
            scanf("%f", &oz);
            res = oz2gm(oz);
            printf("%.2f onzas equivale a %.2f gramos.", oz, res);
            break;
        case 2:
            clear();
            float gm;
            printf("-- Convertir de gm-Oz --\n");
            printf("> Introduce el valor en gramos (gramos): ");
            scanf("%f", &gm);
            res = gm2oz(gm);
            printf("%.2f gramos equivale a %.2f onzas.", gm, res);
            break;
        case 3:
            clear();
            float lb;
            printf("-- Convertir de Lb-kg --\n");
            printf("> Introduce el valor en libras (lb): ");
            scanf("%f", &lb);
            res = lb2kg(lb);
            printf("%.2f libras equivale a %.2f kilogramos.", lb, res);
            break;
        case 4:
            clear();
            float kg;
            printf("-- Convertir de kg-lb --\n");
            printf("> Introduce el valor en kilogramos (kg): ");
            scanf("%f", &kg);
            res = kg2lb(kg);
            printf("%.2f kilogramos equivale a %.2f libras.", kg, res);
            break;
        default:
            break;
        }
        break;
    //Conversiones de Temperatura: F-C, C-F
    case 4:
        clear();
        printf("-- Temperatura --\n");
        printf(
            "Elige la medida a convertir:\n"
            "\t1. F-C\n"
            "\t2. C-F\n"
            "Elegir medida: "
            );
        scanf("%d", &med);
        switch (med)
        {
        float res;
        case 1:
            clear();
            float f;
            printf("-- Convertir de F-C --\n");
            printf("> Introduce el valor en Farenheit(F): ");
            scanf("%f", &f);
            res = f2c(f);
            printf("%.2f Farenheit equivale a %.2f centigrados.", f, res);
            break;
        case 2:
            clear();
            float c;
            printf("-- Convertir de C-F --\n");
            printf("> Introduce el valor en centigrados(C): ");
            scanf("%f", &c);
            res = c2f(c);
            printf("%.2f centigrados equivale a %.2f farenheit", c, res);
            break;
        default:
            break;
        }
        break;
    //Invalido
    default:
        printf("Opcion invalida\n");
        return -1;
        break;
    }
}