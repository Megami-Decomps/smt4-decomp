#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

/* The battle-state bits this command sets (g_battleMaskPresets + 0x50; the object has no size yet). */
extern u64 DAT_00570dc8;
void sysPlaySe(s32 sound);

/* Script command: sets the preset bits in the battle state's flags and plays sound effect 223. */
s32 FUN_0035f5a8(void)
{
    BtlMainStateA *state = btlGetMainState();
    state->stateFlags64.bits |= DAT_00570dc8;
    sysPlaySe(223);
    return 1;
}

} /* extern "C" */
