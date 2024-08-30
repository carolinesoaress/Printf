# ft_printf

Este projeto envolve a reimplementação da função `printf` da biblioteca padrão da linguagem C (libc). A versão criada segue o comportamento da função original, com exceção do gerenciamento de buffer, e suporta as seguintes conversões:

## Conversões Suportadas

| Tipo | Descrição |
|------|-----------|
| `%c` | Imprime um único caractere. |
| `%s` | Imprime uma cadeia de caracteres (string), conforme a convenção C. |
| `%p` | Imprime o valor de um ponteiro `void *` no formato hexadecimal. |
| `%d` | Imprime um número decimal (base 10). |
| `%i` | Imprime um número inteiro na base 10. |
| `%u` | Imprime um número decimal sem sinal (base 10). |
| `%x` | Imprime um número no formato hexadecimal (base 16) em letras minúsculas. |
| `%X` | Imprime um número no formato hexadecimal (base 16) em letras maiúsculas. |
| `%%` | Imprime um sinal de porcentagem (`%`). |

## Objetivo do Projeto

O objetivo principal do projeto é recriar a funcionalidade do `printf` com foco na precisão e na conformidade com o comportamento original da função. A função `ft_printf` desenvolvida deve ser capaz de formatar e imprimir dados de acordo com as especificações acima, mantendo a flexibilidade e utilidade da função original da libc.

## Como Usar

1. **Compilação:**
   Compile o projeto usando um compilador C, como o GCC. Por exemplo:

   ```sh
   gcc -Wall -Wextra -Werror -o ft_printf ft_printf.c

Integração: Inclua ft_printf no seu projeto e utilize-o da mesma forma que utilizaria a função printf padrão.

Exemplos de Uso:

ft_printf("Caractere: %c\n", 'A');
ft_printf("String: %s\n", "Hello, World!");
ft_printf("Ponteiro: %p\n", ptr);
ft_printf("Número Decimal: %d\n", 42);


Considerações Finais
Este projeto não só aprofunda a compreensão da função printf, como também destaca a importância do tratamento de diferentes tipos de dados e formatações em C. A implementação da ft_printf é uma ferramenta poderosa para aqueles que desejam expandir seus conhecimentos em C e sistemas.
