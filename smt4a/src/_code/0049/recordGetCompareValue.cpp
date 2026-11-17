#include "common.h"
#include "shop/shopMain.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/ConsumableRecordA.h"

extern "C" {

typedef struct RecordC {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 value;
} RecordC;

typedef struct RecordD {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u16 value;
} RecordD;

extern u32 aocEntryGetKind(u32 id);
extern RecordC *aocRecordLookup83(u32 id);
extern RecordD *aocRecordLookup84(u32 id);

/* Looks the id up in the table its kind selects and returns that record's value; 0 if none. */
u16 recordGetCompareValue(const u16 *idPtr)
{
    u16 value = 0;
    u32 id = *idPtr;

    switch (aocEntryGetKind(id)) {
    case 1:
    case 12: {
        ConsumableRecordA *record = dataTable8FindRecord(id);

        if (record != NULL) {
            value = record->rank;
        }
        break;
    }
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8: {
        EquipmentRecordA *record = dataTable08Sub2GetRecord(id);

        if (record != NULL) {
            value = record->order;
        }
        break;
    }
    case 9: {
        RecordC *record = aocRecordLookup83(id);

        if (record != NULL) {
            value = record->value;
        }
        break;
    }
    case 10: {
        RecordD *record = aocRecordLookup84(id);

        if (record != NULL) {
            value = record->value;
        }
        break;
    }
    }
    return value;
}

} /* extern "C" */
