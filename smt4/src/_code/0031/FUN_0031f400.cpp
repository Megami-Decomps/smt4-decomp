/* NON_MATCHING: ternary now gives retail's predicated mvneq; remaining difference is one compiler nop hint before the final scrSetResult call (and the pool offset it shifts) */
#include "battle/BtlMainAccess.h"
#include "AsdSDK/AsdMemUtil.h"
#include "script/ScriptArgs.h"

extern "C" {

#define ENTITY_COUNT 109

BtlEntry *btlMainFindEntryByListedId(BtlMainState *state, int index);
int partyHasStoredDemon(u16 type);
int randNextInRange(u32 range);

/* Collects the eligible other-group entities no stronger than the player's and reports the id of a random one (-1 if none). */
u32 FUN_0031f400(void)
{
    BtlEntry *candidates[ENTITY_COUNT];
    BtlEntry *player;
    u8 count;
    int i;
    int id;

    player = btlMainFindEntryByListedId(btlGetMainState(), btlGetMainState()->playerCheck.checkId);
    reinterpret_cast<int>(memClear(reinterpret_cast<void*>(candidates), sizeof(candidates)));
    count = 0;
    i = 0;
    do {
        BtlEntry *entity = &btlGetMainState()->entries[i];
        u32 flags = entity->flags;

        if ((flags & 1) != 0 && (flags & 0x40) == 0 && (flags & 0x10) != 0 && entity->selectionIndex != player->selectionIndex
            && entity->level <= player->level && partyHasStoredDemon(entity->id) == 0 && entity->detail != NULL
            && (entity->detail->flags & 0x200) != 0 && player->id != entity->id) {
            candidates[count] = entity;
            count++;
        }
        i++;
    } while (i < ENTITY_COUNT);
    id = count == 0 ? -1 : candidates[randNextInRange((count - 1) & 0xffff)]->members.ids[0];
    scrSetResult(id);
    return 1;
}

} /* extern "C" */
