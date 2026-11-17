#include "common.h"
#include "gamedata/EquipmentRecordA.h"

extern "C" {

struct Entry0034f558 {
    /* 0x00 */ u16 id;
};

/* Comparator: the difference of the keys (+0x70) of the records the two entries' ids refer to. */
s32 dataCompareResolvedRecordKeys(Entry0034f558 *a, Entry0034f558 *b)
{
    EquipmentRecordA *first = dataTable08Sub2GetRecord(a->id);
    EquipmentRecordA *second = dataTable08Sub2GetRecord(b->id);

    return first->order - second->order;
}

}
