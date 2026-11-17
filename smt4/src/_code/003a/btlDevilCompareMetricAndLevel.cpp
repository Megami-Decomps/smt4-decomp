#include "shard/W6_W6Match5_DevilSort.h"

extern "C" s32 btlDevilCompareMetricAndLevel(const u16* first, const u16* second)
{
    const NkmBaseRecord* a = nkmBaseGetRecord(*first);
    const NkmBaseRecord* b = nkmBaseGetRecord(*second);
    s32 result = b->baseHp - a->baseHp;
    if (result == 0) {
        a = nkmBaseGetRecord(*first);
        b = nkmBaseGetRecord(*second);
        result = a->level - b->level;
        if (result == 0) {
            result = *second - *first;
        }
    }
    return result;
}
