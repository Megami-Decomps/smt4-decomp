#include "common.h"

extern "C" {

typedef struct ItemRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 category;
} ItemRecord;

extern ItemRecord *FUN_00480ba0(u16 id);
extern int FUN_003a6868(u16 category);
extern int FUN_0039a598(u16 category);

/* Orders two item ids by the first, then the second key of their category, then by id. */
int itemCompareByCategory(u16 *a, u16 *b)
{
    ItemRecord *recordA = FUN_00480ba0(*a);
    ItemRecord *recordB = FUN_00480ba0(*b);
    int diff = FUN_0039a598(recordA->category) - FUN_0039a598(recordB->category);

    if (diff == 0) {
        diff = FUN_003a6868(recordA->category) - FUN_003a6868(recordB->category);
        if (diff == 0) {
            diff = *a - *b;
        }
    }
    return diff;
}

}
