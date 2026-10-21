#include "shard/W6_W6Match8_DevilRecordA.h"

struct PrimarySortRecord {
    u32 unk00;
    s32 key;
};

extern "C" {
PrimarySortRecord* dataTable00FindById(u16 id);

s32 FUN_004a73b8(const u16* first, const u16* second)
{
    const PrimarySortRecord* a = dataTable00FindById(*first);
    const PrimarySortRecord* b = dataTable00FindById(*second);
    s32 order = b->key - a->key;
    if (order == 0) {
        const DevilRecordA* firstDevil = FUN_00184310(*first);
        const DevilRecordA* secondDevil = FUN_00184310(*second);
        order = firstDevil->level - secondDevil->level;
        if (order == 0) {
            order = *second - *first;
        }
    }
    return order;
}
}
