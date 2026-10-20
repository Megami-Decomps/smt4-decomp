#include "common.h"

extern "C" {

int FUN_002c0894(int resource);
int asdMemFree(...);

typedef struct Block {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 buffer;
    /* 0x0C */ u8 unk0C[0x14];
    /* 0x20 */ int extra;
} Block;

typedef struct Obj {
    /* 0x0 */ Block *block;
    /* 0x4 */ u8 unk4[8];
    /* 0xC */ int resource;
} Obj;

void FUN_002e1344(Obj *obj)
{
    Block *block = obj->block;

    if (block->extra != 0) {
        asdMemFree(block->extra);
    }
    asdMemFree(block->buffer);
    asdMemFree(obj->block);
    FUN_002c0894(obj->resource);
    asdMemFree(obj);
}

} /* extern "C" */
