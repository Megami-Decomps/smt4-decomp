#include "common.h"
#include "gamedata/UnitRecordAccess.h"
extern "C" {
extern int dataTableGetEntry0102Value(u16 id);

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
            StatBlock *unitB = gameGetUnitRecord(*b);
            StatBlock *unitA = gameGetUnitRecord(*a);
            s32 valueB = dataTableGetEntry0102Value(unitB->id);
            s32 valueA = dataTableGetEntry0102Value(unitA->id);
            result = valueB - valueA;
        }
    }
    return result;
}
}
