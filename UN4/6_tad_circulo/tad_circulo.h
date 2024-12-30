/**
 * @file tad_circulo.h
 * @brief Arquivo de definição do TAD Círculo.
 * 
 * Este arquivo define o tipo abstrato de dados (TAD) para manipulação de círculos,
 * incluindo sua representação e as operações básicas disponíveis.
 */

// Definição de tipo para o TAD Círculo
typedef struct {
    float x, y;  /**< Coordenadas do centro do círculo */
    float raio;  /**< Raio do círculo */
} Circulo;

/**
 * @brief Inicializa os valores de um círculo.
 * 
 * Esta função atribui valores ao centro e ao raio de um círculo.
 * 
 * @param c Ponteiro para a estrutura do círculo que será inicializada.
 * @param x Coordenada X do centro do círculo.
 * @param y Coordenada Y do centro do círculo.
 * @param raio Valor do raio do círculo.
 */
void inicializa(Circulo *c, float x, float y, float raio);

/**
 * @brief Calcula a área de um círculo.
 * 
 * Esta função retorna a área de um círculo com base em seu raio.
 * Fórmula: área = π * raio²
 * 
 * @param c Ponteiro para a estrutura do círculo.
 * @return Área do círculo.
 */
float calculaArea(Circulo *c);