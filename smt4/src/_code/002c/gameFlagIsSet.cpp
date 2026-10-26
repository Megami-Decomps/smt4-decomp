/* NON_MATCHING: retail keeps the constant 1 in r1 and returns it (movne r0, r1) with the shift count in r3; the build uses r3 for the 1, r2 for the count and movne r0, #1 (smt4a twin FUN_003e44ec has the build's form, so the smt4 source differs). */
#include "common.h"
#include "gamedata/GameDataAccess_VariantE.h"

extern "C" {

u8 *gameGetFlagBlock(void);

/* Tests bit `index` of the flag bitmap returned by gameGetFlagBlock. */
bool gameFlagIsSet(u32 index)
{
    u8 *flags = gameGetFlagBlock();
    s32 byte = index / 8;
    s32 bit = index % 8;
    return (flags[byte] & (1 << bit)) ? true : false;
}

} /* extern "C" */
