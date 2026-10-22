#include "shard/Shard0032.h"

struct PartyRecord {
    UnitRecord unit;
    u8 unk12C[4];
    u32 flags;
};
struct PartyRecordOwner {
    u8 unk00[0x1ddc];
    PartyRecord records[12];
};

extern "C" void* gameGetSlotTable(void);

static __inline PartyRecord* partyRecordAt(u16 index)
{
    if (index >= 12) {
        return NULL;
    }
    return &static_cast<PartyRecordOwner*>(gameGetSlotTable())->records[index];
}

extern "C" PartyRecord* partyFindActiveRecordById(u32 id)
{
    for (s32 index = 0; index < 12; ++index) {
        PartyRecord* record = partyRecordAt(static_cast<u16>(index));
        if (record != NULL && (record->flags & 1) != 0 && record->unit.id == id) {
            return record;
        }
    }
    return NULL;
}
