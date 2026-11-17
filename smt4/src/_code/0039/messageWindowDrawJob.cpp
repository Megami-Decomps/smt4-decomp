/* NON_MATCHING: stack-address evaluation order now matches retail (renderCtxPush wrappers); 26 diff lines remain, scheduling/register allocation only. */
#include "font/SearchWin/RunWin.h"
#include "addon/aocMain.h"
#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxTitle.h"
#include "ui/UiSpriteApi.h"

extern "C" {
MessageWindowDrawState *jobGetWork(void);
s32 renderCtxPackPassFlags(s32 first, s32 second);
void texDrawCompositeSprite(s32 layer, s32 group, s32 kind, s32 x, s32 y, u32 flags);
const void *FUN_0023478c(AocMain *main, u32 index);
s32 FUN_002347b8(AocMain *main, const void *entry, void *strings);
void textDrawString(u32 layer, u32 color, const u16 *text,
                  f32 x, f32 y, f32 scale, f32 angle, f32 alpha);

/* Draw the active message window and its formatted lines with a temporary render state. */
s32 messageWindowDrawJob(void *)
{
    MessageWindowDrawState *work = jobGetWork();
    AocMain *main = g_aocMain;
    if ((work->flags & 0x1000) != 0) {
        void *window;
        if (work->mode == 0 || work->mode == 1) {
            window = work->firstWindow;
        } else if (work->mode == 2) {
            window = work->secondWindow;
        } else {
            return 0;
        }
        s32 x = vec2GetXInt((const UiSpriteState *)window);
        s32 y = vec2GetYInt((const UiSpriteState *)window);
        renderCtxSelectStereoLayout(g_titleScene);
        RenderCtx *context = g_titleScene;
        renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
        texDrawCompositeSprite(2, 0x3A, 6, x, y, 0x81);
        u16 strings[8][64];
        const void *entry = FUN_0023478c(main, 0x65);
        s32 count = FUN_002347b8(main, entry, strings);
        for (s32 index = 0; index < count; ++index) {
            const TextureTableEntryIV *position = asdTMTexTableEntryAt(0x3A, index + 0x43);
            textDrawString(3, 0xFC4F46FF, strings[index],
                          (f32)(position->x + x), (f32)(position->y + y),
                          0.5f, 0.0f, 1.0f);
        }
        renderStackPop(&g_titleScene->stackA);
    }
    return 0;
}
}
