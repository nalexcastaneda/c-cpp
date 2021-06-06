//Funciones de conversion
float in2cm(float in) {
    float cm = 2.54;
    return in * cm;
} /*Pulgadas a Centimetros*/
float cm2in(float cm) {
    float in = 2.54;
    return cm / in;
} /*Centimetros a Pulgadas*/
float ft2m(float ft) {
    float m = 3.281;
    return ft / m;
} /*Pies a Metros*/
float m2ft(float m) {
    float ft = 3.281;
    return m * ft;
} /*Metros a Pies*/
float l2gal(float l) {
    float gal = 3;
    return l / gal;
} /*Litros a Galones*/
float gal2l(float gal) {
    float l = 3;
    return gal * l;
} /*Galones a Litros*/
float floz2ml(float floz) {
    float ml = 29.574;
    return floz * ml;
} /*Onzas Liquidas a Mililitros*/
float ml2floz(float ml) {
    float floz = 29.574;
    return ml / floz;
} /*Mililitros a Onzas Liquidas*/
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
float f2c(float f) {
    float c = (f - 32) * (5.f / 9.f); /*Formula: (32°F − 32) × 5/9 = 0°C*/
    return c;
}
float c2f(float c) {
    float f = (((c) * (9.f / 5.f)) + 32); /*Formula: (0°C × 9/5) + 32 = 32°F*/
    return f;
}