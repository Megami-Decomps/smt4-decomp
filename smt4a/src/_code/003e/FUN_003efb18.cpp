#include "battle/btlPartnerAttack.h"
#include "battle/BtlGlobals.h"

struct PartnerFlagState {
    /* 0x0000 */ u8 unk0000[0x45a0];
    /* 0x45A0 */ u64 flags;
};


extern "C" {
extern BtlPartnerAttackA* g_btlPartnerAttack;

// Permit the partner action only when a masked battle flag is set and state is 2.
u32 FUN_003efb18(const PartnerFlagState* state)
{
    if ((state->flags & g_btlMain.selectionGate64.bits) != 0) {
        return g_btlPartnerAttack->state == 2;
    }
    return 0;
}
}
