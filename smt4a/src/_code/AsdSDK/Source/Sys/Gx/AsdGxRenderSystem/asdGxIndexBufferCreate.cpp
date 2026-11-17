#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_Smt4a.h"

extern "C" {
AsdGxTexture *asdTextureCreate(s32 mode);
void *asdMemoryAlloc(s32 heap, s32 alignment, s32 options, u32 size, s32 fromFront);
u32 asdGxGetPhysicalAddress(void);

AsdGxTexture *asdGxIndexBufferCreate(u32 kind)
{
    AsdGxRenderBuffer *preset = 0;
    AsdGxTexture *texture = asdTextureCreate(0);

    if (kind == 0 || kind == 1) {
        texture->width = 512;
        preset = &g_asdGxPresets.framebuffers[0].color;
        texture->height = 512;
    } else if (kind == 2) {
        texture->width = 512;
        preset = &g_asdGxPresets.framebuffers[2].color;
        texture->height = 512;
    }

    texture->unk10 = 0;
    texture->format = preset->format;
    if (preset->typeSelector == 0) {
        texture->type = ASD_GL_UNSIGNED_SHORT;
    } else if (preset->typeSelector == 2) {
        texture->type = ASD_GL_UNSIGNED_INT;
    }
    texture->unk34 = preset->unk04;
    texture->byteSize = (u32)texture->width * (u32)texture->height;
    if (texture->type == ASD_GL_UNSIGNED_INT) {
        texture->byteSize <<= 2;
    } else {
        texture->byteSize <<= 1;
    }

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Sys\\Gx\\AsdGxRenderSystem.cpp", 2959);
    texture->pixels = asdMemoryAlloc(0x10000, 0x100, 0, texture->byteSize, 1);
    texture->handle = asdGxGetPhysicalAddress();
    return texture;
}
}
