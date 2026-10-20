#include "common.h"

extern "C" {

int asdTexTgaLoadNw4c(void *block, u32 a, u32 b, int c);
int asdTextureSetImage(void *block);

typedef struct Block {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 unk10[0x28];
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u32 unk40;
} Block;

typedef struct Request {
    /* 0x00 */ Block *block;
    /* 0x04 */ u8 unk04[0x40];
    /* 0x44 */ u32 unk44;
    /* 0x48 */ u8 ready;
} Request;

void FUN_001f4b3c(u32 unused, Request *request, u32 arg)
{
    asdTexTgaLoadNw4c(request->block, request->unk44, arg, 0x10000);
    request->block->unk0C = 0x2000000;
    request->block->unk3C = 1;
    request->block->unk40 = 1;
    request->block->unk38 = 0;
    asdTextureSetImage(request->block);
    request->ready = 1;
}

} /* extern "C" */
