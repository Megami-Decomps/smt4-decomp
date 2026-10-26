#include "common.h"
#include "code/Code002b_Smt4.h"

extern "C" {

typedef struct Block {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ u32 unk58;
    /* 0x5C */ u8 unk5C[0xC];
    /* 0x68 */ u32 unk68;
    /* 0x6C */ u8 unk6C[0xC];
    /* 0x78 */ u32 unk78;
} Block;

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ Block *block;
} Obj;

void FUN_002b2ae8(Obj *obj, u32 unused, u32 *out)
{
    Block *block = obj->block;

    out[0] = block->unk58;
    out[1] = block->unk68;
    out[2] = block->unk78;
}

} /* extern "C" */
