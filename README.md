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

- ft_printf("Caractere: %c\n", 'A');
- ft_printf("String: %s\n", "Hello, World!");
- ft_printf("Ponteiro: %p\n", ptr);
- ft_printf("Número Decimal: %d\n", 42);


## Considerações Finais

O projeto `ft_printf` oferece uma oportunidade valiosa para aprofundar a compreensão da função `printf` e seu comportamento detalhado. Reimplementar a `printf` da biblioteca padrão envolve:

- **Compreensão Profunda de Formatadores:** A necessidade de lidar com diferentes especificadores de formato (`%c`, `%s`, `%d`, etc.) exige um entendimento detalhado de como os dados devem ser formatados e apresentados. Isso ajuda a desenvolver uma habilidade crítica na manipulação de diferentes tipos de dados e na implementação de conversões precisas.

- **Gerenciamento de Buffers:** Implementar o gerenciamento de buffers, apesar de ser uma diferença com a função original, reforça a importância de entender a alocação e manipulação eficiente de memória em C. Isso é crucial para otimizar o desempenho e evitar vazamentos de memória.

- **Tratamento de Erros e Robustez:** Desenvolver uma função que deve funcionar corretamente em várias condições e com diferentes entradas ensina a importância de tratar erros e garantir a robustez do código. A função deve ser capaz de lidar com casos inesperados sem falhar.

- **Flexibilidade e Utilidade:** A `ft_printf` deve manter a flexibilidade e utilidade da função original, o que demonstra a importância de criar soluções que não só funcionem corretamente, mas também sejam práticas e adaptáveis a diferentes contextos.

Esse projeto não só aprofunda seu conhecimento na função `printf`, mas também oferece uma base sólida para entender como implementar funções de formatação complexas e gerenciar recursos de forma eficaz em C. A experiência adquirida ao criar a `ft_printf` é um grande passo para aprimorar habilidades em C e em programação de sistemas.

