#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u16 order;
    /* 0x6 */ u8 kind;
} Record;

Record *dataTable1bOr1cGetRecord(u32 id);

/* Orders record kinds: 6, 0, 4, 5, 2, 3, 7, 8, 9 rank 1 to 9; any other kind ranks 0. */
static s32 kindRank(u8 kind)
{
    s32 rank;

    switch (kind) {
    case 6:
        rank = 1;
        break;
    case 0:
        rank = 2;
        break;
    case 4:
        rank = 3;
        break;
    case 5:
        rank = 4;
        break;
    case 2:
        rank = 5;
        break;
    case 3:
        rank = 6;
        break;
    case 7:
        rank = 7;
        break;
    case 8:
        rank = 8;
        break;
    case 9:
        rank = 9;
        break;
    default:
        rank = 0;
        break;
    }
    return rank;
}

/* Compares two record ids by kind rank (higher first), then by order (higher first). */
s32 recordCompareKindAndOrder(u16 *a, u16 *b)
{
    Record *recordA = dataTable1bOr1cGetRecord(*a);
    Record *recordB = dataTable1bOr1cGetRecord(*b);
    if (recordA == NULL)
        return 0;
    if (recordB == NULL)
        return 0;

    s32 diff = kindRank(recordB->kind) - kindRank(recordA->kind);
    if (diff != 0)
        return diff;

    recordA = dataTable1bOr1cGetRecord(*a);
    recordB = dataTable1bOr1cGetRecord(*b);
    if (recordA == NULL)
        return 0;
    if (recordB == NULL)
        return 0;
    return recordB->order - recordA->order;
}

} /* extern "C" */
