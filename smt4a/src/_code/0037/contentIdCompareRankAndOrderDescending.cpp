#include "common.h"

struct RankedContentRecord {
    u8 unk00[0x24]; // 0x00
    u32 rankBits;    // 0x24
    u8 unk28[0x48]; // 0x28
    u16 order;       // 0x70
};

extern "C" RankedContentRecord* dataTable08Sub2GetRecord(u32 id);

// Sort content IDs by descending packed rank, then descending order.
extern "C" s32 contentIdCompareRankAndOrderDescending(const u16* firstId, const u16* secondId)
{
    RankedContentRecord* first = dataTable08Sub2GetRecord(*firstId);
    RankedContentRecord* second = dataTable08Sub2GetRecord(*secondId);
    s32 difference = (second->rankBits >> 20) - (first->rankBits >> 20);
    if (difference == 0) {
        first = dataTable08Sub2GetRecord(*firstId);
        second = dataTable08Sub2GetRecord(*secondId);
        difference = second->order - first->order;
    }
    return difference;
}
