/* NON_MATCHING: armcc hoists the exclusion and category masks out of the loop (extra saved registers); retail hoists only the required mask and reloads the others each pass. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BtlUnitRecordA {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s16 maxHp;
};

extern "C" {
extern BtlMainGlobalsA g_btlMain;

/* The unit's maximum HP: its battle combatant's while a battle (not in phase 29) holds it, else the record's own. */
s32 FUN_002b4e7c(BtlUnitRecordA *record)
{
    BtlMainStateA *state = g_btlMain.state;
    s32 maxHp = record->maxHp;

    if (state != NULL && state->unk0088 != 29) {
        for (s32 i = 0; i < 109; i++) {
            BtlCombatantEntryA *entry = &state->entries[i];

            if ((entry->flags & g_btlMain.combatantMasks.required) != 0 &&
                (entry->flags & g_btlMain.exclusionMask) == 0 &&
                (entry->flags & g_btlMain.actorCategories[0]) != 0 && entry->record == record) {
                maxHp = entry->maxHp;
                break;
            }
        }
    }
    return maxHp;
}

} /* extern "C" */
