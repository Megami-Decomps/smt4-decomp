#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "camp/CampStateA.h"
#include "camp/CampMenuEntry.h"


extern "C" {
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *context);
s32 renderCtxPackPassFlags(u32 kind, bool enabled);
u32 listCursorGetRowOfChildIfUnblocked(void *list);
s32 partyCountOccupiedSlots(void);
void saveListDraw(CampStateA *camp);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Whether the selected entry kind never needs the party sub-screen. */
static __inline bool entryKindIsExcluded(s32 kind)
{
    return kind == 9 || kind == 0x23 || kind == 0x24 || kind == 0x25 || kind == 0x26 || kind == 0x2C ||
           kind == 0x41 || kind == 0x2D || kind == 0x2E || kind == 0x2F || kind == 0x30 || kind == 0x31 ||
           kind == 0x32;
}

static __inline void drawPartySubscreen()
{
    CampStateA *camp = g_camp;
    if (partyCountOccupiedSlots() > 0)
        saveListDraw(camp);
}

/* Draw the camp's party sub-screen when the current screen has one. */
u32 campDrawCurrentSubscreen(void)
{
    CampStateA *camp = g_camp;
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, false));
    s32 entryKind = dataTable15GetUnlockedEntryId(camp->menuGroup, listCursorGetRowOfChildIfUnblocked(&camp->menuGrid));
    switch (camp->state) {
    case 1: case 2: case 3: case 4: case 5: case 6: case 7:
    case 9: case 10: case 11: case 15: case 16:
    case 0x1E: case 0x1F: case 0x20: case 0x21: case 0x22:
    case 0x2D: case 0x33: case 0x35: case 0x36: case 0x37:
    case 0x38: case 0x39: case 0x3A: case 0x46:
        if (!entryKindIsExcluded(entryKind))
            drawPartySubscreen();
        break;
    case 0x25:
        drawPartySubscreen();
        break;
    case 0x2F:
    case 0x51:
    case 0x53:
    case 0x54:
        drawPartySubscreen();
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
