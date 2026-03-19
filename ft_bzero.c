#include "libft.h"
//ira substitui um determinado n posicoes na memoria por 0 bites ou nulo, na segunda falamos
// mas vou colocar passo a passo como ira percorrer
// void *s e so uma foram de garantir que ele aceita qualquer tipo,int char etc
void	ft_bzero(void *s, size_t n)
{
    //criamos um usigned para garantir que e apenas 1 byte puro, pa ignorar sinais.
	unsigned char	*str;
	size_t			i;
    //igualamos as duas para comparar variaveis iguais por isso transformamos no unsigned
	str = (unsigned char *)s;
	i = 0;
    //preenchemos com 0 ou nulo no caso meti 0 so para ter o valor de 1 byt
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}