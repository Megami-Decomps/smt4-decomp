/* NON_MATCHING: global-mask base and low-word registers are exchanged (retail r2/r3, compiled r3/r2). */
#include "battle/btlPartnerAttack.h"

struct PartnerFlagState {
    /* 0x0000 */ u8 unk0000[0x45a0];
    /* 0x45A0 */ u64 flags;
};

struct PartnerFlagMask {
    /* 0x000 */ u8 unk000[0x190];
    /* 0x190 */ u64 flags;
};

extern "C" {
extern PartnerFlagMask g_btlMain;
extern BtlPartnerAttackA* g_btlPartnerAttack;

// Permit the partner action only when a masked battle flag is set and state is 2.
u32 FUN_003efb18(const PartnerFlagState* state)
{
    if ((state->flags & g_btlMain.flags) == 0 || g_btlPartnerAttack->state != 2)
        return 0;
    return 1;
}
}
