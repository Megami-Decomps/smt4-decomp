/* NON_MATCHING: only the placement of the second volume copy (vmov s1, s0) differs. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"

extern "C" {
u32 FUN_0014af98(s32 actor);
void FUN_001628c0(const char *voice, u32 enabled, u32 kind, u32 flags, f32 leftVolume, f32 rightVolume);

// Play the fixed battle voice cue at equal channel volumes.
void FUN_0047f288(void)
{
    s16 actor = *reinterpret_cast<s16 *>(btlGetMainState()->commandWords);
    f32 volume = 0.707f;
    FUN_001628c0("I001026", FUN_0014af98(actor), 2, 0, volume, volume);
}
}
