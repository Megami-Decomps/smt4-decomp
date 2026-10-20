#include "common.h"

extern "C" {

typedef struct RecordA {
    /* 0x00 */ u8 unk00[0x43];
    /* 0x43 */ u8 value;
} RecordA;

typedef struct RecordB {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ u16 value;
} RecordB;

typedef struct RecordC {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 value;
} RecordC;

typedef struct RecordD {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u16 value;
} RecordD;

extern u32 FUN_0019271c(u32 id);
extern RecordA *FUN_00192550(u32 id);
extern RecordB *FUN_00192608(u32 id);
extern RecordC *aocRecordLookup83(u32 id);
extern RecordD *aocRecordLookup84(u32 id);

/* Looks the id up in the table its kind selects and returns that record's value; 0 if none. */
u16 FUN_0049c9a0(const u16 *idPtr)
{
    u16 value = 0;
    u32 id = *idPtr;

    switch (FUN_0019271c(id)) {
    case 1:
    case 12: {
        RecordA *record = FUN_00192550(id);

        if (record != NULL) {
            value = record->value;
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
        RecordB *record = FUN_00192608(id);

        if (record != NULL) {
            value = record->value;
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
