/* NON_MATCHING: stack placement matches and the completion getter call matches; centered-text FP scheduling differs (retail uses separate vldr for origin.x/y, build uses vldm). */
#include "shard/Shard0033.h"
#include "shard/S1ListPanel.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

// The animation spans several already published ObjB members, so keep a local view.
struct SessionHintAnimationView {
    u8 prefix[0x1368];
    u8 finished;
    u8 unk1369;
    u8 requested;
    u8 unk136B;
    UiSpriteState animation;
};
struct HintTextFontSettingsPrefix { u8 prefix[0xC]; u32 font; };
extern "C" {
extern RenderCtxA* g_renderCtx;
extern HintTextFontSettingsPrefix g_uiTextFontSettings;
extern const char DAT_00532728[55];
void words2Copy(const void* source, void* destination);
u32 FUN_001692ac(u32 kind, u32 option);
void renderStackPushIndexed(RenderCtxA* context, s32 slot, u32 state);
void renderCtxPopState(RenderCtxA* context, s32 slot);
void efctSetSpeed(f32 speed);
void FUN_00183bb0(void);
s32 vec2GetXInt(UiSpriteState* animation);
void FUN_00164b5c(u32 kind, u32 table, u32 sprite, s32 x, s32 y, u32 parameter);
void __aeabi_memcpy4(void* destination, const void* source, u32 size);
f32 FUN_00168594(const char* text, u32 kind, f32 spacing);
void FUN_00163aa4(UiSpriteState* animation, f32 step);
s8 uiSpriteGetCompletionState(const UiSpriteState* sprite);

void FUN_0048b260(ObjB* work)
{
    char text[80];
    struct { f32 x, y; } origin;
    words2Copy(&work->spriteHeaders.headers[0].unk2C, &origin);
    u32 renderState = FUN_001692ac(1, 0);
    renderStackPushIndexed(g_renderCtx, 3, renderState);
    efctSetSpeed(1.0f);
    FUN_00183bb0();
    SessionHintAnimationView* hint = reinterpret_cast<SessionHintAnimationView*>(work);
    FUN_00164b5c(2, 0x13, 0x1C, static_cast<s32>(static_cast<f32>(vec2GetXInt(&hint->animation)) + origin.x),
        static_cast<s32>(origin.y), 0xD3);
    TextureTableEntryIV* sprite = asdTMTexTableEntryAt(0x13, 0x111B);
    __aeabi_memcpy4(text, DAT_00532728, 55);
    s32 textWidth = static_cast<s32>(FUN_00168594(text, 2, 0.0f));
    f32 centeredOffset = static_cast<f32>((sprite->placement->width - textWidth) / 2);
    s32 animationX = vec2GetXInt(&hint->animation);
    f32 textX = static_cast<f32>(animationX + sprite->x) + centeredOffset + origin.x;
    f32 textY = static_cast<f32>(sprite->y) + origin.y;
    textDrawString(2, g_uiTextFontSettings.font, text, textX, textY, 0.0f, 0.0f, 1.0f);
    renderCtxPopState(g_renderCtx, 3);
    efctSetSpeed(1.0f);
    FUN_00163aa4(&hint->animation, 1.0f);
    if (hint->requested && uiSpriteGetCompletionState(&hint->animation)) {
        hint->finished = 1;
    }
}
}
