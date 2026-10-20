/* NON_MATCHING: retail still executes `result = 0` ahead of the record-null test (mov r4,#0) which the build proves redundant and drops */
#include "common.h"

extern "C" {

typedef struct Record001e1794 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 order;
} Record001e1794;

Record001e1794 *dataTable1bOr1cGetRecord(u32 id);
u32 FUN_00298e00(u16 id);

/* Sort comparator over two ids: the one whose mask has bits the other lacks sorts first, ties go by record order. */
s32 devilMaskCompare(u16 *a, u16 *b)
{
    u32 maskA = FUN_00298e00(*a);
    s32 result = 0;
    u32 maskB = FUN_00298e00(*b);

    if ((maskA & ~maskB) != 0) {
        result = -1;
    }
    if ((maskB & ~maskA) != 0) {
        result = 1;
    }
    if (result == 0) {
        Record001e1794 *recA = dataTable1bOr1cGetRecord(*a);
        Record001e1794 *recB = dataTable1bOr1cGetRecord(*b);

        if (recA != NULL && recB != NULL) {
            result = recA->order - recB->order;
        } else {
            result = 0;
        }
    }
    return result;
}

} /* extern "C" */
