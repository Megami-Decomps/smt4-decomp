#include "shard/W6_W6Match2_RankedTableRecord.h"

struct PrimaryEntryOrder {
    /* 0x00 */ u8 unk00[0x6F];
    /* 0x6F */ u8 order;
};
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
PrimaryEntryOrder *dataTable08Sub1GetRecord(u16 id);
AocEntryOrder83 *aocRecordLookup83(u16 id);
AocEntryOrder84 *aocRecordLookup84(u16 id);

/* Returns the order key supplied by the entry's own record family. */
u16 FUN_00230f44(const u16 *entry)
{
    u16 order = 0;
    u16 id = *entry;
    switch (aocEntryGetKind(id)) {
    case 1: {
        PrimaryEntryOrder *record = dataTable08Sub1GetRecord(id);
        if (record != NULL) order = record->order;
        break;
    }
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: {
        RankedTableRecord *record = dataTable08Sub2GetRecord(id);
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
