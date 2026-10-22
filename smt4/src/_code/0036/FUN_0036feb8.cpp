/* NON_MATCHING: retail keeps the null result in a register (r7) shared with the loop start; built rematerializes #0 */
#include "common.h"

extern "C" {

void FUN_0036efa8(void **item);
void FUN_0036f210(void **item);

/* Offsets stored in the resource are relative to the field holding them; zero means none. */
static void *resRelPtr(s32 *field)
{
    if (*field == 0) {
        return NULL;
    }
    return (u8 *)field + *field;
}

typedef struct {
    u8 unk0[0x2c];
    s32 firstCount;   /* 0x2c */
    s32 firstTable;   /* 0x30: relative offset to s32[firstCount] relative offsets */
    u8 unk34[4];
    s32 secondCount;  /* 0x38 */
    s32 secondTable;  /* 0x3c: relative offset to s32[secondCount] relative offsets */
} ResItemLists;

/* Resolves each item of the second list, then of the first, passing it to its handler. */
void FUN_0036feb8(ResItemLists *lists)
{
    s32 count;
    s32 i;
    void *item;

    count = lists->secondCount;
    for (i = 0; i < count; i++) {
        item = resRelPtr(&((s32 *)resRelPtr(&lists->secondTable))[i]);
        FUN_0036f210(&item);
    }
    count = lists->firstCount;
    for (i = 0; i < count; i++) {
        item = resRelPtr(&((s32 *)resRelPtr(&lists->firstTable))[i]);
        FUN_0036efa8(&item);
    }
}

} /* extern "C" */
