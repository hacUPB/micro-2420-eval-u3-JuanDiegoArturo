#include <stdint.h>

#define PTA_PDOR (*(volatile uint32_t*)(PCC_BASE + PCC_PORTB_OFFSET))//Definido como puntero (DIRECCION DE MEMORIA) y luego se desreferencia para obtener el contenido

// 1

#define SET_BIT(reg, bit) ((reg) |= (1 << (bit)))

// 2

#define IS_ENABLED(PCC_BASE, PCC_OFFSET) ((PCC_BASE + PCC_OFFSET) & (1 << 31))

//3

#define TOGGLE_BIT(reg, bit) ((reg) ^= (1 << (bit)))








