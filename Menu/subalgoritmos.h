
// Exercicio 1
float somar_numeros(float num1, float num2) 
{
	float s;
	s = num1 + num2; 
	return s; 
}

// Exercicio 2
float calcular_media(float num1, float num2, float num3) 
{
	return (num1 + num2 + num3) / 3;
}

// 3. Crie uma funcao chamada 'calcular_delta()' que receba 3 valores por parâmetro e retorne o valor de delta.
float calcular_delta(float a, float b, float c)
{
	return b * b - 4 * a * c;
}

// 4. Crie uma funcao chamada 'prox_num()' que receba 1 valor por parâmetro e retorne o próximo numero.
int prox_num(int n)
{
	return n + 1;
}

// 5. Crie uma funcao chamada 'prox_num_par()' que receba 1 valor por parâmetro e retorne o próximo numero par.
int prox_num_par(int n)
{
	if (n % 2 == 0)
		return n + 2;
	else
		return n + 1;
}

// 6. Crie uma funcao chamada 'maior_2n()' que receba 2 valores por parâmetro e retorne o número de maior valor.
float maior_2n(float n1, float n2)
{
	if (n1 > n2)
		return n1;
	else
		return n2;
}

// 6. Crie uma funcao chamada 'menor_3n()' que receba 3 valores por parâmetro e retorne o número de menor valor.
float menor_3n(float n1, float n2, float n3)
{
	float menor = n1;
	if (n2 < menor)
		menor = n2;
	if (n3 < menor)
		menor = n3;
	return menor;
}