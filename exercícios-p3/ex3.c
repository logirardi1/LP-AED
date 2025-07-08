int letra(char c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int vogal(char c) {
    char v = c;
    if (c >= 'A' && c <= 'Z') v = c + 32;
    return (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u');
}

int consoante(char c) {
    return (letra(c) && !vogal(c));
}