#include "common.h"

extern "C" {

typedef struct PartnerAttack {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 arg0;
    /* 0x20 */ s32 arg1;
} PartnerAttack;

extern PartnerAttack *g_btlPartnerAttack;

s32 scrGetArg(...);

/* Script command: stores its two arguments in the partner attack state. */
u32 FUN_003b7edc(void)
{
    s32 arg0 = scrGetArg();
    s32 arg1 = scrGetArg(1);

    g_btlPartnerAttack->arg0 = arg0;
    g_btlPartnerAttack->arg1 = arg1;
    return 1;
}

} /* extern "C" */
