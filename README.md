# SISTEMA RH

Sistema de gerenciamento de funcionários desenvolvido em **C** como parte de um trabalho acadêmico da graduação em **Engenharia de Software**.

O projeto tem como objetivo aplicar conceitos fundamentais de programação, estruturas de dados, funções, estruturas de repetição, ordenação e manipulação de informações.

## Sobre o projeto

O **GestorRH** permite cadastrar informações de funcionários e gerar diferentes relatórios a partir dos dados armazenados.

Cada funcionário possui as seguintes informações:

* Nome
* Idade
* Tempo de empresa
* Sexo
* Setor
* Salário

A aplicação funciona atualmente através de um **menu no terminal**, permitindo ao usuário cadastrar os funcionários e acessar os relatórios disponíveis.

## Funcionalidades

### Cadastro

* Cadastro dos dados de 10 funcionários.
* Armazenamento das informações dos funcionários.

### Relatórios

O sistema possui os seguintes relatórios:

**2.1 — Quantidade de funcionários por sexo**

* Exibe a quantidade de funcionários do sexo masculino e feminino.

**2.2 — Funcionário mais novo e mais velho**

* Identifica o funcionário com menor idade.
* Identifica o funcionário com maior idade.

**2.3 — Média de idade por setor**

* Calcula a média de idade dos funcionários de cada setor.

**2.4 — Funcionários por ordem crescente de salário**

* Ordena os funcionários pelo salário.
* Exibe somente nome e idade, conforme solicitado no exercício.

**2.5 — Funcionários por sexo em ordem decrescente de idade**

* Separa os funcionários por sexo.
* Organiza cada grupo em ordem decrescente de idade.

## Menu do sistema

```text
0 - Sair

1 - Informar dados dos funcionários

2 - Relatórios
    2.1 - Quantidade de funcionários por sexo
    2.2 - Funcionário mais novo e mais velho
    2.3 - Média de idade por setor
    2.4 - Funcionários por ordem crescente de salário
    2.5 - Funcionários por sexo em ordem decrescente de idade
    2.6 - Retornar ao menu anterior
```

## Tecnologias utilizadas

* **C** — linguagem principal do projeto
* **Git** — controle de versão
* **GitHub** — armazenamento e gerenciamento do código-fonte

## Conceitos aplicados

O projeto foi desenvolvido com foco na aplicação prática de conceitos estudados durante a graduação, incluindo:

* Variáveis e tipos de dados
* Estruturas condicionais
* Estruturas de repetição
* Vetores
* `struct`
* Funções
* Manipulação de dados
* Ordenação de elementos
* Cálculo de médias
* Menus e interação com o usuário
* Organização e modularização do código

## Contexto acadêmico

Este projeto foi desenvolvido como parte de uma **atividade acadêmica da graduação em Engenharia de Software**, com o objetivo de praticar os fundamentos da linguagem C e desenvolver a capacidade de estruturar uma solução para um problema proposto.

Por se tratar de um projeto acadêmico, algumas funcionalidades e estruturas podem ser aprimoradas futuramente.

## Próximos passos

O projeto está em desenvolvimento e possui planos de evolução, incluindo:

* [ ] Criar uma interface visual para o sistema
* [ ] Melhorar a experiência de uso
* [ ] Permitir uma quantidade maior de funcionários
* [ ] Implementar armazenamento permanente dos dados
* [ ] Adicionar novos relatórios
* [ ] Melhorar a organização e modularização do código
* [ ] Avaliar a migração para uma aplicação com interface gráfica ou web

## Status

**Em desenvolvimento**

A versão atual possui funcionamento via terminal. Futuramente, o projeto será expandido com uma **interface visual**, tornando o sistema mais completo e acessível.

Projeto desenvolvido para fins acadêmicos no curso de **Engenharia de Software**.
