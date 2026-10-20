#include "common.h"

extern "C" {

void FUN_002ec728(u8 *member);
void FUN_002ecb04(u32 node, u32 arg);
void FUN_002ecb32(void *object);

typedef struct TreeObject {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 *first;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u32 *second;
    /* 0x14 */ u8 unk14[0x0C];
    /* 0x20 */ u8 member20[1];
} TreeObject;

/* Tears the object down: the embedded member, then the two values its pointers refer to, then the object itself. */
void FUN_00105d2c(TreeObject *object, u32 arg)
{
    FUN_002ec728(object->member20);
    FUN_002ecb04(*object->first, arg);
    FUN_002ecb04(*object->second, arg);
    FUN_002ecb32(object);
}

} /* extern "C" */
