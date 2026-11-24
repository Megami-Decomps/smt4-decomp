/* NON_MATCHING: overlay/text argument contracts and the 128-byte text buffer match retail; the zero and g_mapIf registers are swapped (r6/r7) and the slide-out cases' idle return gets its own epilogue copy where retail branches to the shared one. */
#include "code/Code0023_Smt4a.h"
#include "camp/RenderCtx.h"
#include "gfx/ColoredQuad.h"
#include "shard/TextureDrawCall.h"
#include "Model/MoriModelShadowMap.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "map/MapIfGlobals.h"

#define NOTICE_STATE_IDLE 0
#define NOTICE_STATE_SLIDE_IN 1
#define NOTICE_STATE_HOLD 2
#define NOTICE_STATE_SLIDE_OUT_LONG 3
#define NOTICE_STATE_SLIDE_OUT_SHORT 4
#define NOTICE_SLIDE_FRAMES 10
#define NOTICE_SLIDE_SPEED 40.0f
#define NOTICE_SLIDE_START -400.0f
#define NOTICE_LONG_START 0x32
#define NOTICE_LONG_END 0x3C
#define NOTICE_SHORT_START 10
#define NOTICE_SHORT_END 0x14
#define NOTICE_ENTRY_NONE -1
#define NOTICE_ENTRY_SPECIAL 0x18
#define NOTICE_FRAME_FIRST 0x107
#define NOTICE_FRAME_LAST 0x10A

struct MapNoticeEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 id;
};

extern "C" {

s32 dataTable2ECount(void);
MapNoticeEntry *dataTable2EGetEntry(s32 index);
s32 findKeyedRecord(s32 id, s32 sub);
void FUN_003849cc(s32 id, s32 sub, s32 flag, char *buffer, s32 level);

s32 FUN_00315d34(u32 handle)
{
    MapIfStateA *screen = g_mapIf.state;

    if (screen->unk3C != 0) {
        u32 overlay = screen->unk40;
        RenderCtxA *context = g_renderCtx;
        s32 state = renderCtxPackPassFlags(5, 1);
        renderCtxPushA(context, state);
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
        renderCtxSelectTexture(g_renderCtx, NULL);
        gxSubmitDrawZeroExtraParams(0.0f, 0.0f, 400.0f, 240.0f, overlay, overlay, overlay, 0.0f, overlay);
        effectSubmitDefaultDrawParameters();
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    }

    screen = g_mapIf.state;
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(8, 0x10B);
    f32 offset = 0.0f;
    s32 frameNumber;
    switch (screen->notice.state) {
    case NOTICE_STATE_IDLE:
        return 0;
    case NOTICE_STATE_SLIDE_IN:
        screen->notice.frame++;
        frameNumber = screen->notice.frame;
        offset = (f32)(frameNumber * (s32)NOTICE_SLIDE_SPEED) + NOTICE_SLIDE_START;
        if (frameNumber >= NOTICE_SLIDE_FRAMES) {
            screen->notice.state = NOTICE_STATE_HOLD;
            screen->notice.frame = 0;
        }
        break;
    case NOTICE_STATE_HOLD:
        screen->notice.frame++;
        break;
    case NOTICE_STATE_SLIDE_OUT_LONG:
        screen->notice.frame++;
        frameNumber = screen->notice.frame;
        if (frameNumber >= NOTICE_LONG_START)
            offset = -(f32)((frameNumber - NOTICE_LONG_START) * (s32)NOTICE_SLIDE_SPEED);
        if (frameNumber > NOTICE_LONG_END) {
            screen->notice.state = NOTICE_STATE_IDLE;
            screen->notice.frame = 0;
            return 0;
        }
        break;
    case NOTICE_STATE_SLIDE_OUT_SHORT:
        screen->notice.frame++;
        frameNumber = screen->notice.frame;
        if (frameNumber >= NOTICE_SHORT_START)
            offset = -(f32)((frameNumber - NOTICE_SHORT_START) * (s32)NOTICE_SLIDE_SPEED);
        if (frameNumber > NOTICE_SHORT_END) {
            screen->notice.state = NOTICE_STATE_IDLE;
            screen->notice.frame = 0;
            return 0;
        }
        break;
    }

    for (s32 i = 0; i < dataTable2ECount(); i++) {
        MapNoticeEntry *entry = dataTable2EGetEntry(i);
        if (entry->id == NOTICE_ENTRY_NONE)
            return 0;
        if (entry->id == screen->notice.id)
            break;
    }

    if (screen->notice.id == NOTICE_ENTRY_SPECIAL || findKeyedRecord(screen->notice.id, screen->notice.arg) != 0) {
        RenderCtxA *context = g_renderCtx;
        s32 state = renderCtxPackPassFlags(1, 0);
        renderCtxPushA(context, state);
        for (s32 sprite = NOTICE_FRAME_FIRST; sprite <= NOTICE_FRAME_LAST; sprite++)
            texDrawTableEntryAtStoredOrigin(2, 8, sprite, (s32)offset, 0, 0xB);
        char text[128];
        FUN_003849cc(screen->notice.id, screen->notice.arg, 0, text, -1);
        textDrawString((f32)frame->x + offset, (f32)frame->y, 0.0f, 3, 1.0f,
                      0xFFFFFFFF, 1.0f, text);
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    }
    return 0;
}

} /* extern "C" */
