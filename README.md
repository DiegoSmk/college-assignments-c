# Exercícios e Trabalhos da Faculdade (C)

Este repositório contém os exercícios e trabalhos realizados durante o curso de Engenharia de Software.

## Estrutura do repositório

- UN1: Atividade Prática

### Mensagens de Commit

- **Início de exercício ou trabalho**: `Iniciar exercício 1 da matéria 1`
- **Alteração de código**: `Corrigir erro de lógica no exercício 1`
- **Finalização de exercício ou trabalho**: `Finalizar exercício 1 da matéria 1`

### Fluxo de Trabalho

- Criar um branch para cada exercício ou trabalho:
  Antes de começar a trabalhar em um exercício ou tarefa, crie um novo branch:

```
git checkout -b UNx
```

- Fazer alterações e commits regularmente:
  Faça alterações no código e registre as modificações com commits frequentes:

```
git add .
git commit -m "Descrição do que foi feito"
```

- Subir as alterações para o repositório remoto:
  Quando terminar um exercício, envie as alterações para o repositório remoto:

```
git push origin UNx
```

- Mesclar com o branch principal:
  Após terminar o exercício e revisar o código, mescle o branch com o main:

```
git checkout main
git merge UNx
```

- Excluir o branch após a conclusão:
  Depois que o exercício ou trabalho for completado e mesclado, excluir o branch:

```
git branch -d UNx
```
