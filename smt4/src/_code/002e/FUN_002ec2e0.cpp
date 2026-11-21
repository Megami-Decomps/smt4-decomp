/* NON_MATCHING: scissor wrapper and coordinate operand order recovered; saved directory arguments and index arithmetic differ. */
#include "camp/RenderCtxTitle.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct SpriteInfo;
extern "C" {
void textDrawFaded(u32 text, s32 x, s32 y, u32 parameter, f32 scale); // declcheck: local (the shared declaration does not compile here or changes this unit)
void asdTextDrawDirectoryEntry(u32 text, u32 a, s32 b, u32 c, u32 d, u32 e, s32 f);
void gxSetMirroredClippedScissor(s32 x, s32 y, s32 width, s32 height, u32 enabled);
void asdTextSetBaseColor(u32 text, u32 color);
void texDrawCompositeSprite(u32 kind, u32 table, u32 sprite, s32 x, s32 y, u32 parameter);

void FUN_002ec2e0(u32 text, u32 param2, s32 param3, s32 param4, s32 row, u32 sprite, s32 offset)
{
    asdTMTexTableEntryAt(0x39, 0xE0);
    TextureTableEntryIV* origin = asdTMTexTableEntryAt(0x39, row + 0xE6);
    texDrawCompositeSprite(2, 0x39, 0x13, origin->x, origin->y, 0x1F);
    texDrawTableEntryAtStoredOrigin(2, 0x39, 0xDF, origin->x, origin->y, 0x21);
    texDrawTableEntryAtStoredOrigin(2, 0x39, sprite, origin->x, origin->y, 0x22);
    TextureTableEntryIV* clip = asdTMTexTableEntryAt(0x39, 0xE0);
    RenderCtx* context = g_titleScene;
    renderStackSet(context->stacks + RENDER_STACK_SCISSOR, 3);
    gxSetMirroredClippedScissor(origin->x + clip->x, origin->y + clip->y, clip->placement->width, clip->placement->height, 1);
    texDrawTableEntryAtStoredOrigin(2, 0x39, 0xE2, origin->x + offset, origin->y, 0x65);
    context = g_titleScene;
    renderStackSet(context->stacks + RENDER_STACK_SCISSOR, 0);
    TextureTableEntryIV* label = asdTMTexTableEntryAt(0x39, 0xE4);
    texDrawTableEntryAtStoredOrigin(2, 0x39, 0xE3, origin->x, origin->y, 0xD);
    asdTextDrawDirectoryEntry(text, 3, -1, 0, 3, param2, param3 + row + param4);
    asdTextSetBaseColor(text, 0xFFFFFFFF);
    textDrawFaded(text, origin->x + label->x, origin->y + label->y, 0x15, 1.0f);
    asdTextSetBaseColor(text, 0x320202FF);
}
}
