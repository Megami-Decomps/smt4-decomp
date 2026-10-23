/* NON_MATCHING: background-speed subobject addressing and one touch-mode scratch copy differ; the selected cold branch now agrees. */
#include "camp/RenderCtx.h"
#include "ui/UiSpriteState.h"
#include "shard/W9_W9Match8_WorkRecords.h"

struct SpriteInfo;
// Coordinate-only view avoids including a conflicting Apocalypse RenderCtx definition.
struct CampButtonSpriteView { u8 prefix[8]; s16 x, y; s16* size; };
struct CampButtonAnimationViewIV {
    CampHelpPrefixIV prefix;
    u8 unk0AE[0x6B2];
    UiSpriteState marker;
    UiSpriteState background;
};
// The scissor stack lies beyond the published IV render-context prefix.
struct CampButtonRenderViewIV {
    RenderCtx context;
    u8 unk12CC[0x40];
    RenderStateStack scissor;
};
extern "C" {
extern CampHelpPrefixIV* g_camp;
extern RenderCtx* g_titleScene;
void efctSetSpeed(f32 speed);
void FUN_002bf380(u32 kind, u32 table, u32 sprite, s32 x, s32 y, u32 parameter);
void FUN_002bf288(u32 kind, u32 table, u32 sprite, s32 x, s32 y, u32 parameter);
s32 ifTouchGetSelectionModeForRegion(u32 region);
SpriteInfo* FUN_002bf4f8(u32 table, u32 id);
s32 vec2GetXInt(UiSpriteState* animation);
s32 vec2GetYInt(UiSpriteState* animation);
void FUN_0029a17c(s32 x, s32 y, s32 width, s32 height, u32 enabled);

void FUN_0028f694(s32 x, s32 y, u32 region)
{
    CampButtonAnimationViewIV* camp = reinterpret_cast<CampButtonAnimationViewIV*>(g_camp);
    efctSetSpeed(camp->background.unk20);
    FUN_002bf380(2, 0x1D, 6, x, y, 0x79);
    efctSetSpeed(1.0f);
    FUN_002bf288(2, 0x1D, 0x429, x, y, 0x7E);
    switch (ifTouchGetSelectionModeForRegion(region)) {
    case 1:
    case 2:
    case 6:
        FUN_002bf288(2, 0x1D, 0x42B, x, y, 0x83);
        break;
    default:
        FUN_002bf288(2, 0x1D, 0x42A, x, y, 0x83);
        break;
    }
    CampButtonSpriteView* sprite = reinterpret_cast<CampButtonSpriteView*>(FUN_002bf4f8(0x1D, 0x42A));
    s32 markerX = vec2GetXInt(&camp->marker);
    s32 markerY = vec2GetYInt(&camp->marker);
    CampButtonRenderViewIV* context = reinterpret_cast<CampButtonRenderViewIV*>(g_titleScene);
    renderStackSet(&context->scissor, 3);
    FUN_0029a17c(sprite->x + x, sprite->y + y, sprite->size[0], sprite->size[1], 1);
    FUN_002bf288(2, 0x1D, 0x42C, x + markerX, y + markerY, 0x88);
    context = reinterpret_cast<CampButtonRenderViewIV*>(g_titleScene);
    renderStackSet(&context->scissor, 0);
}
}
