/* NON_MATCHING: only the address register of the g_gameDataBlocks load differs (retail keeps the global in r0 and computes id*5 before loading saveBlock into r2). */
#include "gamedata/DevilRecord.h"
#include "shard/GameDataBlocks.h"

extern "C" {
DevilRecord *dataTable00FindById(u32 id);

// Check whether this linked demon or any of its requirements is registered.
u16 FUN_0029e9cc(u32 id)
{
    if (id > 0x500) {
        return 0;
    }
    const DevilRecord *record = dataTable00FindById(id);
    if ((record->links.linkFlags & 1) == 0) {
        return 0;
    }
    GameSaveData *save = g_gameDataBlocks.saveBlock;
    GameSavedItem *item = &save->items[id];
    u32 index = item->registration.registrationFlags & 2;
    if (index != 0) {
        return 1;
    }
    for (; index < 3; ++index) {
        u32 linkedId = record->requirements.linkedIds[index];
        if (linkedId != 0) {
            GameSavedItem *linked = &save->items[linkedId];
            if (linked->registration.registrationFlags & 2) {
                return 1;
            }
        }
    }
    return 0;
}
}
