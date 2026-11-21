#include "common.h"
#include "quest_center/QuestRecordA.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
FlagGatePrefixA *FUN_002e26c4(u32 index);
s32 gameFlagIsSet(u16 flag);
u8 *gameFlagBlockGetEntry(u32 index);

/* Returns bit 0 of the quest record's flags (0 when the record is absent). */
static u32 questGetAttributeBit(u16 index)
{
    QuestRecordA *record = questDataGetRecord(index);
    if (record != NULL) {
        return record->flags & 1;
    }
    return 0;
}

/* Returns bit 5 of the first byte of flag-block entry `index` (same body as partyEntryGetBit5). */
static u32 partyEntryGetBit5Local(u32 index)
{
    u8 *entry = gameFlagBlockGetEntry(index);
    return (*entry & 0x20) >> 5;
}

/* Returns 1 when any active quest matching `requestedAttribute` has its bit-5 flag set. */
u32 FUN_003deee4(u32 requestedAttribute)
{
    u32 gateEnabled = 0;
    FlagGatePrefixA *gate = FUN_002e26c4(30);
    if (gate != NULL && gameFlagIsSet(gate->flagId) != 0) {
        gateEnabled = 1;
    }

    for (u16 index = 0; index < 400; ++index) {
        if (index < 350) {
            if ((*gameFlagBlockGetEntry(index) & 1) == 0) {
                continue;
            }
        }
        if (index >= 350) {
            if (questDataGetRecord(index) == NULL) {
                continue;
            }
        }
        if ((gateEnabled | requestedAttribute) == 0) {
            continue;
        }
        if ((questGetAttributeBit(index) & ~requestedAttribute) != 0) {
            continue;
        }
        if ((requestedAttribute & ~questGetAttributeBit(index)) != 0) {
            continue;
        }
        if (partyEntryGetBit5Local(index) != 0) {
            return 1;
        }
    }
    return 0;
}
} /* extern "C" */
