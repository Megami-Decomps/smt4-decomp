#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ u16 sortKey;
} Record;

extern Record *FUN_00192608(u16 id);

/* Orders two ids by their record's sort key, descending. */
int FUN_0039ecc4(u16 *a, u16 *b)
{
    Record *recordA = FUN_00192608(*a);
    Record *recordB = FUN_00192608(*b);

    return recordB->sortKey - recordA->sortKey;
}

}
