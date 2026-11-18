/* Apocalypse: random picks among the party's stock slots (partyGetSlot), as the battle navigator lines
 * use them. */
#ifndef GAMEDATA_PARTYPICK_H
#define GAMEDATA_PARTYPICK_H

#include "gamedata/SaveSlotTable.h"
#include "code/Code0018.h"
#include "util/Random.h"

/* How many stock slots partyGetSlot serves. */
#define PARTY_PICK_SLOT_COUNT 12

/* The id of a random occupied stock slot; when none is occupied, the selected save slot's id, or 0
 * when there is none either. */
static __inline u16 partyPickRandomId(void)
{
    u16 candidates[PARTY_PICK_SLOT_COUNT] = {0};
    s32 count = 0;
    for (s32 index = 0; index < PARTY_PICK_SLOT_COUNT; ++index) {
        PartySlotA *slot = partyGetSlot((u16)index);
        if (partySlotIsOccupied(slot))
            candidates[count++] = slot->id;
    }
    if (count == 0) {
        PartySlotA *selected = saveSlotFindSelected();
        if (selected == NULL)
            return 0;
        count = 1;
        candidates[0] = selected->id;
    }
    return candidates[lcgRandomRange((u16)(count - 1))];
}

#endif
