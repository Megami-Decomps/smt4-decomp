#include "common.h"

struct PartnerAttack003b13e8 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 value;
};

extern "C" {

extern PartnerAttack003b13e8 *g_btlPartnerAttack;

s32 scrSetResult(s32 value);

/* Script command: returns the partner attack's value at 0x20. */
s32 FUN_003b13e8(void)
{
    scrSetResult(g_btlPartnerAttack->value);
    return 1;
}

} /* extern "C" */
