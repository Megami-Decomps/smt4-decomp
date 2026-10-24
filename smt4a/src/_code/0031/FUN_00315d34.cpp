/* NON_MATCHING: draws the map interface notice (slides in, holds, slides out; frame sprites and the entry text) and the optional overlay layer; written from the decompilation, the data table scan and float argument order are not compared with retail */
#include "camp/RenderCtx.h"

#define NOTICE_STATE_IDLE 0
#define NOTICE_STATE_SLIDE_IN 1
#define NOTICE_STATE_HOLD 2
#define NOTICE_STATE_SLIDE_OUT_LONG 3
#define NOTICE_STATE_SLIDE_OUT_SHORT 4
#define NOTICE_SLIDE_FRAMES 10
#define NOTICE_SLIDE_SPEED 40.0f
#define NOTICE_SLIDE_START -400.0f
#define NOTICE_LONG_START 0x32
#define NOTICE_LONG_END 0x3D
#define NOTICE_SHORT_START 10
#define NOTICE_SHORT_END 0x15
#define NOTICE_ENTRY_NONE -1
#define NOTICE_ENTRY_SPECIAL 0x18
#define NOTICE_FRAME_FIRST 0x107
#define NOTICE_FRAME_LAST 0x10A

struct MapNoticeEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 id;
};

struct NoticeFrame {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

struct MapInterface {
    /* 0x0000 */ u8 unk0000[0x3C];
    /* 0x003C */ s32 overlayShown;
    /* 0x0040 */ u32 overlayId;
    /* 0x0044 */ u8 unk0044[0xCCA4];
    /* 0xCCE8 */ s16 state;
    /* 0xCCEA */ s16 frame;
    /* 0xCCEC */ s16 entryId;
    /* 0xCCEE */ s16 entrySub;
};

extern "C" {
extern MapInterface *g_mapIf;
extern RenderCtxA *g_renderCtx;

s32 FUN_001692ac(u32 a, u32 b);
void FUN_00157558(RenderCtxA *context);
void FUN_0016c4b8(RenderCtxA *context, void *surface);
void FUN_0014e314(u32 id);
void FUN_002371b0(void);
NoticeFrame *FUN_001834a4(u32 table, u32 index);
void FUN_001835b4(u32 layer, u32 table, u32 sprite, s32 x, s32 y, u32 flags);
s32 dataTable2ECount(void);
MapNoticeEntry *dataTable2EGetEntry(s32 index);
s32 findKeyedRecord(s32 id, s32 sub);
void FUN_003849cc(s32 id, s32 sub, s32 flag, u8 *buffer, u32 mask);
void FUN_00162790(u32 layer, u32 mask, u8 *buffer, f32 x, f32 y);

u32 FUN_00315d34(void)
{
    MapInterface *screen = g_mapIf;
    f32 offset = 0.0f;

    if (screen->overlayShown != 0) {
        u32 overlay = screen->overlayId;
        RenderCtxA *context = g_renderCtx;
        s32 state = FUN_001692ac(5, 1);
        renderStackPush(&context->stackA, state);
        FUN_00157558(g_renderCtx);
        FUN_0016c4b8(g_renderCtx, NULL);
        FUN_0014e314(overlay);
        FUN_002371b0();
        renderStackPop(&g_renderCtx->stackA);
    }

    screen = g_mapIf;
    NoticeFrame *frame = FUN_001834a4(8, 0x10B);
    s32 frameNumber = screen->state;
    switch (screen->state) {
    case NOTICE_STATE_IDLE:
        return 0;
    case NOTICE_STATE_SLIDE_IN:
        screen->frame++;
        frameNumber = screen->frame;
        offset = (f32)(frameNumber * (s32)NOTICE_SLIDE_SPEED) + NOTICE_SLIDE_START;
        if (frameNumber >= NOTICE_SLIDE_FRAMES) {
            screen->state = NOTICE_STATE_HOLD;
            screen->frame = 0;
        }
        break;
    case NOTICE_STATE_HOLD:
        screen->frame++;
        break;
    case NOTICE_STATE_SLIDE_OUT_LONG:
        screen->frame++;
        frameNumber = screen->frame;
        if (frameNumber >= NOTICE_LONG_START)
            offset = -(f32)((frameNumber - NOTICE_LONG_START) * (s32)NOTICE_SLIDE_SPEED);
        if (frameNumber >= NOTICE_LONG_END) {
            screen->state = NOTICE_STATE_IDLE;
            screen->frame = 0;
            return 0;
        }
        break;
    case NOTICE_STATE_SLIDE_OUT_SHORT:
        screen->frame++;
        frameNumber = screen->frame;
        if (frameNumber >= NOTICE_SHORT_START)
            offset = -(f32)((frameNumber - NOTICE_SHORT_START) * (s32)NOTICE_SLIDE_SPEED);
        if (frameNumber >= NOTICE_SHORT_END) {
            screen->state = NOTICE_STATE_IDLE;
            screen->frame = 0;
            return 0;
        }
        break;
    }

    s32 entryCount = dataTable2ECount();
    for (s32 i = 0; i < entryCount; i++) {
        s32 id = dataTable2EGetEntry(i)->id;
        if (id == NOTICE_ENTRY_NONE)
            return 0;
        if (id == screen->entryId)
            break;
        entryCount = dataTable2ECount();
    }

    if (screen->entryId == NOTICE_ENTRY_SPECIAL || findKeyedRecord(screen->entryId, screen->entrySub) != 0) {
        RenderCtxA *context = g_renderCtx;
        s32 state = FUN_001692ac(1, 0);
        renderStackPush(&context->stackA, state);
        for (u32 sprite = NOTICE_FRAME_FIRST; sprite <= NOTICE_FRAME_LAST; sprite++)
            FUN_001835b4(2, 8, sprite, (s32)offset, 0, 0xB);
        u8 text[144];
        FUN_003849cc(screen->entryId, screen->entrySub, 0, text, 0xFFFFFFFF);
        FUN_00162790(3, 0xFFFFFFFF, text, (f32)frame->x, (f32)frame->y);
        renderStackPop(&g_renderCtx->stackA);
    }
    return 0;
}

} /* extern "C" */
