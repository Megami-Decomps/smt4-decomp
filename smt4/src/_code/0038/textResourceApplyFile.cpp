#include "addon/AocSystem.h"
#include "addon/AocLinkedTexture.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gfx/TextureDrawBackend.h"
#include "gfx/TextureDrawRequest.h"

extern "C" {

/* Applies a package texture at the requested position. */
void textResourceApplyFile(AocSystem *system, s32 unused, u32 flags, s32 fileId, s32 x, s32 y, u32 transparency)
{
    enum { TEXTURE_BANK = 0x17 };
    AocLinkedTexture *texture = (AocLinkedTexture *)aocFindLinkedResource(system, TEXTURE_BANK, fileId);
    TexNode *node = asdTMTexTableCallFileB(TEXTURE_BANK, fileId);
    TextureDrawRequest request;
    requestParamsInitialize(&request, flags, x, y, transparency);
    FUN_002a8ac4((u16 *)&texture->bank->entry->handle->object->sprite, (u32 *)&request, (s32)node);
}

} /* extern "C" */
