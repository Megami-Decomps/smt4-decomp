#include "gamedata/MapFlagRule.h"

extern "C" {
void gameFlagSetIndexedBit(s32 flag, s32 value);
void FUN_0037c7a8(s32 flag);
s32 dataTable2CType0Count(void);
s32 gameFlagBitsTest(s32 flag);
MapFlagRule *dataTable2CGetEntry(s32 index);

/* Clears active type-two flags in the requested table group and notifies their owner. */
void gameClearMapGroupFlags(s32 group)
{
    for (s32 i = 0; i < dataTable2CType0Count(); ++i) {
        MapFlagRule *rule = dataTable2CGetEntry(i);
        if (rule->group == -1) {
            return;
        }
        if (rule->group == group && rule->type == 2 && gameFlagBitsTest(rule->flag)) {
            gameFlagSetIndexedBit(rule->flag, 0);
            FUN_0037c7a8(rule->flag);
        }
    }
}
}
