//código antigo não tava lendo a altura

inicio
ler nome
ler sexo
ler altura
se sexo = "M" então
    peso_ideal <- (72.7 * altura) - 58
senão
    peso_ideal <- (62.1 * altura) - 44.7
fim_se
escrever nome, peso_ideal
fim
