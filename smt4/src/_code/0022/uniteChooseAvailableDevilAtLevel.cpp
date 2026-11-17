/* NON_MATCHING: compendium-call merging, 24 fewer stack bytes and return-tail folding differ; an optimization flag may explain them. */
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "shard/W6_W6Match2_RecordValue.h"
#include "util/Random.h"
#include "gamedata/UnitRecordAccess.h"

struct FusionLevelParty {
    u8 unk0000[0x90f0];
    s8 slots[24];
};
struct FusionLevelUnit {
    u8 unk00[0x46];
    u16 id;
};

extern "C" {
bool gameRecordCopy(u32, GameSavedItem *);
u32 gameFlagIsSet(u32);
u8 *gameGetSlotTable();

u32 uniteChooseAvailableDevilAtLevel(u32 firstId, u32 secondId, u32 previousId, u32 level)
{
    u16 candidates[20] = {0};
    u8 candidateCount = 0;
    void *table = dataTableGet(0, 0);
    dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    for (u16 id = 0; id < count; ++id) {
        DevilRecord *candidate = devilGetRecord(id);
        if (candidate->level != level || id == previousId || id == firstId || id == secondId) {
            continue;
        }
        DevilRecord *definition = devilGetRecord(candidate->id);
        if ((definition->fusionRestrictions & 0x1c00000) ||
            (definition->specialFusion.requiredFlag != 0 && !gameFlagIsSet(definition->specialFusion.requiredFlag))) {
            continue;
        }
        if (definition->specialFusion.prerequisite & 1) {
            u32 registryId = (definition->specialFusion.prerequisite & 0xfffe) ?
                definition->specialFusion.prerequisite >> 1 : definition->id;
            GameSavedItem saved;
            if (!gameRecordCopy(registryId, &saved) || !(saved.flags & 0xfc)) {
                continue;
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
                FusionLevelUnit *unit = static_cast<FusionLevelUnit *>(gameGetUnitRecord(currentParty->slots[slot]));
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
    if (candidateCount < 2) {
        return 0;
    }
    return candidates[randNextInRange((u16)(candidateCount - 1))];
}
}
