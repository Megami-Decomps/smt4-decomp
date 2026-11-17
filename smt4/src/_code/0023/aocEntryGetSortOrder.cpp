#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "gamedata/EquipmentSortPower.h"
#include "gamedata/EquipmentRecord.h"
#include "gamedata/ConsumableRecord.h"

struct AocEntryOrder83 {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 order;
};
struct AocEntryOrder84 {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u16 order;
};
extern "C" {
u32 aocEntryGetKind(u32 id);
AocEntryOrder83 *aocRecordLookup83(u16 id);
AocEntryOrder84 *aocRecordLookup84(u16 id);

/* Returns the order key supplied by the entry's own record family. */
u16 aocEntryGetSortOrder(const u16 *entry)
{
    u16 order = 0;
    u16 id = *entry;
    switch (aocEntryGetKind(id)) {
    case 1: {
        ConsumableRecord *record = itemTableGetItemRecord(id);
        if (record != NULL) order = record->rank;
        break;
    }
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: {
        EquipmentRecord *record = itemTableGetEquipmentRecord(id);
        if (record != NULL) order = record->order;
        break;
    }
    case 9: {
        AocEntryOrder83 *record = aocRecordLookup83(id);
        if (record != NULL) order = record->order;
        break;
    }
    case 10: {
        AocEntryOrder84 *record = aocRecordLookup84(id);
        if (record != NULL) order = record->order;
        break;
    }
    }
    return order;
}
}
