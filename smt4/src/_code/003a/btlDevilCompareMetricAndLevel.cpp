#include "shard/W6_W6Match5_DevilSort.h"

extern "C" s32 btlDevilCompareMetricAndLevel(const u16* first, const u16* second)
{
    const DevilRecord* a = devilGetRecord(*first);
    const DevilRecord* b = devilGetRecord(*second);
    s32 result = b->baseHp - a->baseHp;
    if (result == 0) {
        a = devilGetRecord(*first);
        b = devilGetRecord(*second);
        result = a->level - b->level;
        if (result == 0) {
            result = *second - *first;
        }
    }
    return result;
}
