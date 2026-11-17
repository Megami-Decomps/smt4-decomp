#include "shard/W6_W6Match8_DevilRecordA.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

s32 FUN_004a73b8(const u16* first, const u16* second)
{
    const Table00RecordA* a = dataTable00FindById(*first);
    const Table00RecordA* b = dataTable00FindById(*second);
    s32 order = b->maxHp - a->maxHp;
    if (order == 0) {
        const DevilRecordA* firstDevil = devilGetRecord(*first);
        const DevilRecordA* secondDevil = devilGetRecord(*second);
        order = firstDevil->level - secondDevil->level;
        if (order == 0) {
            order = *second - *first;
        }
    }
    return order;
}
}
