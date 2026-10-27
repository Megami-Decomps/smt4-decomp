/* NON_MATCHING: initial message-state load register and final state-pop tail-call lowering differ. */
#include "camp/RenderCtx.h"
#include "ui/UiSpriteState.h"
#include "ui/MessageMain.h"
#include "util/BitsAndBytes.h"

struct MessageBoxCategoryViewA {
    u8 unk00[0x48];
    u16 category;
};
/* A typed sprite view avoids aligning MessageWorkA's odd-sized opaque region. */
struct MessageSpriteDrawViewA {
    u32 unk00;
    const MessageBoxCategoryViewA *config;
    u8 state;
    u8 mode;
    u8 unk00A[0x1AA];
    UiSpriteState first;
    u8 unk240[0x8C];
    UiSpriteState category;
    UiSpriteState third;
    u8 unk3E4[0x8C];
    UiSpriteState fourth;
    UiSpriteState special;
    u8 unk588[0x1324];
    UiSpriteState modeExtra;
};
typedef char MessageSpriteDrawOffsetsA[
    offsetof(MessageSpriteDrawViewA, first) == 0x1B4 &&
    offsetof(MessageSpriteDrawViewA, category) == 0x2CC &&
    offsetof(MessageSpriteDrawViewA, third) == 0x358 &&
    offsetof(MessageSpriteDrawViewA, fourth) == 0x470 &&
    offsetof(MessageSpriteDrawViewA, special) == 0x4FC &&
    offsetof(MessageSpriteDrawViewA, modeExtra) == 0x18AC ? 1 : -1];
extern "C" {
extern RenderCtxA *g_renderCtx;
s32 FUN_001692ac(u32, u32);
void renderStackPushIndexed(RenderCtxA *, s32, s32);
s32 renderCtxPopState(RenderCtxA *, s32);
void efctSetSpeed(f32);
void FUN_00183bb0();
f32 renderCtxCalculateStereoParallax(RenderCtxA *, f32);
void FUN_001634b4(UiSpriteState *, f32);
void pairSetSecondResetFirst(UiSpriteState *, u32);

void FUN_001678a8(MessageWorkA *message)
{
    MessageSpriteDrawViewA *work = reinterpret_cast<MessageSpriteDrawViewA *>(message);
    if (!message->state)
        return;
    renderStackPushIndexed(g_renderCtx, 3, FUN_001692ac(1, 0));
    efctSetSpeed(1.0f);
    FUN_00183bb0();
    s32 parallax = static_cast<s32>(renderCtxCalculateStereoParallax(g_renderCtx, 0.25f));
    if (work->mode == 7 || work->mode == 8 || work->mode == 9) {
        RenderCtxA *context = g_renderCtx;
        renderCtxSetB(context, packNibblesAndByte(6, 1, 0));
        FUN_001634b4(&work->special, static_cast<f32>(parallax));
        context = g_renderCtx;
        renderCtxSetB(context, packNibblesAndByte(6, 7, 0));
    }
    s32 category = work->config->category;
    if (category <= 2)
        pairSetSecondResetFirst(&work->category, 31);
    else if (category <= 4)
        pairSetSecondResetFirst(&work->category, 27);
    else if (category <= 6)
        pairSetSecondResetFirst(&work->category, 28);
    else if (category <= 8)
        pairSetSecondResetFirst(&work->category, 30);
    else
        pairSetSecondResetFirst(&work->category, 29);
    FUN_001634b4(&work->first, static_cast<f32>(parallax));
    FUN_001634b4(&work->category, static_cast<f32>(parallax));
    FUN_001634b4(&work->third, static_cast<f32>(parallax));
    if (work->mode == 11)
        FUN_001634b4(&work->modeExtra, static_cast<f32>(parallax));
    FUN_001634b4(&work->fourth, static_cast<f32>(parallax));
    renderCtxPopState(g_renderCtx, 3);
}
}
