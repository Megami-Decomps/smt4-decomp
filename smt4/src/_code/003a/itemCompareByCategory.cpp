#include "common.h"

extern "C" {

typedef struct ItemRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 category;
} ItemRecord;

extern ItemRecord *table8Type5FindById(u16 id);
extern int FUN_0024c52c(u16 category);
extern int recordKindRank(u16 category);

/* Orders two item ids by the first, then the second key of their category, then by id. */
int itemCompareByCategory(u16 *a, u16 *b)
{
    ItemRecord *recordA = table8Type5FindById(*a);
    ItemRecord *recordB = table8Type5FindById(*b);
    int diff = recordKindRank(recordA->category) - recordKindRank(recordB->category);

    if (diff == 0) {
        diff = FUN_0024c52c(recordA->category) - FUN_0024c52c(recordB->category);
        if (diff == 0) {
            diff = *a - *b;
        }
    }
    return diff;
}

}
