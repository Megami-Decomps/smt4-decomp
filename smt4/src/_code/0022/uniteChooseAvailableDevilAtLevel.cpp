/* NON_MATCHING: retail's frame is 24 bytes larger (the saved record at sp+8, the candidates at sp+64, against
 * sp+40 and sp in the build), and the party-slot id compare loads the unit's id first. */
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "shard/W6_W6Match2_RecordValue.h"
#include "util/Random.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/SaveSlotTableIV.h"

struct FusionLevelParty {
    u8 unk0000[0x90f0];
    s8 slots[24];
};

extern "C" {
bool gameRecordCopy(u32, GameSavedItem *);
u32 gameFlagIsSet(u32);

u32 uniteChooseAvailableDevilAtLevel(u32 firstId, u32 secondId, u32 previousId, u32 level)
{
    u16 candidates[20] = {0};
    u8 candidateCount = 0;
    void *table = dataTableGet(0, 0);
    dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    for (u16 id = 0; id < count; ++id) {
        NkmBaseRecord *candidate = nkmBaseGetRecord(id);
        if (candidate->level != level || id == previousId || id == firstId || id == secondId) {
            continue;
        }
        NkmBaseRecord *definition = nkmBaseGetRecord(candidate->id);
        if ((definition->fusionRestrictions & 0x1c00000) ||
            (definition->requiredFlag != 0 && !gameFlagIsSet(definition->requiredFlag))) {
            continue;
        }
        if (definition->prerequisite & 1) {
            GameSavedItem saved;
            if (definition->prerequisite & ~1) {
                if (!gameRecordCopy(definition->prerequisite >> 1, &saved) || !(saved.flags & 0xfc)) {
                    continue;
                }
            } else {
                if (!gameRecordCopy(definition->id, &saved) || !(saved.flags & 0xfc)) {
                    continue;
                }
            }
        }
        if (!(definition->flags & 1)) {
            continue;
        }
        FusionLevelParty *party = (FusionLevelParty *)gameGetSlotTable();
        s32 slot;
        for (slot = 0; slot < 24; ++slot) {
            if ((u32)party->slots[slot] < 24) {
                FusionLevelParty *currentParty = (FusionLevelParty *)gameGetSlotTable();
                StatBlock *unit = gameGetUnitRecord(currentParty->slots[slot]);
                if (unit->id == candidate->id) {
                    break;
                }
            }
        }
        if (slot == 24) {
            candidates[candidateCount++] = id;
        }
    }
    if (candidateCount == 1) {
        return candidates[0];
    }
    if (candidateCount > 1) {
        return candidates[randNextInRange((u16)(candidateCount - 1))];
    }
    return 0;
}
}
