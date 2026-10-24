/* NON_MATCHING: register allocation of the spilled arguments differs (retail keeps the fourth argument in r9, we keep the second) and the scissor push schedules its address differently. */
#include "camp/RenderCtx.h"

struct SpriteInfo;
// Coordinate-only view of a layout entry.
struct LayoutEntryView { u8 prefix[8]; s16 x, y; s16* size; };
// The scissor stack lies beyond the published IV render-context prefix.
struct TitleSceneScissorViewIV {
    RenderCtx context;
    u8 unk12CC[0x40];
    RenderStateStack scissor;
};
extern "C" {
extern RenderCtx* g_titleScene;
void FUN_002598f0(u32 text, s32 x, s32 y, u32 parameter, f32 scale);
void asdTextDrawDirectoryEntry(u32 text, u32 a, s32 b, u32 c, u32 d, u32 e, s32 f);
void FUN_0029a17c(s32 x, s32 y, s32 width, s32 height, u32 enabled);
void FUN_002bd82c(u32 text, u32 color);
void FUN_002bf288(u32 kind, u32 table, u32 sprite, s32 x, s32 y, u32 parameter);
void FUN_002bf380(u32 kind, u32 table, u32 sprite, s32 x, s32 y, u32 parameter);
SpriteInfo* FUN_002bf4f8(u32 table, u32 id);

void FUN_002ec2e0(u32 text, u32 param2, s32 param3, s32 param4, s32 row, u32 sprite, s32 offset)
{
    FUN_002bf4f8(0x39, 0xE0);
    LayoutEntryView* origin = reinterpret_cast<LayoutEntryView*>(FUN_002bf4f8(0x39, row + 0xE6));
    FUN_002bf380(2, 0x39, 0x13, origin->x, origin->y, 0x1F);
    FUN_002bf288(2, 0x39, 0xDF, origin->x, origin->y, 0x21);
    FUN_002bf288(2, 0x39, sprite, origin->x, origin->y, 0x22);
    LayoutEntryView* clip = reinterpret_cast<LayoutEntryView*>(FUN_002bf4f8(0x39, 0xE0));
    TitleSceneScissorViewIV* context = reinterpret_cast<TitleSceneScissorViewIV*>(g_titleScene);
    renderStackSet(&context->scissor, 3);
    FUN_0029a17c(origin->x + clip->x, origin->y + clip->y, clip->size[0], clip->size[1], 1);
    FUN_002bf288(2, 0x39, 0xE2, origin->x + offset, origin->y, 0x65);
    context = reinterpret_cast<TitleSceneScissorViewIV*>(g_titleScene);
    renderStackSet(&context->scissor, 0);
    LayoutEntryView* label = reinterpret_cast<LayoutEntryView*>(FUN_002bf4f8(0x39, 0xE4));
    FUN_002bf288(2, 0x39, 0xE3, origin->x, origin->y, 0xD);
    asdTextDrawDirectoryEntry(text, 3, -1, 0, 3, param2, param3 + row + param4);
    FUN_002bd82c(text, 0xFFFFFFFF);
    FUN_002598f0(text, origin->x + label->x, label->y + origin->y, 0x15, 1.0f);
    FUN_002bd82c(text, 0x320202FF);
}
}
