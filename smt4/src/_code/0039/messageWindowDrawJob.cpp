/* NON_MATCHING: render-stack push scheduling, coordinate conversion order, and VFP literal ordering differ. */
#include "font/SearchWin/RunWin.h"
#include "camp/RenderCtx.h"

extern "C" {
extern void *g_aocMain;
extern RenderCtx *g_titleScene;
MessageWindowDrawState *jobGetWork(void);
s32 vec2GetXInt(const void *window);
s32 vec2GetYInt(const void *window);
void FUN_002c39a4(RenderCtx *context);
s32 FUN_002c5d80(s32 first, s32 second);
void FUN_002bf380(s32 layer, s32 group, s32 kind, s32 x, s32 y, u32 flags);
const void *FUN_0023478c(void *table, u32 index);
s32 FUN_002347b8(void *table, const void *entry, void *strings);
const MessageDrawPosition *FUN_002bf4f8(u32 group, u32 index);
void FUN_002be5a4(u32 layer, u32 color, const u16 *text,
                  f32 x, f32 y, f32 scale, f32 angle, f32 alpha);

/* Draw the active message window and its formatted lines with a temporary render state. */
s32 messageWindowDrawJob(void *)
{
    MessageWindowDrawState *work = jobGetWork();
    void *table = g_aocMain;
    if ((work->flags & 0x1000) != 0) {
        void *window;
        if (work->mode == 0 || work->mode == 1) {
            window = work->firstWindow;
        } else if (work->mode == 2) {
            window = work->secondWindow;
        } else {
            return 0;
        }
        s32 x = vec2GetXInt(window);
        s32 y = vec2GetYInt(window);
        FUN_002c39a4(g_titleScene);
        RenderCtx *context = g_titleScene;
        renderStackPush(&context->stackA, FUN_002c5d80(1, 0));
        FUN_002bf380(2, 0x3A, 6, x, y, 0x81);
        u16 strings[8][64];
        const void *entry = FUN_0023478c(table, 0x65);
        s32 count = FUN_002347b8(table, entry, strings);
        for (s32 index = 0; index < count; ++index) {
            const MessageDrawPosition *position = FUN_002bf4f8(0x3A, index + 0x43);
            FUN_002be5a4(3, 0xFC4F46FF, strings[index],
                          (f32)(position->x + x), (f32)(position->y + y),
                          0.5f, 0.0f, 1.0f);
        }
        renderStackPop(&g_titleScene->stackA);
    }
    return 0;
}
}
