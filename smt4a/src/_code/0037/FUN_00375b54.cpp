#include "common.h"

extern "C" {

typedef struct Record00375b54 {
    /* 0x00 */ u8 unk00[0x43];
    /* 0x43 */ u8 rank;
} Record00375b54;

Record00375b54 *FUN_00192550(u32 id);

/* Sort comparator over record ids: higher rank first. */
s32 FUN_00375b54(const u16 *first, const u16 *second)
{
    Record00375b54 *firstRecord = FUN_00192550(*first);
    Record00375b54 *secondRecord = FUN_00192550(*second);

    return secondRecord->rank - firstRecord->rank;
}

} /* extern "C" */
