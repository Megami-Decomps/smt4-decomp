/* NON_MATCHING: written like FUN_002b28d8's component comparison with the components swapped (descending); only the
 * race loads of each comparison are ordered differently (retail loads the second record's race first). */
#include "shard/W6_W6Match8_FusionCompare.h"

// Sort fusion pairs by the race (descending), level and id of each ingredient.
extern "C" s32 FUN_0034f0b4(const u16 *first, const u16 *second)
{
    UniteWorkA *work = g_unite;
    u16 leftId = work->pairList.pairs[*first].packedIds & 0x7FFF;
    u16 rightId = work->pairList.pairs[*second].packedIds & 0x7FFF;
    const NkmBaseRecordA *a = nkmBaseGetRecord(leftId);
    const NkmBaseRecordA *b = nkmBaseGetRecord(rightId);
    s32 result = fusionCompareComponentsA(b, a);
    if (result == 0) {
        leftId = (work->pairList.pairs[*first].packedIds & 0x3FFFFFFF) >> 15;
        rightId = (work->pairList.pairs[*second].packedIds & 0x3FFFFFFF) >> 15;
        a = nkmBaseGetRecord(leftId);
        b = nkmBaseGetRecord(rightId);
        result = fusionCompareComponentsA(b, a);
    }
    return result;
}
