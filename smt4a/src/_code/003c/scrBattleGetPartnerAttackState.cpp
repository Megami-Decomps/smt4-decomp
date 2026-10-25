#include "battle/BtlMainAccess.h"
#include "battle/btlPartnerAttack.h"
#include "shard/Shard003C.h"

extern "C" {

extern BtlPartnerAttackA *g_btlPartnerAttack;
extern u8 FUN_003eb1cc(void *state);
extern void scrSetResult(u32 value);

/* Script command: result is the script object's value at +0x18 while FUN_003eb1cc accepts the battle state, else 2. */
u32 scrBattleGetPartnerAttackState(void)
{
    u32 value;

    if (FUN_003eb1cc(static_cast<void *>(btlGetMainState())) != 0) {
        value = g_btlPartnerAttack->state;
    } else {
        value = 2;
    }
    scrSetResult(value);
    return 1;
}

} /* extern "C" */
