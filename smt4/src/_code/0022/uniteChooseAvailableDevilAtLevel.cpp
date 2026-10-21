/* NON_MATCHING: compendium-call merging, 24 fewer stack bytes and return-tail folding differ; an optimization flag may explain them. */
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "shard/W6_W6Match2_RecordValue.h"

struct FusionLevelDefinition {
    DevilSortRecord sort;
    u16 unk04;
    u16 flags;
    u8 unk08[0x24];
    u32 restrictions;
    u32 unk30;
    u16 registryLink;
    u16 unlockFlag;
};
struct FusionLevelParty {
    u8 unk0000[0x90f0];
    s8 slots[24];
};
struct FusionLevelUnit {
    u8 unk00[0x46];
    u16 id;
};

extern "C" {
bool gameRecordCopy(u32, RecordValue *);
u32 gameFlagIsSet(u32);
u8 *gameGetSlotTable();
FusionLevelUnit *gameGetUnitRecord(u32);
u32 randNextInRange(s32);

u32 uniteChooseAvailableDevilAtLevel(u32 firstId, u32 secondId, u32 previousId, u32 level)
{
    u16 candidates[20] = {0};
    u8 candidateCount = 0;
    void *table = dataTableGet(0, 0);
    dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    for (u16 id = 0; id < count; ++id) {
        DevilSortRecord *candidate = devilGetRecord(id);
        if (candidate->level != level || id == previousId || id == firstId || id == secondId) {
            continue;
        }
        FusionLevelDefinition *definition = (FusionLevelDefinition *)devilGetRecord(candidate->id);
        if ((definition->restrictions & 0x1c00000) ||
            (definition->unlockFlag != 0 && !gameFlagIsSet(definition->unlockFlag))) {
            continue;
        }
        if (definition->registryLink & 1) {
            u32 registryId = (definition->registryLink & 0xfffe) ?
                definition->registryLink >> 1 : definition->sort.id;
            RecordValue saved;
            if (!gameRecordCopy(registryId, &saved) || !(saved.eligibility.flags & 0xfc)) {
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
                FusionLevelUnit *unit = gameGetUnitRecord(currentParty->slots[slot]);
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
