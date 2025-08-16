Repositório criado para entrega de trabalhos determinados pela Estácio

# Super Trunfo - Cidades do Brasil 🃏🌎

## Descrição

Este projeto implementa uma versão simples do clássico jogo **Super Trunfo**, com cartas representando cidades brasileiras. Cada carta possui atributos como população, área, PIB, número de pontos turísticos, densidade populacional e PIB per capita, que são utilizados para comparar as cartas e determinar qual vence.

O código é escrito em **C** e permite cadastrar duas cartas e exibir suas informações, além de realizar comparações automáticas entre os atributos.

---

## Funcionalidades

- Cadastro de **duas cartas** de cidades brasileiras.
- Registro de atributos detalhados:
  - Estado
  - Código da carta
  - Nome da cidade
  - População
  - Área (km²)
  - PIB (bilhões)
  - Número de pontos turísticos
  - Densidade populacional
  - PIB per capita
- Cálculo de um atributo especial chamado **Super Poder**, que combina os outros atributos.
- Comparação automática das cartas em todos os atributos com indicação do vencedor.

---

## Como usar

### Passo 1: Clonar o repositório

```bash
git clone https://github.com/seu-usuario/super-trunfo.git
```

### Passo 2: Compilar o código

```bash
gcc super_trunfo.c -o super_trunfo
```

### Passo 3: Executar o programa

```bash
./super_trunfo
```

### Passo 4: Seguir as instruções

Digite os dados das cidades conforme solicitado pelo programa.

---

## Exemplo de execução

```
===========================================
         SUPER TRUNFO - CIDADES BRASIL
===========================================
Bem-vindo(a) ao cadastro de cartas do jogo!

Neste sistema, você irá registrar as informações
de duas cidades brasileiras para compor as cartas
do nosso Super Trunfo geográfico 🌍🃏

Basta preencher os dados solicitados abaixo 👇
...
Cadastro concluído com sucesso! ✅

Comparação de Cartas:
População, se 0 carta 2 vence, se 1 carta 1 vence: 1
Área, se 0 carta 2 vence, se 1 carta 1 vence: 0
PIB, se 0 carta 2 vence, se 1 carta 1 vence: 1
...
```

---

## Observações

- O programa utiliza `fgets` para ler nomes de cidades e `scanf` para outros dados. É importante digitar corretamente os valores solicitados.
- O cálculo de **Super Poder** é uma soma ponderada de todos os atributos da carta, incluindo densidade populacional e PIB per capita.
- Este projeto é uma ótima base para expandir o jogo, adicionar mais cartas ou implementar um sistema de comparação completo entre múltiplas cartas.
- Em aula foi determinado a criação simples do script e que não poderiamos utilizar recursos avançados, como funções, arrays, structs, etc.
---

## Compatibilidade

- **Linux / Mac:** compilação com `gcc` ou `clang`.
- **Windows:** usar o `MinGW` ou o terminal do WSL para compilar.

---

## Licença

Este projeto está licenciado sob a **MIT License**. Consulte o arquivo [LICENSE](LICENSE) para mais detalhes.

