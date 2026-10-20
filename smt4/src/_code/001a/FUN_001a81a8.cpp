#include "common.h"
extern "C" {
typedef struct UnitRecord {
    u8 unk00[0x46];
    u16 tableId;
} UnitRecord;
extern int dataTableGetEntry0102Value(u16 id);
extern UnitRecord *gameGetUnitRecord(s32 unit);

/* Compares the second handle against the first: valid after invalid, then by table value. */
s32 FUN_001a81a8(s32 *b, s32 *a)
{
    s32 result = 0;

    if (*b < 0) {
        if (*a >= 0) {
            result = 1;
        }
    } else {
        if (*a < 0) {
            result = -1;
        } else {
            UnitRecord *unitB = gameGetUnitRecord(*b);
            UnitRecord *unitA = gameGetUnitRecord(*a);
            s32 valueB = dataTableGetEntry0102Value(unitB->tableId);
            s32 valueA = dataTableGetEntry0102Value(unitA->tableId);
            result = valueB - valueA;
        }
    }
    return result;
}
}
