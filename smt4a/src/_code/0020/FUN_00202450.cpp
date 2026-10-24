/* NON_MATCHING: render-stack push scheduling; retail re-reads g_camp for the FUN_00335060 argument and duplicates the party-count tail per switch path (different switch/branch layout and register use). */
#include "camp/RenderCtx.h"

/* The camp state fields the draw step reads. */
struct CampDrawView {
    u8 unk00[0x1C];
    s32 screen;         // 0x1C
    u8 unk20[0x20];
    u8 list[0x64];      // 0x40
    s8 category;        // 0xA4
};

extern "C" {
extern CampDrawView *g_camp;
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
s32 FUN_001692ac(u32 kind, bool enabled);
u32 FUN_002a4878(void *list);
s32 FUN_003da8f4(s32 category, u32 selection);
s32 partyCountOccupiedSlots(void);
void FUN_00335060(CampDrawView *camp);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Whether the selected entry kind never needs the party sub-screen. */
static __inline bool entryKindIsExcluded(s32 kind)
{
    return kind == 9 || kind == 0x23 || kind == 0x24 || kind == 0x25 || kind == 0x26 || kind == 0x2C ||
           kind == 0x41 || kind == 0x2D || kind == 0x2E || kind == 0x2F || kind == 0x30 || kind == 0x31 ||
           kind == 0x32;
}

/* Draw the camp's party sub-screen when the current screen has one. */
u32 FUN_00202450(void)
{
    CampDrawView *camp = g_camp;
    FUN_00157558(g_renderCtx);
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, false));
    s32 entryKind = FUN_003da8f4(camp->category, FUN_002a4878(camp->list));
    switch (camp->screen) {
    case 1: case 2: case 3: case 4: case 5: case 6: case 7:
    case 9: case 10: case 11: case 15: case 16:
    case 0x1E: case 0x1F: case 0x20: case 0x21: case 0x22:
    case 0x2D: case 0x33: case 0x35: case 0x36: case 0x37:
    case 0x38: case 0x39: case 0x3A: case 0x46:
        if (!entryKindIsExcluded(entryKind) && partyCountOccupiedSlots() > 0)
            FUN_00335060(camp);
        break;
    case 0x25:
    case 0x2F:
    case 0x51:
    case 0x53:
    case 0x54:
        if (partyCountOccupiedSlots() > 0)
            FUN_00335060(camp);
        break;
    default:
        break;
    }
    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}
