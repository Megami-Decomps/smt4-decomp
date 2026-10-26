/* NON_MATCHING: identical code except the register assignment: retail keeps the count in r5 and the list in r6, built the reverse. */
#include "shard/S1NwGfx.h"

extern "C" {

void FUN_0036efa8(void **item);
void FUN_0036f210(void **item);

typedef struct {
    u8 unk0[0x2c];
    s32 firstCount;               /* 0x2c */
    RelativePointer firstTable;   /* 0x30: relative pointer to firstCount relative pointers */
    u8 unk34[4];
    s32 secondCount;              /* 0x38 */
    RelativePointer secondTable;  /* 0x3c: relative pointer to secondCount relative pointers */
} ResItemLists;

/* Resolves each item of the second list, then of the first, passing it to its handler. */
void FUN_0036feb8(ResItemLists *lists)
{
    s32 secondCount = lists->secondCount;
    for (s32 i = 0; i < secondCount; i++) {
        void *item = static_cast<RelativePointer *>(lists->secondTable.get())[i].get();
        FUN_0036f210(&item);
    }
    s32 firstCount = lists->firstCount;
    for (s32 i = 0; i < firstCount; i++) {
        void *item = static_cast<RelativePointer *>(lists->firstTable.get())[i].get();
        FUN_0036efa8(&item);
    }
}

} /* extern "C" */
