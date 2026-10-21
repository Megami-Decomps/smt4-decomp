#include "common.h"

struct Table08RankRecord {
    u8 unk00[0x6f]; // 0x00
    u8 category;     // 0x6f
    u32 rankBits;    // 0x70
};

extern "C" Table08RankRecord* dataTable08Sub1GetRecord(u32 id);

// Sort record IDs by their low-byte rank, then category.
extern "C" s32 table08IdCompareRankThenCategory(const u16* firstId, const u16* secondId)
{
    Table08RankRecord* first = dataTable08Sub1GetRecord(*firstId);
    Table08RankRecord* second = dataTable08Sub1GetRecord(*secondId);
    s32 difference = (first->rankBits & 0xff) - (second->rankBits & 0xff);
    if (difference == 0) {
        first = dataTable08Sub1GetRecord(*firstId);
        second = dataTable08Sub1GetRecord(*secondId);
        difference = first->category - second->category;
    }
    return difference;
}
