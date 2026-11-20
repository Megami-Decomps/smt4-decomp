#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_Smt4.h"

extern "C" {
extern const char g_asdGxRenderSystemSourceFileName[];

AsdGxTexture *asdTextureCreate(s32 unk);
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
u32 osVirtToPhysAddress(void);

/* Creates a 512x512 index buffer for screen target `kind` (0/1: framebuffer 0, 2: framebuffer 2) in
 * heap ASD_HEAP_EXTRA; format and element type come from that framebuffer's color buffer. */
AsdGxTexture *asdGxIndexBufferCreate(u32 kind)
{
    AsdGxRenderBuffer *preset = NULL;
    AsdGxTexture *tex = asdTextureCreate(0);

    if (kind == 0 || kind == 1) {
        tex->width = 0x200;
        preset = &g_asdGxPresets.framebuffers[0].color;
        tex->height = 0x200;
    } else if (kind == 2) {
        tex->width = 0x200;
        preset = &g_asdGxPresets.framebuffers[2].color;
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
    asdDebugTrace(g_asdGxRenderSystemSourceFileName, 2950);
    tex->pixels = asdMemoryAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, tex->byteSize, 1);
    tex->handle = osVirtToPhysAddress();
    return tex;
}

} /* extern "C" */
