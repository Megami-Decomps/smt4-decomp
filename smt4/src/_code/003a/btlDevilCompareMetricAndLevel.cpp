#include "shard/W6_W6Match5_DevilSort.h"

struct DevilMetricRecord {
    DevilSortRecord base;
    u8 unk04[0x10];
    u16 metric;
};

extern "C" s32 btlDevilCompareMetricAndLevel(const u16* first, const u16* second)
{
    const DevilMetricRecord* a = reinterpret_cast<const DevilMetricRecord*>(devilGetRecord(*first));
    const DevilMetricRecord* b = reinterpret_cast<const DevilMetricRecord*>(devilGetRecord(*second));
    s32 result = b->metric - a->metric;
    if (result == 0) {
        a = reinterpret_cast<const DevilMetricRecord*>(devilGetRecord(*first));
        b = reinterpret_cast<const DevilMetricRecord*>(devilGetRecord(*second));
        result = a->base.level - b->base.level;
        if (result == 0) {
            result = *second - *first;
        }
    }
    return result;
}
