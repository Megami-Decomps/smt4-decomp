#include "common.h"

struct RankedRecord {
    u16 id;       // 0x00
    u8 category;  // 0x02
    u8 rankFlags; // 0x03
};

extern "C" {
RankedRecord* findSkillMetadataById(u32 id);

// Sorts the low five rank bits descending, then category and record ID ascending.
s32 uiCompareMaskedRecordRankDescending(const u16* first, const u16* second)
{
    RankedRecord* a = findSkillMetadataById(*first);
    RankedRecord* b = findSkillMetadataById(*second);
    s32 order = (b->rankFlags & 0x1f) - (a->rankFlags & 0x1f);
    if (order == 0) {
        order = a->category - b->category;
        if (order == 0) {
            order = a->id - b->id;
        }
    }
    return order;
}
}
