/* Returns the value at +0x0C of the global state. */
#include "common.h"

extern "C" {

typedef struct State005c0aa0 {
    /* 0x00 */ u8 unk00[0x0c];
    /* 0x0C */ u32 value;
} State005c0aa0;

extern State005c0aa0 g_nngxState;

u32 FUN_00170348(void)
{
    return g_nngxState.value;
}

}
