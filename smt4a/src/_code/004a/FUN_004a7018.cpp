#include "common.h"
#include "gamedata/ItemSortCategory.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 key;
} Record;

extern Record *dataTableFindType5Record(u32 id);

/* Comparison of two ids: by itemGetSortCategory of their record's key, then by id. */
s32 FUN_004a7018(const u16 *a, const u16 *b)
{
    Record *recordA = dataTableFindType5Record(*a);
    Record *recordB = dataTableFindType5Record(*b);
    s32 result = itemGetSortCategory(recordA->key) - itemGetSortCategory(recordB->key);

    if (result == 0) {
        result = *a - *b;
    }
    return result;
}

} /* extern "C" */
