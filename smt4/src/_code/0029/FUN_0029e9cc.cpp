/* NON_MATCHING: retail uses a separate saved-entry base adjustment and places the linked-entry loop tail after its success return. */
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
    u16 available = record->links.linkFlags & 1;
    if (available) {
        GameSaveData *save = g_gameDataBlocks.saveBlock;
        u32 index = save->items[id].registration.registrationFlags & 2;
        if (index == 0) {
            u32 linkedId;
            while ((linkedId = record->requirements.linkedIds[index]) == 0
                   || !(save->items[linkedId].registration.registrationFlags & 2)) {
                if (++index >= 3) {
                    return 0;
                }
            }
        }
        available = 1;
    }
    return available;
}
}
