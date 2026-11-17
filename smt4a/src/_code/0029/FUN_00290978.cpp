/* NON_MATCHING: two moves swapped at entry only (retail copies r0 to r5 before r1 to r4; the build the other way round); everything else matches. */
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/GameDataAccess_Shard004B.h"

extern "C" {

s32 FUN_002909f8(const s32 *leftSlot, const s32 *rightSlot);

/* qsort comparator over party slot indices: empty slots sort last, then by scaled maximum (ascending); ties fall through to the next comparator. */
s32 FUN_00290978(const s32 *leftSlot, const s32 *rightSlot)
{
    s32 result = 0;

    if (*leftSlot < 0) {
        if (*rightSlot >= 0) {
            result = 1;
        }
    } else if (*rightSlot < 0) {
        result = -1;
    } else {
        const SlotRecordA *left = gameGetSlotRecord(*leftSlot);
        const SlotRecordA *right = gameGetSlotRecord(*rightSlot);
        result = recordGetScaledMaximum(left) - recordGetScaledMaximum(right);
        if (result == 0) {
            return FUN_002909f8(leftSlot, rightSlot);
        }
    }
    return result;
}

} /* extern "C" */
