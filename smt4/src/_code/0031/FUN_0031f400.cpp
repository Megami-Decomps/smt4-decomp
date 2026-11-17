#include "battle/BtlMainAccess.h"
#include "AsdSDK/AsdMemUtil.h"
#include "script/ScriptArgs.h"
#include "code/Code0024_Smt4.h"
#include "battle/BtlGlobals.h"

extern "C" {

#define ENTITY_COUNT 109

int randNextInRange(u32 range);

/* Collects the eligible other-group entities no stronger than the player's and reports the id of a random one (-1 if none). */
u32 FUN_0031f400(void)
{
    BtlEntry *candidates[ENTITY_COUNT];
    BtlEntry *player;
    u8 count;
    int i;

    player = btlMainFindEntryByListedId(btlGetMainState(), btlGetMainState()->playerCheck.checkId);
    memClear(candidates, sizeof(candidates));
    count = 0;
    i = 0;
    do {
        BtlEntry *entity = &btlGetMainState()->entries[i];
        u32 flags = entity->flags;

        if ((flags & 1) != 0 && (flags & 0x40) == 0 && (flags & 0x10) != 0 && entity->selectionIndex != player->selectionIndex
            && entity->data.level <= player->data.level && partyHasStoredDemon(entity->data.id) == 0 && entity->data.detail != NULL
            && (entity->data.detail->flags & 0x200) != 0 && player->data.id != entity->data.id) {
            candidates[count] = entity;
            count++;
        }
        i++;
    } while (i < ENTITY_COUNT);
    if (count == 0) {
        scrSetResult(-1);
    } else {
        scrSetResult(candidates[randNextInRange((count - 1) & 0xffff)]->ids[0]);
    }
    return 1;
}

} /* extern "C" */
