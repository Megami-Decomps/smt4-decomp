#include "shard/Shard004D.h"

extern "C" {

typedef struct PtrTable44 {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u32 ptrs[0x41];
} PtrTable44;

extern void asdMemFree(u32 ptr);

/* Frees the 0x41 pointers stored from +0x44 (non-null ones) and returns the owner. */
PtrTable44 *ptrTable44FreeAll(PtrTable44 *obj)
{
    s32 i = 0;

    do {
        if (obj->ptrs[i] != 0) {
            asdMemFree(obj->ptrs[i]);
        }
        i++;
    } while (i < 0x41);
    return obj;
}

} /* extern "C" */
