int triangulo(int a, int b, int c) {
    if (a >= b + c || b >= a + c || c >= a + b) return 0;
    if (a == b && b == c) return 1;
    if (a == b || a == c || b == c) return 2;
    return 3;
}