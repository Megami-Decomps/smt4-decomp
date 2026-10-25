/* NON_MATCHING: canonical renderCtxPushA wrapper is used; cached-stack push registers, paired selection/footer loads, and saved boolean registers still differ. */
#include "camp/CampCec/CampCecView.h"
#include "camp/RenderCtx.h"

struct CecViewWidget {
    u32 unk00;
    s32 x;
    s32 y;
    u8 unk0c[8];
};
struct CecViewDrawFields {
    u8 unk000[0xc8];
    CecViewWidget widgets[5];
    u8 unk12c[0x10];
    s32 selected;
    s32 first;
    u32 unk144;
    s32 count;
    u8 unk14c[8];
    u32 flags;
};
struct CecViewSavedRecord {
    u8 unk00[0x20];
    u8 flags;
    u8 unk21[0x27];
    u16 value48;
    u8 unk4a[2];
};

extern "C" {
extern CampCecView *g_campCecView;
extern RenderCtx *g_titleScene;
void FUN_002c39a4(RenderCtx *);
s32 FUN_002c5d80(u32, u32);
void FUN_002c198c(RenderCtx *);
u32 FUN_0025981c();
CecViewSavedRecord *saveGetIndexedMapValue(u32);
u16 *FUN_002bf4f8(u32, s32);
void uiDrawPanelWithValue(CecViewWidget *, s32, s32, u32, s32);
void FUN_001eb874(u32, CecViewSavedRecord *, CecViewWidget *, s32, s32, bool);
void FUN_002e15f8(CecViewWidget *, s32, s32);
void FUN_002ec0b4(s32, s32);
void FUN_002ec0fc(CecViewWidget *, s32, s32, u32, u32, u32, s32, s32, s32);

u32 campCecViewDrawCallback()
{
    CampCecView *view = g_campCecView;
    CecViewDrawFields *fields = reinterpret_cast<CecViewDrawFields *>(view);
    FUN_002c39a4(g_titleScene);
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, FUN_002c5d80(1, 0));
    u32 headerValue = FUN_0025981c();
    uiDrawPanelWithValue(&fields->widgets[0], 0, 0, headerValue, 0);
    for (s32 row = 0; row < 3; ++row) {
        CecViewSavedRecord *record = saveGetIndexedMapValue(fields->first + row);
        bool empty = record->value48 == 0;
        bool selected = fields->selected == fields->first + row;
        const s16 *spriteWords = reinterpret_cast<const s16 *>(FUN_002bf4f8(0x39, row + 0x96));
        s32 y = spriteWords[5];
        s32 x = spriteWords[4];
        FUN_001eb874(view->handle[row], record, &fields->widgets[row + 1], x, y, empty);
        if (selected && fields->widgets[3].x == 0)
            FUN_002e15f8(&fields->widgets[4], x, y);
        if ((record->flags & 0x10) && fields->widgets[3].x == 0)
            FUN_002ec0b4(x, y);
    }
    u32 flags = fields->flags;
    FUN_002ec0fc(&fields->widgets[3], 0, 0, flags & 1, (flags & 2) >> 1, (flags & 4) >> 2,
                 fields->selected, fields->first, fields->count);
    renderStackPop(&g_titleScene->stackA);
    FUN_002c198c(g_titleScene);
    return 0;
}
}
