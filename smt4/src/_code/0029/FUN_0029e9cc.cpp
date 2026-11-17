/* NON_MATCHING: only the address register of the g_gameDataBlocks load differs (retail keeps the global in r0 and computes id*5 before loading saveBlock into r2). */
#include "gamedata/NkmEnemyLookup.h"
#include "shard/GameDataBlocks.h"
#include "shard/W6_W6Match3_NameFormState.h"

extern "C" {

// Check whether this linked demon or any of its requirements is registered.
u16 FUN_0029e9cc(u16 id)
{
    if (id > 0x500) {
        return 0;
    }
    const NkmEnemyRecord *record = nkmEnemyFindById(id);
    if ((record->flags & 1) == 0) {
        return 0;
    }
    GameSaveData *save = g_gameDataBlocks.saveBlock;
    GameSavedItem *item = &save->body.items[id];
    u32 index = item->registrationFlags & 2;
    if (index != 0) {
        return 1;
    }
    for (; index < 3; ++index) {
        u32 linkedId = record->linkedIds[index];
        if (linkedId != 0) {
            GameSavedItem *linked = &save->body.items[linkedId];
            if (linked->registrationFlags & 2) {
                return 1;
            }
        }
    }
    return 0;
}
}
