#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 order;
} Record;

Record *table8Type5FindById(u32 id);
int FUN_00288e68(u32 id);
int FUN_0028d1f4(int value);

/* Comparator on two u16 ids: orders by the FUN_0028d1f4(FUN_00288e68(id)) key, then by the records' `order`. */
int FUN_002dcce0(u16 *a, u16 *b)
{
    Record *recordA = table8Type5FindById(*a);
    Record *recordB = table8Type5FindById(*b);
    int keyA = FUN_0028d1f4(FUN_00288e68(*a));
    int keyB = FUN_0028d1f4(FUN_00288e68(*b));
    int result = keyA - keyB;

    if (result == 0) {
        result = recordA->order - recordB->order;
    }
    return result;
}

} /* extern "C" */
