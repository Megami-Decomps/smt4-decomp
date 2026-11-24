/* NON_MATCHING: draws the camp menu's item/skill details area for the current menu id (item description, selection bar, mode hints); written from the decompilation, the id grouping is rebuilt from the goto chain and branch layout not compared with retail */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "code/Code002a.h"
#include "camp/CampStateA.h"
#include "camp/CampMenuEntry.h"
#include "ui/UiSpriteApi.h"

#define CAMP_MENU_SUB 0x47
#define CAMP_MENU_UNITE_FIRST 0x20
#define CAMP_MENU_UNITE_LAST 0x22
#define CAMP_MENU_UNITE_LOCKED 0x23

extern "C" {

void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *context);
void campDrawDetailArea(s32 item, u32 mode);
void campDrawCommandMenu(void);
void FUN_00288538(s32 flag);
s32 uniteGetState(void);
void FUN_002aa56c(s32 x, s32 y, s32 column, s32 row, s32 value, f32 alpha);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* The id of the item under the cursor. */
static __inline s32 campCursorItem(CampStateA *camp)
{
    return dataTable15GetUnlockedEntryId(camp->menuGroup, listCursorGetRowOfChildIfUnblocked(&camp->menuGrid));
}

static __inline void campDrawBar(CampStateA *camp)
{
    s32 x = vec2GetXInt(&camp->sprites[4]);
    s32 y = vec2GetYInt(&camp->sprites[4]);
    FUN_002aa56c(x, y, camp->unitSelectIndex, camp->unitSelectSource, camp->touch.unitRegions[camp->unitSelectIndex],
                 vec2GetSpeed(&camp->sprites[4]));
}

/* Draws the detail area for menus that show an item description. */
static __inline void campDrawItemDetail(CampStateA *camp)
{
    s32 item = campCursorItem(camp);
    if ((item >= 0x13 && item <= 0x19) || (item >= 0x48 && item <= 0x4E))
        FUN_00288538(0);
    if (camp->unitSelectActive != 0)
        campDrawBar(camp);
    campDrawCommandMenu();
}

u32 FUN_00227418(void)
{
    CampStateA *camp = g_camp;
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    s32 state = renderCtxPackPassFlags(1, 0);
    renderStackPush(context->stacks + RENDER_STACK_A, state);

    s32 menu = camp->state;
    if (menu == CAMP_MENU_SUB)
        menu = camp->previousState;

    switch (menu) {
    case 1: case 2: case 3: case 6: case 7: case 9:
    case 0x1E: case 0x1F: case 0x2D: case 0x33: case 0x46:
        campDrawItemDetail(camp);
        break;
    case 4: case 5: case 0x2B: case 0x2C:
        campDrawDetailArea(campCursorItem(camp), 0);
        break;
    case 0xA: case 0xF: case 0x10: case 0x11: case 0x13: case 0x1D: case 0x2E: case 0x2F:
        campDrawDetailArea(campCursorItem(camp), 1);
        break;
    case 0xD:
        FUN_00288538(1);
        break;
    case 0x20: case 0x21: case 0x22:
        if (uniteGetState() == 3 || camp->sprites[0].finished == 0) {
            campDrawBar(camp);
            campDrawCommandMenu();
        }
        break;
    case CAMP_MENU_UNITE_LOCKED:
        if (camp->unitSelectActive != 0 && camp->sprites[0].finished == 0) {
            campDrawBar(camp);
            campDrawCommandMenu();
        }
        break;
    default:
        break;
    }

    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}

} /* extern "C" */
