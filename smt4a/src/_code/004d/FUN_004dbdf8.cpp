/* NON_MATCHING: saved-demon iteration and unlock checks use different loop exits and conditional sharing. */
/* Counts unlocked content demons that meet their save requirement and availability test. */
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "shard/W6_W6Match3_ContentWordList.h"

extern "C" {
void *gameGetSlotTable(void);
u32 dataTable5Count(void);
Entry0035dd74 *contentEntryFindById(u32 id);
u32 gameFlagIsSet(u32 flag);
u32 gameDataCopySaveEntry(u32 id, void *output);
u32 FUN_002a4b28(u16 id);

u16 FUN_004dbdf8(void)
{
    struct SaveEntryView {
        u8 unk00[0x36];
        u16 flags;
        u8 unk38[0x18];
    } saved;
    u16 count = 0;
    gameGetSlotTable();
    for (u16 index = 0; dataTable5Count() > index; ++index) {
        Entry0035dd74 *entry = contentEntryFindById(index);
        if (entry == NULL) {
            continue;
        }
        DevilRecordA *demon = FUN_00184310(entry->value);
        if (demon->unlockFlag != 0 && !gameFlagIsSet(demon->unlockFlag)) {
            continue;
        }
        if (demon->saveRequirement & 1) {
            u16 saveId = demon->saveRequirement & 0xFFFE ?
                demon->saveRequirement >> 1 : demon->id;
            if (!gameDataCopySaveEntry(saveId, &saved) || !(saved.flags & 0xFC)) {
                continue;
            }
        }
        if ((demon->flags & 1) && FUN_002a4b28(entry->value)) {
            ++count;
        }
    }
    return count;
}
}
