/* NON_MATCHING: retail preserves the volume in s16 across actor lookup; this source loads the constant afterward. */
#include "battle/btlMain.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
u32 FUN_0014af98(s32 actor);
void FUN_001628c0(const char *voice, u32 enabled, u32 kind, u32 flags, f32 leftVolume, f32 rightVolume);

// Play the fixed battle voice cue at equal channel volumes.
void FUN_0047f288(void)
{
    FUN_001628c0("I001026",
                 FUN_0014af98(*reinterpret_cast<s16 *>(btlGetMainState()->commandWords)),
                 2, 0, 0.707f, 0.707f);
}
}
