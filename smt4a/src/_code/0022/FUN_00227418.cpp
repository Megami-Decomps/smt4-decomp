/* NON_MATCHING: draws the camp menu's item/skill details area for the current menu id (item description, selection bar, mode hints); written from the decompilation, the id grouping is rebuilt from the goto chain and branch layout not compared with retail */
#include "camp/RenderCtx.h"
#include "code/Code002a.h"

struct CampDetail {
    /* 0x000 */ u8 unk000[0x1C];
    /* 0x01C */ s32 menu;
    /* 0x020 */ u8 unk020[8];
    /* 0x028 */ s32 subMenu;
    /* 0x02C */ u8 unk02C[0x14];
    /* 0x040 */ u8 listState[0x64];
    /* 0x0A4 */ s8 cursor;
    /* 0x0A5 */ u8 unk0A5[0x12];
    /* 0x0B7 */ u8 barVisible;
    /* 0x0B8 */ s8 barRow;
    /* 0x0B9 */ s8 barColumn;
    /* 0x0BA */ u8 unk0BA[0x628];
    /* 0x6E2 */ u8 locked;
    /* 0x6E3 */ u8 unk6E3[0x1A5];
    /* 0x888 */ u8 barOrigin[0x12CC];
    /* 0x1B54 */ s16 barValues[1];
};

#define CAMP_MENU_SUB 0x47
#define CAMP_MENU_UNITE_FIRST 0x20
#define CAMP_MENU_UNITE_LAST 0x22
#define CAMP_MENU_UNITE_LOCKED 0x23

extern "C" {
extern CampDetail *g_camp;
extern RenderCtxA *g_renderCtx;

void FUN_00157558(RenderCtxA *context);
s32 FUN_001692ac(u32 a, u32 b);
s32 FUN_003da8f4(s32 cursor, u32 value);
void FUN_0021775c(s32 item, u32 mode);
void FUN_00217f14(void);
void FUN_00288538(s32 flag);
s32 uniteGetState(void);
s32 vec2GetXInt(void);
s32 vec2GetYInt(void *origin);
void FUN_002aa56c(s32 x, s32 y, s32 column, s32 row, s32 value);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* The id of the item under the cursor. */
static __inline s32 campCursorItem(CampDetail *camp)
{
    return FUN_003da8f4(camp->cursor, FUN_002a4878(camp->listState));
}

static __inline void campDrawBar(CampDetail *camp)
{
    s32 x = vec2GetXInt();
    s32 y = vec2GetYInt(camp->barOrigin);
    FUN_002aa56c(x, y, camp->barColumn, camp->barRow, *(s16 *)((u8 *)camp + camp->barColumn * 2 + 0x1B54));
}

/* Draws the detail area for menus that show an item description. */
static __inline void campDrawItemDetail(CampDetail *camp)
{
    s32 item = campCursorItem(camp);
    if ((item >= 0x13 && item <= 0x19) || (item >= 0x48 && item <= 0x4E))
        FUN_00288538(0);
    if (camp->barVisible != 0)
        campDrawBar(camp);
    FUN_00217f14();
}

u32 FUN_00227418(void)
{
    CampDetail *camp = g_camp;
    FUN_00157558(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    s32 state = FUN_001692ac(1, 0);
    renderStackPush(&context->stackA, state);

    s32 menu = camp->menu;
    if (menu == CAMP_MENU_SUB)
        menu = camp->subMenu;

    switch (menu) {
    case 1: case 2: case 3: case 6: case 7: case 9:
    case 0x1E: case 0x1F: case 0x2D: case 0x33: case 0x46:
        campDrawItemDetail(camp);
        break;
    case 4: case 5: case 0x2B: case 0x2C:
        FUN_0021775c(campCursorItem(camp), 0);
        break;
    case 0xA: case 0xF: case 0x10: case 0x11: case 0x13: case 0x1D: case 0x2E: case 0x2F:
        FUN_0021775c(campCursorItem(camp), 1);
        break;
    case 0xD:
        FUN_00288538(1);
        break;
    case 0x20: case 0x21: case 0x22:
        if (uniteGetState() == 3 || camp->locked == 0) {
            campDrawBar(camp);
            FUN_00217f14();
        }
        break;
    case CAMP_MENU_UNITE_LOCKED:
        if (camp->barVisible != 0 && camp->locked == 0) {
            campDrawBar(camp);
            FUN_00217f14();
        }
        break;
    default:
        break;
    }

    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}

} /* extern "C" */
