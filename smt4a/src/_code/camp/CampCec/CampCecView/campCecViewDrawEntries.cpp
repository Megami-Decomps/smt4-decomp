/* NON_MATCHING: stack-address evaluation order now matches retail (renderCtxPush wrappers); 42 diff lines remain, scheduling/register allocation only. */
#include "camp/CampCec/CampCecView.h"
#include "camp/RenderCtx.h"
#include "shard/Shard0032.h"
#include "Model/MoriModelShadowMap.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct CecViewRow { u32 data[5]; };
struct CecViewDrawState {
    u8 unk000[0xa0];
    u32 header[5];
    union {
        CecViewRow rows[3];
        struct {
            CecViewRow first[2];
            u32 footer;
            s32 inactive;
            u8 unk0e4[0xc];
        } footerState;
    } rowWork; // 0xb4
    u32 cursor[5]; // 0xf0
    u8 unk104[0x10];
    s32 selected, top;
    u32 unk11c, total;
    u8 unk124[8];
    u32 flags;
};
struct CecViewMarkEntry {
    MarkEntry base;
    u8 unk21[0x3f];
    u16 count;
};
extern "C" {
extern CampCecViewA *g_campCecView;
s32 FUN_001692ac(u32, u32);
u32 gameDataBlocksGetWord27E90();
void uiDrawNumberFrame(u32 *, s32, s32, u32, u32);
const CecViewMarkEntry *gameDataGetMarkEntry(s32);
void saveSlotDrawSummary(u32, const CecViewMarkEntry *, CecViewRow *, s32, s32, u32);
void FUN_00359c78(u32 *, s32, s32);
void FUN_0036c91c(u32 *, s32, s32, u32, u32, u32, s32, s32, u32);
void skinObjectUpdateMatrices(RenderCtxA *);
void efctSetSpeed(f32);

u32 campCecViewDrawEntries()
{
    CampCecViewA *view = g_campCecView;
    CecViewDrawState *draw = (CecViewDrawState *)view;
    FUN_00157558(g_renderCtx);
    RenderCtxA *render = g_renderCtx;
    renderCtxPushA(render, FUN_001692ac(1, 0));
    uiDrawNumberFrame(draw->header, 0, 0, gameDataBlocksGetWord27E90(), 0);
    for (s32 i = 0; i < 3; ++i) {
        const CecViewMarkEntry *entry = gameDataGetMarkEntry(draw->top + i);
        bool empty = entry->count == 0;
        bool selected = draw->selected == draw->top + i;
        const TextureTableEntryIV *position = asdTMTexTableEntryAt(46, i + 150);
        s32 y = position->y;
        s32 x = position->x;
        saveSlotDrawSummary(view->handle[i], entry, &draw->rowWork.rows[i], x, y, empty);
        if (selected && !draw->rowWork.footerState.inactive)
            FUN_00359c78(draw->cursor, x, y);
        if ((entry->base.flags & 0x10) && !draw->rowWork.footerState.inactive)
            effCreateRegisteredPair(x, y);
    }
    u32 flags = draw->flags;
    FUN_0036c91c(&draw->rowWork.footerState.footer, 0, 0, flags & 1, (flags & 2) >> 1,
                 (flags & 4) >> 2, draw->selected, draw->top, draw->total);
    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(g_renderCtx);
    efctSetSpeed(1.0f);
    return 0;
}
}
