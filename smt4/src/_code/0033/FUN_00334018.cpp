#include "shard/PadState.h"

extern "C" {

extern PadState *gameGetPlayerData(void);

/* Sets bit `bit` of the pad's halfword at +0x72. */
void FUN_00334018(u32 bit)
{
    PadState *pad = gameGetPlayerData();
    u16 value = pad->unk72;

    pad->unk72 = value | (u16)(1 << (bit & 0xff));
}

} /* extern "C" */
