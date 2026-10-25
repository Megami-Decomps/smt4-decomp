#include "battle/BtlMainAccess.h"

extern "C" {

struct Preset { u8 unk00[0x50]; u64 mask; };
extern Preset g_btlCandidateMasks;
void scrSetResult(s32 value);

s32 scrCommTestBattleMaskClear(void)
{
    scrSetResult((btlGetMainState()->stateFlags64.bits & g_btlCandidateMasks.mask) == 0);
    return 1;
}

} /* extern "C" */
