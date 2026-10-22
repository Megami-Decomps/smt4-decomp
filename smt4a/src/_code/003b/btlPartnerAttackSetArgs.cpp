#include "battle/btlPartnerAttack.h"

extern "C" {

extern BtlPartnerAttackA *g_btlPartnerAttack;

s32 scrGetArg(...);

/* Script command: stores its two arguments in the partner attack state. */
u32 btlPartnerAttackSetArgs(void)
{
    s32 arg0 = scrGetArg();
    s32 arg1 = scrGetArg(1);

    g_btlPartnerAttack->argument = arg0;
    g_btlPartnerAttack->selected = arg1;
    return 1;
}

} /* extern "C" */
