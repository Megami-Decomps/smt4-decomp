/* NON_MATCHING: map-base copying, bit-index temporaries, and compiler hint NOP placement differ. */
#include "shard/W6_W6Match2_AocTable23.h"
#include "shard/SaveWork.h"

extern "C" {
s32 dataTable23Type0CountWithAoc(void);
const Table23TriggerRecord *dataTable23Sub0GetEntry(u32 index);
MapTriggerFlagView *gameGetMapBlock(void);

/* Mark all table-23 triggers that reference the supplied group and id. */
void mapTriggerMarkTable23Matches(u32 group, u32 id)
{
    if (group == 0) {
        return;
    }
    for (s32 index = 0; index < dataTable23Type0CountWithAoc(); ++index) {
        const Table23TriggerRecord *entry = dataTable23Sub0GetEntry(index);
        if (entry->kind == -1) {
            return;
        }
        if ((entry->triggers[0].group == group && entry->triggers[0].id == id)
            || (entry->triggers[1].group == group && entry->triggers[1].id == id)
            || (entry->triggers[2].group == group && entry->triggers[2].id == id)) {
            MapTriggerFlagView *map = gameGetMapBlock();
            if (index >= 0) {
                map->flags[index / 32] |= 1U << (index % 32);
            }
        }
    }
}
}
