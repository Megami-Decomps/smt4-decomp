#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {

int asdTexTgaLoadNw4c(void *block, u32 a, u32 b, int c);

typedef struct Request {
    /* 0x00 */ AsdTexture *block;
    /* 0x04 */ u8 unk04[0x40];
    /* 0x44 */ u32 unk44;
    /* 0x48 */ u8 ready;
} Request;

void FUN_001f4b3c(u32 unused, Request *request, u32 arg)
{
    asdTexTgaLoadNw4c(request->block, request->unk44, arg, 0x10000);
    request->block->image.flags = 0x2000000;
    request->block->unk3c = 1;
    request->block->unk40 = 1;
    request->block->unk38 = 0;
    asdTextureSetImage(request->block);
    request->ready = 1;
}

} /* extern "C" */
