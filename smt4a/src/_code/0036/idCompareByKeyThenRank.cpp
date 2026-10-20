#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x43];
    /* 0x43 */ u8 rank;
} Record;

int FUN_001ba3d4(u16 id);
Record *FUN_00192550(u16 id);

/* Comparator on two u16 ids: orders by FUN_001ba3d4(id), then by the records' rank (second minus first). */
int idCompareByKeyThenRank(u16 *a, u16 *b)
{
    int keyA = FUN_001ba3d4(*a);
    int keyB = FUN_001ba3d4(*b);
    int result = keyA - keyB;

    if (result == 0) {
        Record *recordA = FUN_00192550(*a);
        Record *recordB = FUN_00192550(*b);

        result = recordB->rank - recordA->rank;
    }
    return result;
}

} /* extern "C" */
