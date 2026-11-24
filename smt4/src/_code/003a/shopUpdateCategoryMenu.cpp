/* NON_MATCHING: 38 lines, the same rows, branches and pool as retail; one register pair is swapped
 * throughout: retail keeps the constant 1 in r7 and the help colour (later the address of
 * menu.rows[0]) in r9, this build the colour in r7 and the 1 in r9.
 * Wave 91: the pair does not move (38) with a signed `choice`, plain `static` shopMenuOpenCategory or
 * shopStartScript, an s32 colour parameter, the colour as a #define or a static const, the row help as a shared
 * inline helper, the open substep as a case of the switch, or the cursor declared where it is set. Worse: the
 * back-to-top cursor as a ternary or `!=` (49), shopMenuAdvance inline (64), one `scratch` for both menus (58
 * by shape, 122 raw). */
#include "shop/ShopScreen.h"
#include "shop/shopMain.h"
#include "ui/UiSpriteApi.h"
#include "script/scrScriptProcess.h"
#include "gamedata/TableGroup.h"
#include "gamedata/DataTableAccess_Smt4.h"
#include "shop/ShopMenuText.h"
#include "shard/W5_W5Match2_ScalarArguments.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {

void uiSceneApplySpritePreset(Scene3aSprites *animation, u32 index);
void pointConvertToFloat(FloatPoint *point, s32 x, s32 y);
s32 tableGroupFindEntryIndex(TableGroupHeader *table, const char *name);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entryIndex);
void equipmentMenuBuildVisibleCategories(ShopScreen *screen, s32 mode);
void shopSelectEntryStart(ShopScreen *screen, s32 mode);
void FUN_002302d8(ShopScreen *screen, s32 refreshHelp);
void FUN_00230234(ShopScreen *screen);
void shopScreenRebuildForSelection(ShopScreen *screen, u32 mode);
void buttonHelpSetText(const s8 *text, u32 style);
u8 messageWindowIsState1(void);
u32 messageTargetGetValue(void);
u32 messageMainGetChoiceResult(void);
void messageMainFinishWindow(void);

} /* extern "C" */

enum {
    /* the substeps of the category menu */
    SHOP_MENU_OPEN = 0,
    SHOP_MENU_TOP = 1,            /* weapons, armour, items, sell */
    SHOP_MENU_WEAPONS = 3,        /* the weapon categories */
    SHOP_MENU_ARMOUR = 4,         /* the armour categories */

    /* the rows of the top menu (equipmentMenuBuildVisibleCategories's mode 0) */
    SHOP_ROW_WEAPONS = 0,
    SHOP_ROW_ARMOUR = 1,
    SHOP_ROW_ITEMS = 2,
    SHOP_ROW_SELL = 3,

    /* what equipmentMenuBuildVisibleCategories lists */
    SHOP_ROWS_TOP = 0,
    SHOP_ROWS_WEAPONS = 1,
    SHOP_ROWS_ARMOUR = 2,

    SHOP_SLOT_ITEMS = 7,
    SHOP_SLOT_SELL = 8,

    SHOP_PHASE_OPEN_PAGE = 4,
    SHOP_PHASE_LEAVE = 12,

    SHOP_ROW_TEXT_PAGE = 4,       /* the page menus' rows follow the top menu's four in the text table */
    SHOP_HELP_COLOR = 0x323232FF
};

/* Starts an entry of the shop script. */
static __inline void shopStartScript(ShopScreen *screen, const char *name)
{
    scrScriptProcessStartEntry(screen->process, tableGroupFindEntryIndex((TableGroupHeader *)screen->scriptTable, name));
}

/* Runs the shop's scripts and moves the menu cursor. */
static void shopMenuAdvance(ShopScreen *screen, UiSpriteState *cursor)
{
    scrRunOpcodesStub(screen->process);
    scrRunOpcodesStub(screen->menuProcess);
    uiSpriteAdvanceAnimation(cursor);
    pointConvertToFloat((FloatPoint *)&screen->region, vec2GetXInt(cursor), vec2GetYInt(cursor));
}

/* Opens a weapon or armour category's list. */
static __inline void shopMenuOpenCategory(ShopScreen *screen, s32 slot)
{
    screen->slot = slot;
    FUN_002302d8(screen, 1);
    screen->pageTransition.substep = 0;
    screen->pageTransition.phase = SHOP_PHASE_OPEN_PAGE;
    messageMainFinishWindow();
    FUN_00230234(screen);
}

/* The shop's category menu: greets the player and shows the top menu (weapons, armour, items, sell),
 * then a page menu when the chosen page has more than one category in stock, and opens the chosen
 * category's list. Backing out of a page menu returns to the top menu, backing out of that leaves
 * the shop. (Apocalypse's Obj536044::FUN_004995b0 is the same state.) */
extern "C" void shopUpdateCategoryMenu(ShopScreen *screen)
{
    UiSpriteState *cursor;
    u32 choice;

    if (screen->pageTransition.substep == SHOP_MENU_OPEN) {
        if ((screen->flags & 4) == 0) {
            if (screen->greeting.onSale != 0) {
                shopStartScript(screen, "shop_in_sale");
            } else {
                shopStartScript(screen, "shop_in");
            }
        } else {
            shopStartScript(screen, "shop_in2");
        }
        scrRunOpcodesStub(screen->process);
        screen->flags |= 4;
        equipmentMenuBuildVisibleCategories(screen, SHOP_ROWS_TOP);
        shopSelectEntryStart(screen, 0);
        uiSceneApplySpritePreset(&screen->animation, 1);
        screen->pageTransition.substep = SHOP_MENU_TOP;
        return;
    }
    cursor = &screen->animation.sprites[1];
    switch (screen->pageTransition.substep) {
    case SHOP_MENU_TOP:
        shopMenuAdvance(screen, cursor);
        if (uiSpriteGetCompletionState(cursor) == 0) {
            break;
        }
        screen->flags &= ~0xF00;
        if (messageWindowIsState1() != 0) {
            u32 scratch;
            const ShopMenuTextRecord *record = (const ShopMenuTextRecord *)dataTable17Sub0GetRecord(
                (u32)&scratch, screen->menu.rows[messageTargetGetValue()]);
            buttonHelpSetText(record->help, SHOP_HELP_COLOR);
        }
        if (messageBannerIsIdle() == 0) {
            break;
        }
        messageMainFinishWindow();
        buttonHelpSetText(NULL, SHOP_HELP_COLOR);
        choice = messageMainGetChoiceResult();
        if (choice == (u32)-1) {
            messageDismissNumericBanner(1);
            screen->pageTransition.phase = SHOP_PHASE_LEAVE;
            screen->pageTransition.substep = 0;
            break;
        }
        switch (screen->menu.rows[choice]) {
        case SHOP_ROW_WEAPONS:
            equipmentMenuBuildVisibleCategories(screen, SHOP_ROWS_WEAPONS);
            if (screen->menu.rowCount <= 1) {
                /* the page's only category opens at once */
                shopMenuOpenCategory(screen, screen->menu.rows[0]);
            } else {
                screen->menuCursorSet[1] = 1;
                shopSelectEntryStart(screen, 1);
                screen->pageTransition.substep = SHOP_MENU_WEAPONS;
                screen->menuCursorSet[1] = 0;
            }
            break;
        case SHOP_ROW_ARMOUR:
            equipmentMenuBuildVisibleCategories(screen, SHOP_ROWS_ARMOUR);
            if (screen->menu.rowCount <= 1) {
                shopMenuOpenCategory(screen, screen->menu.rows[0]);
            } else {
                screen->menuCursorSet[0] = 1;
                shopSelectEntryStart(screen, 2);
                screen->pageTransition.substep = SHOP_MENU_ARMOUR;
                screen->menuCursorSet[0] = 0;
            }
            break;
        case SHOP_ROW_ITEMS:
            screen->slot = SHOP_SLOT_ITEMS;
            FUN_002302d8(screen, 1);
            screen->pageTransition.phase = SHOP_PHASE_OPEN_PAGE;
            screen->pageTransition.substep = 0;
            messageMainFinishWindow();
            break;
        case SHOP_ROW_SELL:
            screen->slot = SHOP_SLOT_SELL;
            shopScreenRebuildForSelection(screen, 1);
            screen->pageTransition.phase = SHOP_PHASE_OPEN_PAGE;
            screen->pageTransition.substep = 0;
            messageMainFinishWindow();
            break;
        }
        break;
    case SHOP_MENU_WEAPONS:
    case SHOP_MENU_ARMOUR:
        shopMenuAdvance(screen, cursor);
        if (uiSpriteGetCompletionState(cursor) == 0) {
            break;
        }
        if (messageWindowIsState1() != 0) {
            u32 scratch;
            const ShopMenuTextRecord *record = (const ShopMenuTextRecord *)dataTable17Sub0GetRecord(
                (u32)&scratch, screen->menu.rows[messageTargetGetValue()] + SHOP_ROW_TEXT_PAGE);
            buttonHelpSetText(record->help, SHOP_HELP_COLOR);
        }
        if (messageBannerIsIdle() == 0) {
            break;
        }
        messageMainFinishWindow();
        buttonHelpSetText(NULL, SHOP_HELP_COLOR);
        choice = messageMainGetChoiceResult();
        if (choice != (u32)-1) {
            shopMenuOpenCategory(screen, screen->menu.rows[choice]);
            break;
        }
        /* back to the top menu */
        if (screen->pageTransition.substep == SHOP_MENU_WEAPONS) {
            screen->menuCursors[2] = 0;
        } else {
            screen->menuCursors[2] = 1;
        }
        equipmentMenuBuildVisibleCategories(screen, SHOP_ROWS_TOP);
        shopSelectEntryStart(screen, 0);
        screen->pageTransition.substep = SHOP_MENU_TOP;
        break;
    }
}
