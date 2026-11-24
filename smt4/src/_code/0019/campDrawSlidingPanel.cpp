/* NON_MATCHING: 155 lines (shape 57). Retail forms the panel sprite's address once in r0 and keeps it in r5 for the
 * second getter (this build reloads g_camp), and loads the row and part coordinates of the owned-count calls
 * (parts 0x473 and 0x47a) through other scratch registers. The x and y sums are written in one order, `row + part +
 * x`, throughout (the w86 review: one convention per function); retail's adds take the operands in another order at
 * some sites (77 lines with the order chosen per site). The item lists are a separate function because retail tests
 * the panel kind again inside the 11-13 case, with its own dead default exit. */
#include "camp/CampState.h"
#include "camp/Config/Config.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match6_ItemIcon_VariantA.h"
#include "code/Code0028.h"
#include "code/Code0029_VariantA.h"
#include "code/Code0029_VariantB.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"
#include "gfx/SpritePartDraw.h"
#include "runtime/Stdio.h"
#include "text/TextDraw.h"
#include "ui/UiSpriteApi.h"

extern "C" {

void playLogDraw(void);
void FUN_001ae538(s32 kind, s32 x, s32 y, s32 drawCursor);
void campSkillListDraw(s32 x, s32 y, s32 drawCursor);
void campAppListDraw(s32 x, s32 y, s32 drawCursor);
u32 resourceRunOperationIfUnblocked(const GridNavigation *grid);
void FUN_0028f870(u32 list, s32 x, s32 y, s32 wide);
void textDrawFormattedAligned(u32 font, s32 x, s32 y, u32 align, u32 digits, u32 depth, const char *text);
u8 *dataFindKindRecordWithAocOverrides(u32 id, s32 payload);
u32 itemCanUseOnParty(s32 id);

enum {
    CAMP_PANEL_SKILLS = 9,
    CAMP_PANEL_APPS = 10,
    CAMP_PANEL_ITEMS = 11,       /* the three item lists: grids[0..2] */
    CAMP_PANEL_ITEMS_SECOND = 12,
    CAMP_PANEL_ITEMS_THIRD = 13,
    CAMP_PANEL_CONFIG = 39,
    CAMP_PANEL_PLAY_LOG = 41,
    CAMP_LIST_ROWS = 11,
    CAMP_TEXTURE = 0x1D,
    COLOR_UNUSABLE = 0x5A5A5AFF
};

/* Draws one of the camp's three item lists at (x, y): the visible rows (name, owned count, category badge), the
 * scroll bar and, with `drawCursor`, the selected row again in its highlighted form. Names of items the party
 * cannot use are greyed in the first list. */
static void campItemListDraw(s32 kind, s32 x, s32 y, s32 drawCursor)
{
    char text[32];
    CampState *camp = g_camp;
    GridNavigation *grid;
    const u16 *ids;

    switch (kind) {
    case CAMP_PANEL_ITEMS:
        grid = &camp->grids[0];
        ids = camp->gridIds0;
        texDrawCompositeSprite(2, CAMP_TEXTURE, 0, x, y, 0x65);
        texDrawTableEntryAtStoredOrigin(2, CAMP_TEXTURE, 0x469, x, y, 0x6a);
        break;
    case CAMP_PANEL_ITEMS_SECOND:
        grid = &camp->grids[1];
        ids = camp->gridIds1;
        texDrawCompositeSprite(2, CAMP_TEXTURE, 0, x, y, 0x65);
        texDrawTableEntryAtStoredOrigin(2, CAMP_TEXTURE, 0x46a, x, y, 0x6a);
        break;
    case CAMP_PANEL_ITEMS_THIRD:
        grid = &camp->grids[2];
        ids = camp->gridIds2;
        texDrawCompositeSprite(2, CAMP_TEXTURE, 0, x, y, 0x65);
        texDrawTableEntryAtStoredOrigin(2, CAMP_TEXTURE, 0x46b, x, y, 0x6a);
        break;
    default:
        return;
    }

    for (s32 i = 0; i < (s32)CAMP_LIST_ROWS; i++) {
        if ((s32)(resourceRunOperationIfUnblocked(grid) + i) >= (s32)gridNavigationGetItemCount(grid)) {
            break;
        }
        u16 id = ids[resourceRunOperationIfUnblocked(grid) + i];
        TextureTableEntryIV *row = asdTMTexTableEntryAt(CAMP_TEXTURE, i + 0x40d);

        texDrawTableEntryAtStoredOrigin(2, CAMP_TEXTURE, 0x46c, row->x + x, row->y + y, 0x6a);
        texDrawTableEntryAtStoredOrigin(2, CAMP_TEXTURE, 0x46d, row->x + x, row->y + y, 0x6a);
        texDrawTableEntryAtStoredOrigin(2, CAMP_TEXTURE, 0x46e, row->x + x, row->y + y, 0x6a);

        TextureTableEntryIV *part = asdTMTexTableEntryAt(CAMP_TEXTURE, 0x470);
        const char *name = (const char *)dataFindKindRecordWithAocOverrides(id, 0);
        if (name != NULL) {
            u32 color = 0xff;
            if (kind == CAMP_PANEL_ITEMS && !itemCanUseOnParty(id)) {
                color = COLOR_UNUSABLE;
            }
            textDrawString(row->x + part->x + x, row->y + part->y + y, 0.55f, 2, 0.0f, color, 1.0f, name);
        }

        part = asdTMTexTableEntryAt(CAMP_TEXTURE, 0x473);
        __2sprintf(text, "%d", flagValueRead(id));
        textDrawFormattedAligned(0, row->x + part->x + x, row->y + part->y + y, 1, 3, 0x6f, text);

        part = asdTMTexTableEntryAt(CAMP_TEXTURE, 0x474);
        textDrawFormattedAligned(0, row->x + part->x + x, row->y + part->y + y, 1, 1, 0x6f, "*");

        part = asdTMTexTableEntryAt(CAMP_TEXTURE, 0x46f);
        BadgeWord notEquipped;
        notEquipped.i = 0;
        itemDrawCategoryBadge((s16)id, row->x + part->x + x, row->y + part->y + y, 0x6f, notEquipped);
    }
    FUN_0028f870((u32)grid, x, y, 1);

    if (drawCursor) {
        u16 id = ids[resourceRunOperationIfUnblocked(grid) + listCursorGetRowIfUnblocked(grid)];
        TextureTableEntryIV *row = asdTMTexTableEntryAt(CAMP_TEXTURE, listCursorGetRowIfUnblocked(grid) + 0x42e);

        FUN_0028f694(row->x + x, row->y + y, camp->touch.rowRegions[listCursorGetRowIfUnblocked(grid)]);

        TextureTableEntryIV *part = asdTMTexTableEntryAt(CAMP_TEXTURE, 0x477);
        const char *name = (const char *)dataFindKindRecordWithAocOverrides(id, 0);
        if (name != NULL) {
            u32 color = 0xffffffff;
            if (kind == CAMP_PANEL_ITEMS && !itemCanUseOnParty(id)) {
                color = COLOR_UNUSABLE;
            }
            textDrawString(row->x + part->x + x, row->y + part->y + y, 0.5f, 3, 0.0f, color, 1.0f, name);
        }

        part = asdTMTexTableEntryAt(CAMP_TEXTURE, 0x47a);
        __2sprintf(text, "%d", flagValueRead(id));
        textDrawFormattedAligned(0, row->x + part->x + x, row->y + part->y + y, 1, 3, 0x83, text);

        part = asdTMTexTableEntryAt(CAMP_TEXTURE, 0x47b);
        textDrawFormattedAligned(0, row->x + part->x + x, row->y + part->y + y, 1, 1, 0x83, "*");

        texDrawTableEntryAtStoredOrigin(2, CAMP_TEXTURE, 0x475, row->x + x, row->y + y, 0x83);

        part = asdTMTexTableEntryAt(CAMP_TEXTURE, 0x476);
        BadgeWord notEquipped;
        notEquipped.i = 0;
        itemDrawCategoryBadge((s16)id, row->x + part->x + x, row->y + part->y + y, 0x88, notEquipped);
    }
}

/* Draws the camp panel `kind` at the position of the sliding panel sprite, unless it has slid off screen. */
void campDrawSlidingPanel(s32 kind, s32 drawCursor)
{
    s32 x = vec2GetXInt(&g_camp->commands.other[0]);
    s32 y = vec2GetYInt(&g_camp->commands.other[0]);
    s32 distance = x;

    if (distance < 0) {
        distance = -distance;
    }
    if (distance >= 320) {
        return;
    }
    switch (kind) {
    case CAMP_PANEL_SKILLS:
        campSkillListDraw(x, y, drawCursor);
        break;
    case CAMP_PANEL_APPS:
        campAppListDraw(x, y, drawCursor);
        break;
    case CAMP_PANEL_ITEMS:
    case CAMP_PANEL_ITEMS_SECOND:
    case CAMP_PANEL_ITEMS_THIRD:
        campItemListDraw(kind, x, y, drawCursor);
        break;
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
        FUN_001ae538(kind, x, y, drawCursor);
        break;
    case CAMP_PANEL_CONFIG:
        configDrawOptionPanel(x, y, drawCursor);
        break;
    case CAMP_PANEL_PLAY_LOG:
        playLogDraw();
        break;
    }
}

} /* extern "C" */
