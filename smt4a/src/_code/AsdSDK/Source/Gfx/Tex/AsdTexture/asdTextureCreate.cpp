/* NON_MATCHING: the debug traces now match; the field stores after memClear are scheduled differently (retail stores unk08/target/unk38.. first and increments refCount last as a separate load/add/store; built merges them into one stm). */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_0053d290[];

void *asdMemoryAlloc(int, int, int, s32 size, int flag);
void sysMemClear(void *block, s32 size);

/* Creates a 2D texture object with one reference. The allocation flag is cleared when `shared` is set. */
AsdTexture *asdTextureCreate(s32 shared)
{
    AsdTexture *tex;

    if (shared != 0) {
        asdDebugTrace(DAT_0053d290, 43);
        tex = (AsdTexture *)asdMemoryAlloc(0x10000, 0x100, 0, 0x48, 0);
    } else {
        asdDebugTrace(DAT_0053d290, 47);
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
