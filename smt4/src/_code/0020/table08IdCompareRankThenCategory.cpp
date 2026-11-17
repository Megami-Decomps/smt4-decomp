#include "common.h"
#include "gamedata/ConsumableRecord.h"

// Sort record IDs by their low-byte rank, then category.
extern "C" s32 table08IdCompareRankThenCategory(const u16* firstId, const u16* secondId)
{
    ConsumableRecord* first = dataTable08Sub1GetRecord(*firstId);
    ConsumableRecord* second = dataTable08Sub1GetRecord(*secondId);
    s32 difference = (first->sortFlags & 0xff) - (second->sortFlags & 0xff);
    if (difference == 0) {
        first = dataTable08Sub1GetRecord(*firstId);
        second = dataTable08Sub1GetRecord(*secondId);
        difference = first->rank - second->rank;
    }
    return difference;
}
