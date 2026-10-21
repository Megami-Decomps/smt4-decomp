#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {

struct Preset { u8 unk00[0x50]; u64 mask; };
extern Preset DAT_00570288;
void scrSetResult(s32 value);

s32 scrCommTestBattleMaskSet(void)
{
    scrSetResult((btlGetMainState()->mask & DAT_00570288.mask) != 0);
    return 1;
}

} /* extern "C" */
