#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x6F];
    /* 0x6F */ u8 rank;
} Record;

int FUN_0028fb40(u16 id);
Record *dataTable08Sub1GetRecord(u16 id);

/* Comparator on two u16 ids: orders by FUN_0028fb40(id), then by the records' rank (second minus first). */
int FUN_002e4a60(u16 *a, u16 *b)
{
    int keyA = FUN_0028fb40(*a);
    int keyB = FUN_0028fb40(*b);
    int result = keyA - keyB;

    if (result == 0) {
        Record *recordA = dataTable08Sub1GetRecord(*a);
        Record *recordB = dataTable08Sub1GetRecord(*b);

        result = recordB->rank - recordA->rank;
    }
    return result;
}

} /* extern "C" */
