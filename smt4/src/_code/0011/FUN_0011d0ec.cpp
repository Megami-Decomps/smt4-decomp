#include "common.h"

extern "C" {

extern struct {
    u8 unk00;
    u8 unk01;
} g_nngxState;

void FUN_0011d0ec(void)
{
    g_nngxState.unk01 = 1;
}

} /* extern "C" */
