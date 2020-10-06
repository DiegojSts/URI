/*
A lavanderia DigitalLaundry lava roupa por quilo. Ela cobra dos seus clientes R$ 5,00 por cada quilo de roupa suja. 
Atualmente, eles usam um caderninho e uma calculadora para descobrir o valor que cada cliente tem a pagar. Precisamos 
automatizar essa empresa!

Escreva uma função calculaValorDevido

function calculaValorDevido(pesoDaRoupaSuja) {
    …
}

A função recebe como parâmetro o peso de roupa suja (em quilos) e deve retornar o valor a ser cobrado do cliente.

Dicas:
Lembre de retornar pesoDaRoupaSuja * 5, sendo que 5 é o valor que o cliente deve pagar para cada quilo de roupa suja a 
ser lavada.
Lembre que em número decimal em javascript utilizamos ponto ao invés de vírgula.

*/

function calculaValorDevido(pesoDaRoupaSuja) {
    return pesoDaRoupaSuja * 5
}