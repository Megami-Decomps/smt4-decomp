/* NON_MATCHING: mov r2, #0xb00 is emitted after the two pointer arguments instead of before them. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ u8 member[0x2C];  /* embedded sub-object */
    /* 0x90 */ u8 bufferA[4];
    /* 0x94 */ u8 bufferB[0xB00];
} Object;

int FUN_001914b8(void *member);
typedef struct BufRef {
    u8 *ptr;
} BufRef;

int FUN_001915c4(BufRef first, BufRef second, int size);
int FUN_002e5700(void *dst, u8 *src, int size, int align);
int FUN_004637fc(Object *self);

/* Destructor body: runs the base destructor, clears the buffers, then destroys the embedded sub-object and returns the object pointer. */
int FUN_00464a10(Object *self)
{
    BufRef first;
    BufRef second;

    FUN_004637fc(self);
    first.ptr = self->bufferA;
    second.ptr = self->bufferB;
    FUN_001915c4(first, second, 0xb00);
    FUN_002e5700(self->bufferB, (u8 *)0x1914b4, 0x58, 0x20);
    return FUN_001914b8(self->member) - 100;
}

} /* extern "C" */
