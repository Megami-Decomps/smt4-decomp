/* NON_MATCHING: The flattened HP members use a different addressing base and multiply-result register. */
#include "shard/W4_W4Match2_BtlUnits.h"
#include "battle/BtlMainAccess.h"
extern "C" {
s32 scrGetArg(u32);
void scrSetResult(s32);

u32 FUN_002f0388(void)
{
    s32 threshold = scrGetArg(0);
    for (s32 index = 0; index < 109; ++index) {
        BtlUnitEntry* unit = &btlGetMainStateExt()->units[index];
        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0) {
            s32 percent = unit->hp * 100 / unit->hpMax;
            if (percent >= threshold) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}
