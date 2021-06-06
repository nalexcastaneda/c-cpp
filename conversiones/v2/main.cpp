#include <ctype.h>
#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "convert.h"

void empty_stdin(void) {
    int c = getchar();

    while (c != '\n' && c != EOF)
        c = getchar();
}
//Limpiar pantalla de acuerdo a OS
void clear() {
#ifdef linux
    system("clear");
#endif
#ifdef _WIN32
    system("cls");
#endif
}

int main() {
    clear();
    int conv, med;
    printf("--- Calculadora de conversiones ----\n");
menu_principal:
    printf("- Elige el tipo de conversion que deseas de la siguiente lista.\n");
    printf(
        "\t1. Distancia: in-cm, cm-in, ft-m, m-ft\n"
        "\t2. Volumen: L-gal, gal-L, fl oz-ml, ml-fl oz\n"
        "\t3. Masa: Oz-gm, gm-Oz, Lb-kg, kg-lb\n"
        "\t4. Temperatura: F-C, C-F\n"
        "> Elige una opcion: ");
    scanf("%d", &conv);
    switch (conv) {
        //Conversiones de Distancia: in-cm, cm-in, ft-m, m-ft\n
        case 1:
            int opcion;
        sub1:
            clear();
            printf("-- Distancia --\n");
            printf(
                "- Elige la medida a convertir:\n"
                "\t1. in-cm\n"
                "\t2. cm-in\n"
                "\t3. ft-m\n"
                "\t4. m-ft\n"
                "\t5. Menu principal\n"
                "> Elegir medida: ");
            scanf("%d", &med);
            if (med == 5) {
                clear();
                goto menu_principal;
            }

            switch (med) {
                float res;
                case 1:
                    do {
                        clear();
                        float in;
                        printf("-- Convertir de in-cm --\n");
                        printf("> Introduce el valor en pulgadas (in): ");
                        scanf("%f", &in);
                        res = in2cm(in);
                        printf("%.2f pulgadas equivale a %.2f centimetros.", in, res);
                        printf(
                            "\nEscribe la opción que deseas a continuación:"
                            "\n\t1. Menu principal"
                            "\n\t2. Realizar otra conversión de distancia"
                            "\n\t3. Realizar otra conversión de in-cm"
                            "\n\t4. Salir"
                            "\n> Elige una opción: ");
                        scanf("%d", &opcion);
                        if (opcion == 1) {
                            clear();
                            goto menu_principal;
                        } else if (opcion == 2) {
                            goto sub1;
                        } else if (opcion == 4) {
                            goto exit;
                        }
                    } while (opcion == 3);
                    break;
                case 2:
                    do {
                        clear();
                        float cm;
                        printf("-- Convertir de cm-in --\n");
                        printf("> Introduce el valor en centimetros (cm): ");
                        scanf("%f", &cm);
                        res = cm2in(cm);
                        printf("%.2f centimetros equivale a %.2f pulgadas.", cm, res);
                        printf(
                            "\nEscribe la opción que deseas a continuación:"
                            "\n\t1. Menu principal"
                            "\n\t2. Realizar otra conversión de distancia"
                            "\n\t3. Realizar otra conversión de cm-in"
                            "\n\t4. Salir"
                            "\n> Elige una opción: ");
                        scanf("%d", &opcion);
                        if (opcion == 1) {
                            clear();
                            goto menu_principal;
                        } else if (opcion == 2) {
                            goto sub1;
                        } else if (opcion == 4) {
                            goto exit;
                        }
                    } while (opcion == 3);

                    break;
                case 3:
                    do {
                        clear();
                        float ft;
                        printf("-- Convertir de ft-m --\n");
                        printf("> Introduce el valor en pies (ft): ");
                        scanf("%f", &ft);
                        res = ft2m(ft);
                        printf("%.2f pies equivale a %.2f metros.", ft, res);
                        printf(
                            "\nEscribe la opción que deseas a continuación:"
                            "\n\t1. Menu principal"
                            "\n\t2. Realizar otra conversión de distancia"
                            "\n\t3. Realizar otra conversión de ft-m"
                            "\n\t4. Salir"
                            "\n> Elige una opción: ");
                        scanf("%d", &opcion);
                        if (opcion == 1) {
                            clear();
                            goto menu_principal;
                        } else if (opcion == 2) {
                            goto sub1;
                        } else if (opcion == 4) {
                            goto exit;
                        }
                    } while (opcion == 3);
                    break;
                case 4:
                    do {
                        clear();
                        float m;
                        printf("-- Convertir de m-ft --\n");
                        printf("> Introduce el valor en metros (m): ");
                        scanf("%f", &m);
                        res = m2ft(m);
                        printf("%.2f metros equivale a %.2f pies.", m, res);
                        printf(
                            "\nEscribe la opción que deseas a continuación:"
                            "\n\t1. Menu principal"
                            "\n\t2. Realizar otra conversión de distancia"
                            "\n\t3. Realizar otra conversión de m-ft"
                            "\n\t4. Salir"
                            "\n> Elige una opción: ");
                        scanf("%d", &opcion);
                        if (opcion == 1) {
                            clear();
                            goto menu_principal;
                        } else if (opcion == 2) {
                            goto sub1;
                        } else if (opcion == 4) {
                            goto exit;
                        }
                    } while (opcion == 3);
                    break;
                default:
                    clear();
                    printf(
                        "Opcion invalida\n"
                        "Regresando al menu principal...\n");
                    goto menu_principal;
                    break;
            }
            break;
        //Conversiones de Volumen: L-gal, gal-L, fl oz-ml, ml-fl oz
        case 2:
        sub2:
            clear();
            printf("-- Volumen --\n");
            printf(
                "Elige la medida a convertir:\n"
                "\t1. L-gal\n"
                "\t2. gal-L\n"
                "\t3. fl oz-ml\n"
                "\t4. ml-fl oz\n"
                "\t5. Menu principal\n"
                "> Elegir medida: ");
            scanf("%d", &med);
            if (med == 5) {
                clear();
                goto menu_principal;
            }
            switch (med) {
                float res;
                case 1:
                    do {
                        clear();
                        float l;
                        printf("-- Convertir de L-gal --\n");
                        printf("> Introduce el valor en litros (l): ");
                        scanf("%f", &l);
                        res = l2gal(l);
                        printf("%.2f litros equivale a %.2f galones.", l, res);
                        printf(
                            "\nEscribe la opción que deseas a continuación:"
                            "\n\t1. Menu principal"
                            "\n\t2. Realizar otra conversión de volumen"
                            "\n\t3. Realizar otra conversión de L-gal"
                            "\n\t4. Salir"
                            "\n> Elige una opción: ");
                        scanf("%d", &opcion);
                        if (opcion == 1) {
                            clear();
                            goto menu_principal;
                        } else if (opcion == 2) {
                            goto sub2;
                        } else if (opcion == 4) {
                            goto exit;
                        }
                    } while (opcion == 3);
                    break;
                case 2:
                    do {
                        clear();
                        float gal;
                        printf("-- Convertir de gal-L --\n");
                        printf("> Introduce el valor en galones (gal): ");
                        scanf("%f", &gal);
                        res = gal2l(gal);
                        printf("%.2f galones equivale a %.2f litros.", gal, res);
                        printf(
                            "\nEscribe la opción que deseas a continuación:"
                            "\n\t1. Menu principal"
                            "\n\t2. Realizar otra conversión de volumen"
                            "\n\t3. Realizar otra conversión de gal-L"
                            "\n\t4. Salir"
                            "\n> Elige una opción: ");
                        scanf("%d", &opcion);
                        if (opcion == 1) {
                            clear();
                            goto menu_principal;
                        } else if (opcion == 2) {
                            goto sub2;
                        } else if (opcion == 4) {
                            goto exit;
                        }
                    } while (opcion == 3);
                    break;
                case 3:
                    do {
                        clear();
                        float floz;
                        printf("-- Convertir de fl oz-ml --\n");
                        printf("> Introduce el valores en onzas liquidas (fl oz): ");
                        scanf("%f", &floz);
                        res = floz2ml(floz);
                        printf("%.2f onzas liquidas equivale a %.2f mililitros.", floz, res);
                        printf(
                            "\nEscribe la opción que deseas a continuación:"
                            "\n\t1. Menu principal"
                            "\n\t2. Realizar otra conversión de volumen"
                            "\n\t3. Realizar otra conversión de fl oz-ml"
                            "\n\t4. Salir"
                            "\n> Elige una opción: ");
                        scanf("%d", &opcion);
                        if (opcion == 1) {
                            clear();
                            goto menu_principal;
                        } else if (opcion == 2) {
                            goto sub2;
                        } else if (opcion == 4) {
                            goto exit;
                        }
                    } while (opcion == 3);
                    break;
                case 4:
                    do {
                        clear();
                        float ml;
                        printf("-- Convertir de ml-fl oz --\n");
                        printf("> Introduce el valor en mililitros(ml): ");
                        scanf("%f", &ml);
                        res = ml2floz(ml);
                        printf("%.2f mililitros equivale a %.2f onzas liquidas.", ml, res);
                        printf(
                            "\nEscribe la opción que deseas a continuación:"
                            "\n\t1. Menu principal"
                            "\n\t2. Realizar otra conversión de volumen"
                            "\n\t3. Realizar otra conversión de ml-fl oz"
                            "\n\t4. Salir"
                            "\n> Elige una opción: ");
                        scanf("%d", &opcion);
                        if (opcion == 1) {
                            clear();
                            goto menu_principal;
                        } else if (opcion == 2) {
                            goto sub2;
                        } else if (opcion == 4) {
                            goto exit;
                        }
                    } while (opcion == 3);
                    break;
                default:
                    clear();
                    printf(
                        "Opcion invalida\n"
                        "Regresando al menu principal...\n");
                    goto menu_principal;
                    break;
            }
            break;
        //Conversiones de Masa: Oz-gm, gm-Oz, Lb-kg, kg-lb
        case 3:
        sub3:
            clear();
            printf("-- Masa --");
            printf(
                "Elige la medida a convertir:\n"
                "\t1. Oz-gm\n"
                "\t2. gm-Oz\n"
                "\t3. Lb-kg\n"
                "\t4. kg-lb\n"
                "\t5. Menu principal\n"
                "> Elegir medida: ");
            scanf("%d", &med);
            if (med == 5) {
                clear();
                goto menu_principal;
            }
            switch (med) {
                float res;
                case 1:
                    do {
                        clear();
                        float oz;
                        printf("-- Convertir de Oz-gm --\n");
                        printf("> Introduce el valor en Onzas (oz): ");
                        scanf("%f", &oz);
                        res = oz2gm(oz);
                        printf("%.2f onzas equivale a %.2f gramos.", oz, res);
                        printf(
                            "\nEscribe la opción que deseas a continuación:"
                            "\n\t1. Menu principal"
                            "\n\t2. Realizar otra conversión de masa"
                            "\n\t3. Realizar otra conversión de Oz-gm)"
                            "\n\t4. Salir"
                            "\n> Elige una opción: ");
                        scanf("%d", &opcion);
                        if (opcion == 1) {
                            clear();
                            goto menu_principal;
                        } else if (opcion == 2) {
                            goto sub3;
                        } else if (opcion == 4) {
                            goto exit;
                        }
                    } while (opcion == 3);
                    break;
                case 2:
                    do {
                        clear();
                        float gm;
                        printf("-- Convertir de gm-Oz --\n");
                        printf("> Introduce el valor en gramos (gramos): ");
                        scanf("%f", &gm);
                        res = gm2oz(gm);
                        printf("%.2f gramos equivale a %.2f onzas.", gm, res);
                        printf(
                            "\nEscribe la opción que deseas a continuación:"
                            "\n\t1. Menu principal"
                            "\n\t2. Realizar otra conversión de masa"
                            "\n\t3. Realizar otra conversión de gm-Oz"
                            "\n\t4. Salir"
                            "\n> Elige una opción: ");
                        scanf("%d", &opcion);
                        if (opcion == 1) {
                            clear();
                            goto menu_principal;
                        } else if (opcion == 2) {
                            goto sub3;
                        } else if (opcion == 4) {
                            goto exit;
                        }
                    } while (opcion == 3);
                    break;
                case 3:
                    do {
                        clear();
                        float lb;
                        printf("-- Convertir de Lb-kg --\n");
                        printf("> Introduce el valor en libras (lb): ");
                        scanf("%f", &lb);
                        res = lb2kg(lb);
                        printf("%.2f libras equivale a %.2f kilogramos.", lb, res);
                        printf(
                            "\nEscribe la opción que deseas a continuación:"
                            "\n\t1. Menu principal"
                            "\n\t2. Realizar otra conversión de masa"
                            "\n\t3. Realizar otra conversión de Lb-kg"
                            "\n\t4. Salir"
                            "\n> Elige una opción: ");
                        scanf("%d", &opcion);
                        if (opcion == 1) {
                            clear();
                            goto menu_principal;
                        } else if (opcion == 2) {
                            goto sub3;
                        } else if (opcion == 4) {
                            goto exit;
                        }
                    } while (opcion == 3);
                    break;
                case 4:
                    do {
                        clear();
                        float kg;
                        printf("-- Convertir de kg-lb --\n");
                        printf("> Introduce el valor en kilogramos (kg): ");
                        scanf("%f", &kg);
                        res = kg2lb(kg);
                        printf("%.2f kilogramos equivale a %.2f libras.", kg, res);
                        printf(
                            "\nEscribe la opción que deseas a continuación:"
                            "\n\t1. Menu principal"
                            "\n\t2. Realizar otra conversión de masa"
                            "\n\t3. Realizar otra conversión de kg-lb"
                            "\n\t4. Salir"
                            "\n> Elige una opción: ");
                        scanf("%d", &opcion);
                        if (opcion == 1) {
                            clear();
                            goto menu_principal;
                        } else if (opcion == 2) {
                            goto sub3;
                        } else if (opcion == 4) {
                            goto exit;
                        }
                    } while (opcion == 3);
                    break;
                default:
                    clear();
                    printf(
                        "Opcion invalida\n"
                        "Regresando al menu principal...\n");
                    goto menu_principal;
                    break;
            }
            break;
        //Conversiones de Temperatura: F-C, C-F
        case 4:
        sub4:
            clear();
            printf("-- Temperatura --\n");
            printf(
                "Elige la medida a convertir:\n"
                "\t1. F-C\n"
                "\t2. C-F\n"
                "\t3. Menu principal\n"
                "Elegir medida: ");
            scanf("%d", &med);
            if (med == 3) {
                clear();
                goto menu_principal;
            }
            switch (med) {
                float res;
                case 1:
                    do {
                        clear();
                        float f;
                        printf("-- Convertir de F-C --\n");
                        printf("> Introduce el valor en Farenheit(F): ");
                        scanf("%f", &f);
                        res = f2c(f);
                        printf("%.2f Farenheit equivale a %.2f centigrados.", f, res);
                        printf(
                            "\nEscribe la opción que deseas a continuación:"
                            "\n\t1. Menu principal"
                            "\n\t2. Realizar otra conversión de temperatura"
                            "\n\t3. Realizar otra conversión de F-C"
                            "\n\t4. Salir"
                            "\n> Elige una opción: ");
                        scanf("%d", &opcion);
                        if (opcion == 1) {
                            clear();
                            goto menu_principal;
                        } else if (opcion == 2) {
                            goto sub4;
                        } else if (opcion == 4) {
                            goto exit;
                        }
                    } while (opcion == 3);
                    break;
                case 2:
                    do {
                        clear();
                        float c;
                        printf("-- Convertir de C-F --\n");
                        printf("> Introduce el valor en centigrados(C): ");
                        scanf("%f", &c);
                        res = c2f(c);
                        printf("%.2f centigrados equivale a %.2f farenheit", c, res);
                        printf(
                            "\nEscribe la opción que deseas a continuación:"
                            "\n\t1. Menu principal"
                            "\n\t2. Realizar otra conversión de temperatura"
                            "\n\t3. Realizar otra conversión de C-F"
                            "\n\t4. Salir"
                            "\n> Elige una opción: ");
                        scanf("%d", &opcion);
                        if (opcion == 1) {
                            clear();
                            goto menu_principal;
                        } else if (opcion == 2) {
                            goto sub4;
                        } else if (opcion == 4) {
                            goto exit;
                        }
                    } while (opcion == 3);
                    break;
                default:
                    clear();
                    printf(
                        "Opcion invalida\n"
                        "Regresando al menu principal...\n");
                    goto menu_principal;
                    break;
            }
            break;
        //Invalido
        default:
            clear();
            printf(
                "Opcion invalida\n"
                "Regresando al menu principal...\n");
            goto menu_principal;
            return 0;
            break;
    }
exit:
    return 0;
}