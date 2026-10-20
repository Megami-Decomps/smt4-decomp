#include "shard/Shard004D.h"

extern "C" {

typedef struct Sub10Owner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 unk08;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u8 block10[4];
} Sub10Owner;

extern u8 FUN_00228b04(u8 *block, s32 a);

void sub10OwnerStart(Sub10Owner *obj)
{
    if (obj->unk08 != 0) {
        FUN_00228b04(obj->block10, 1);
    }
}

} /* extern "C" */
