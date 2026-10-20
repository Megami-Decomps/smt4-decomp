/* NON_MATCHING: register allocation only: retail keeps `kind` in r6 and the preset pointer in r5 (saving r3-r7) where the build reuses r0-r2 */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern AsdGxPresets DAT_0063fd88;

AsdGxTexture *asdTextureCreate(s32 unk);
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
u32 FUN_001bc2ec(void);

/* Creates a 512x512 index buffer of the given preset kind (0/1: small, 2: large) in heap
 * ASD_HEAP_EXTRA; the element type comes from the preset. */
AsdGxTexture *asdGxIndexBufferCreate(u32 kind)
{
    AsdGxTexture *tex = asdTextureCreate(0);
    AsdGxPreset *preset = NULL;

    if (kind == 0 || kind == 1) {
        tex->width = 0x200;
        preset = &DAT_0063fd88.small;
        tex->height = 0x200;
    } else if (kind == 2) {
        tex->width = 0x200;
        preset = &DAT_0063fd88.large;
        tex->height = 0x200;
    }
    tex->unk10 = 0;
    tex->format = preset->format;
    if (preset->typeSelector == 0) {
        tex->type = ASD_GL_UNSIGNED_SHORT;
    } else if (preset->typeSelector == 2) {
        tex->type = ASD_GL_UNSIGNED_INT;
    }
    tex->unk34 = preset->unk04;
    tex->byteSize = tex->width * tex->height;
    if (tex->type == ASD_GL_UNSIGNED_INT) {
        tex->byteSize = tex->byteSize * 4;
    } else {
        tex->byteSize = tex->byteSize * 2;
    }
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\Gx\\AsdGxRenderSystem.cpp", 2959);
    tex->pixels = asdMemoryAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, tex->byteSize, 1);
    tex->handle = FUN_001bc2ec();
    return tex;
}

} /* extern "C" */
