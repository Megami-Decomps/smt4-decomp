/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 43 vs built 34 rows, 30 diff lines. */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {

void *asdMemoryAlloc(int, int, int, s32 size, int flag);
void sysMemClear(void *block, s32 size);

/* Creates a 2D texture object with one reference. The allocation flag is cleared when `shared` is set. */
AsdTexture *asdTextureCreate(s32 shared)
{
    AsdTexture *tex;

    if (shared != 0) {
        tex = (AsdTexture *)asdMemoryAlloc(0x10000, 0x100, 0, 0x48, 0);
    } else {
        tex = (AsdTexture *)asdMemoryAlloc(0x10000, 0x100, 0, 0x48, 1);
    }
    sysMemClear(tex, 0x48);
    tex->unk08 = 0x10000;
    tex->target = ASDTEXTURE_TARGET_2D;
    tex->unk38 = 2;
    tex->unk3c = 0;
    tex->unk40 = 0;
    tex->refCount++;
    return tex;
}

} /* extern "C" */
