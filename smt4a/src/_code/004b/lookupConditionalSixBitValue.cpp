#include "common.h"
#include "gamedata/GamePlayerData.h"
#include "quest_center/QuestRecordA.h"

struct PackedValueEntry {
    union {
        u32 flags;
        struct { u32 low : 5, value : 6, high : 21; } packed;
    };
    u8 unk04[8];
    u16 ownerId, alternate;
};
extern "C" {
const PackedValueEntry *dataTable02GetRecordWithAocPackage(u32);
s32 partyEntryFlagsBit3(u16);
s32 goalConditionsSatisfied(u16);
s32 flagValueRead(u32);
s32 gameUnlockRecordRequirementsMet(u16);

u32 lookupConditionalSixBitValue(u32 id)
{
    const PackedValueEntry *entry = dataTable02GetRecordWithAocPackage(id);
    if (!partyEntryFlagsBit3(entry->ownerId) && !goalConditionsSatisfied(entry->ownerId)) {
        if (entry->ownerId == 0x8d) {
            if (flagValueRead(0x3a) >= 10) {
                if (id == 0x357 || id == 0x35d) return 0;
                if (id == 0x369 || id == 0x36a) return 0;
                if (id == 0x36f || id == 0x370) return 0;
                if (id == 0x375 || id == 0x377) return 0;
                if (id == 0x37b || id == 0x37c) return 0;
                if (id == 0x382 || id == 0x387) return 0;
                if (id == 0x388 || id == 0x3cf) return 0;
                if (id == 0x3d1 || id == 0x3e3 || id == 0x3e5) return 0;
            }
            if (flagValueRead(0x3c) >= 10) {
                if (id == 0x357 || id == 0x3b9) return 0;
                if (id == 0x3bb || id == 0x3bf) return 0;
                if (id == 0x3c9 || id == 0x3ca) return 0;
                if (id == 0x3d5 || id == 0x3e2) return 0;
                if (id == 0x3e4 || id == 0x3ec || id == 0x3f1) return 0;
            }
        }
        if (gameUnlockRecordRequirementsMet(entry->ownerId)) {
            const QuestRecordA *owner = questDataGetRecord(entry->ownerId);
            if (owner) {
                u16 playerValue = gameGetPlayerData()->level;
                if (owner->requiredLevel && owner->requiredLevel <= playerValue)
                    return entry->alternate;
            }
        }
    }
    u32 flags = entry->flags;
    if (!(flags & 0x7e0))
        return 0;
    return entry->packed.value;
}
}
