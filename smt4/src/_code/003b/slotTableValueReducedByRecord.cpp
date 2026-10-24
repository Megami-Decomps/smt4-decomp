#include "common.h"

extern "C" {

typedef struct DevilRecord {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 flags;      /* bits 16..22: percentage taken off */
} DevilRecord;

extern DevilRecord *dataTable40FindById(s32 arg);
extern s32 *gameGetSlotTable(void);

/* Returns the slot table's first value reduced by the record's percentage field, 0 without one. */
s32 slotTableValueReducedByRecord(s32 arg)
{
    s32 result = 0;
    DevilRecord *record = dataTable40FindById(arg);

    if (record != NULL && (record->flags & 0x7F0000) != 0) {
        result = *gameGetSlotTable() * (100 - (s32)((record->flags >> 16) & 0x7F)) / 100;
    }
    return result;
}

} /* extern "C" */
