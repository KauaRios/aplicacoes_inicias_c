# Códigos da graduação em Ciência da Computação

Exemplos, exercícios e anotações das disciplinas de programação em C e C++.

## Onde encontrar cada conteúdo

- **[Aulas de C++](aulasc++/):** exemplos iniciais de lógica, condicionais e laços.
- **[Estrutura de dados](estrutura%20de%20dados/):** ponteiros, alocação dinâmica, listas, pilhas, filas, buscas e outros exemplos de aula.
- **[Exercícios](exercicios/):** exercícios variados e uma pasta dedicada a listas.
- **[Estudos](estudos/):** exemplos de revisão, incluindo árvores, buscas e ordenação.
- **[Software básico em C](softwarebasicoc/):** exemplos de linguagem, processos, threads e exercícios com arquivos.
- **[Materiais de apoio](materiais/):** imagens e anotações para consulta.

Dentro das pastas, os exemplos estão agrupados por assunto; alguns diretórios de estudos e exercícios que já tinham uma organização própria foram preservados.

As pastas `output` e `compilacoes` contêm executáveis gerados em estudos anteriores. Os arquivos-fonte estão nas pastas junto a elas.

## Como executar

Para compilar um exemplo em C com GCC, no terminal:

```sh
gcc caminho/do/arquivo.c -o /tmp/programa
/tmp/programa
```

Para C++, use `g++` no lugar de `gcc`. Alguns exemplos podem precisar de opções adicionais ou de arquivos de entrada. Por exemplo, os exercícios que usam `produtos.txt` devem ser executados a partir de `softwarebasicoc/exercicios/arquivos-e-dados/`, onde esse arquivo está guardado.

Mantido por Kauã Rios.
