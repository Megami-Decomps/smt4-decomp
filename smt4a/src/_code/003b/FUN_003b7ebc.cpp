#include "common.h"

extern "C" {
extern void *g_btlPartnerAttack;
void FUN_00412234(void *attack);
}

extern "C" s32 FUN_003b7ebc(void)
{
    FUN_00412234(g_btlPartnerAttack);
    return 1;
}
