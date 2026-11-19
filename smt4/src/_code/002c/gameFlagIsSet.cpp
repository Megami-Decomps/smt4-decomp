/* NON_MATCHING: retail returns the shifted constant 1 from r1 (movne r0, r1) and puts the shift count in r3; the build
 * returns movne r0, #1 with the count in r2 (smt4a twin FUN_003e44ec has the build's form, so the smt4 source differs). */
#include "common.h"
#include "gamedata/GameDataAccess_VariantE.h"

extern "C" {

u8 *gameGetFlagBlock(void);

/* Tests bit `index` of the flag bitmap returned by gameGetFlagBlock. */
bool gameFlagIsSet(u32 index)
{
    u8 *flags = gameGetFlagBlock();
    if (flags[index / 8] & (1 << (index % 8)))
        return true;
    return false;
}

} /* extern "C" */
