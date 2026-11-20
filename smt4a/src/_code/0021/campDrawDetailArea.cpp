/* NON_MATCHING: control flow, calls and constants follow retail. Retail copies the sprite
 * pointer into two registers (r9 and r5; the build keeps one), and its frame is 16 bytes smaller: the row's name is
 * spilled to the outgoing-argument slot sp+4 next to the colour (`ldm sp, {r1, r2}` before textDrawString: needs the
 * textDrawString reorder) and the list's item/selected copies sit in adjacent slots (sp+84/88). A few x/y operand
 * loads are ordered differently. Retail also loads 1.0f into s19 before the distance test (the build loads it only
 * for the final call), which moves the literal pool split. */
#include "runtime/Stdio.h"
#include "ui/UiSpriteApi.h"
#include "camp/CampStateA.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match6_ItemIcon.h"
#include "text/TextDraw.h"
#include "gamedata/GameDataAccess.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/AnimatedMessage.h"
#include "code/Code0026_Smt4a.h"
#include "code/Code0028.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002a_VariantA.h"
#include "code/Code002c_Smt4a.h"

extern "C" {

const char *dataFindKindRecordWithAocOverrides(u32 id, s32 alternate);
/* Draws formatted text right-aligned in a field of `digits` characters. */
void statRowDrawValueImpl(s32 font, s32 x, s32 y, s32 align, s32 digits, s32 layer, const char *format, ...);
void FUN_002027fc(void);
void FUN_00214dc4(void);
/* The other pages of the camp's detail area. */
void FUN_0023c8c0(s32 item, s32 x, s32 y, s32 selected, f32 alpha);
void campSkillListDraw(s32 x, s32 y, s32 selected, f32 alpha);
/* The list's scroll bar. */
void FUN_0023d150(GridNavigation *grid, s32 x, s32 y, s32 mode);
/* Whether the consumable `id` can be used now. */
u32 FUN_0048144c(s32 id);

/* Draws an item list page: the usable items (11) or one of the two other bags, eleven rows from the
   list's top, the scroll bar and, when `selected`, the cursor row on top. */
static void campDrawItemList(s32 item, s32 x, s32 y, s32 selected, f32 alpha)
{
    s32 pressed = 0;
    CampStateA *camp = g_camp;
    GridNavigation *grid;
    u16 *ids;
    char count[44];

    switch (item) {
    case 11:
        grid = &camp->grids[0];
        ids = camp->gridIds0;
        texDrawCompositeSprite(2, 20, 0, x, y, 0x65);
        texDrawTableEntryAtStoredOrigin(2, 20, 0x469, x, y, 0x6A);
        break;
    case 13:
        grid = &camp->grids[1];
        ids = camp->gridIds1;
        texDrawCompositeSprite(2, 20, 0, x, y, 0x65);
        texDrawTableEntryAtStoredOrigin(2, 20, 0x46A, x, y, 0x6A);
        break;
    case 14:
        grid = &camp->grids[2];
        ids = camp->gridIds2;
        texDrawCompositeSprite(2, 20, 0, x, y, 0x65);
        texDrawTableEntryAtStoredOrigin(2, 20, 0x46B, x, y, 0x6A);
        break;
    default:
        return;
    }
    for (s32 row = 0; row < 11; row++) {
        if (resourceRunOperationIfUnblocked(reinterpret_cast<Object *>(grid)) + row >=
            gridNavigationGetItemCount(reinterpret_cast<Object *>(grid))) {
            break;
        }
        u16 id = ids[resourceRunOperationIfUnblocked(reinterpret_cast<Object *>(grid)) + row];
        TextureTableEntryIV *line = asdTMTexTableEntryAt(20, row + 0x40D);
        texDrawTableEntryAtStoredOrigin(2, 20, 0x46C, line->x + x, line->y + y, 0x6A);
        texDrawTableEntryAtStoredOrigin(2, 20, 0x46D, line->x + x, line->y + y, 0x6A);
        texDrawTableEntryAtStoredOrigin(2, 20, 0x46E, line->x + x, line->y + y, 0x6A);
        TextureTableEntryIV *nameAt = asdTMTexTableEntryAt(20, 0x470);
        const char *name = dataFindKindRecordWithAocOverrides(id, 0);
        if (name) {
            u32 color = 0xFFFFFFFF;
            if (item == 11 && FUN_0048144c(id) == 0) {
                color = 0x9B9B9BFF;
            }
            textDrawString(line->x + nameAt->x + x, line->y + nameAt->y + y, 0.55f, 2, 0.0f, color, alpha, name);
        }
        TextureTableEntryIV *countAt = asdTMTexTableEntryAt(20, 0x473);
        __2sprintf(count, "%d", flagValueRead(id));
        statRowDrawValueImpl(0, line->x + countAt->x + x, line->y + countAt->y + y, 1, 3, 0x6F, count);
        TextureTableEntryIV *markAt = asdTMTexTableEntryAt(20, 0x474);
        statRowDrawValueImpl(0, markAt->x + line->x + x, line->y + markAt->y + y, 1, 1, 0x6F, "*");
        TextureTableEntryIV *iconAt = asdTMTexTableEntryAt(20, 0x46F);
        uiDrawItemCategoryIcon(static_cast<s16>(id), iconAt->x + line->x + x, line->y + iconAt->y + y, 0x6F, 0);
    }
    FUN_0023d150(grid, x, y, 1);
    if (selected) {
        u16 id = ids[resourceRunOperationIfUnblocked(reinterpret_cast<Object *>(grid)) +
                     listCursorGetRowIfUnblocked(grid)];
        s32 mode = recordGetModeForId(camp->touch.rowRegions[listCursorGetRowIfUnblocked(grid)]);
        u32 color = 0x9FE7FFFF;
        if (mode == 1 || mode == 2 || mode == 6) {
            color = 0xF5FF9FFF;
            pressed = 1;
        }
        TextureTableEntryIV *line = asdTMTexTableEntryAt(20, listCursorGetRowIfUnblocked(grid) + 0x42E);
        FUN_0026ec00(line->x + x, line->y + y, pressed);
        TextureTableEntryIV *nameAt = asdTMTexTableEntryAt(20, 0x477);
        const char *name = dataFindKindRecordWithAocOverrides(id, 0);
        if (name) {
            if (item == 11 && FUN_0048144c(id) == 0) {
                color = 0x9B9B9BFF;
            }
            textDrawString(line->x + nameAt->x + x, line->y + nameAt->y + y, 0.5f, 3, 0.0f, color, alpha, name);
        }
        TextureTableEntryIV *countAt = asdTMTexTableEntryAt(20, 0x47A);
        __2sprintf(count, "%d", flagValueRead(id));
        statRowDrawValueImpl(0, line->x + countAt->x + x, line->y + countAt->y + y, 1, 3, 0x83, count);
        TextureTableEntryIV *markAt = asdTMTexTableEntryAt(20, 0x47B);
        statRowDrawValueImpl(0, markAt->x + line->x + x, line->y + markAt->y + y, 1, 1, 0x83, "*");
        texDrawTableEntryAtStoredOrigin(2, 20, 0x475, line->x + x, line->y + y, 0x83);
        TextureTableEntryIV *iconAt = asdTMTexTableEntryAt(20, 0x476);
        uiDrawItemCategoryIcon(static_cast<s16>(id), iconAt->x + line->x + x, line->y + iconAt->y + y, 0x88, 0);
    }
}

/* Draws the camp's detail area for menu item `item` at the primary sprite's position; `selected` adds the
   cursor row to a list page. */
void campDrawDetailArea(s32 item, s32 selected)
{
    UiSpriteState *sprite = &g_camp->sprites[1];
    s32 x = vec2GetXInt(sprite);
    s32 y = vec2GetYInt(sprite);
    s32 distance = x;

    if (distance < 0) {
        distance = -x;
    }
    if (distance >= 320) {
        return;
    }
    f32 alpha = vec2GetSpeed(sprite);
    efctSetSpeed(alpha);
    switch (item) {
    case 1:
    case 9:
        campSkillListDraw(x, y, selected, alpha);
        break;
    case 10:
        break;
    case 11:
    case 13:
    case 14:
        campDrawItemList(item, x, y, selected, alpha);
        break;
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
        FUN_0023c8c0(item, x, y, selected, alpha);
        break;
    case 41:
        FUN_002027fc();
        break;
    case 43:
        FUN_00214dc4();
        break;
    }
    efctSetSpeed(1.0f);
}

} /* extern "C" */
