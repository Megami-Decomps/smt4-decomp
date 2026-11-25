/* NON_MATCHING: 16 lines, the same rows and pool as retail; two of the seven state changes differ by a
 * register pair: where a page menu's choice opens its category and where the top menu is left, retail
 * loads the current state into r0 and the new one into r1, this build the other way round (the other
 * five sites agree with retail). Wave 74: writing changeState's three stores in place at the two sites, the
 * if/else shapes around the choice and a signed choice all leave the pair as it is; only a named copy of
 * the current state taken before the stores (`s32 current = state;`) gives retail's pair: with it at both
 * sites the function is IDENTICAL, but such a copy is a steering temporary unless something else shows it
 * (with the copy inside changeState itself the direct calls take retail's pair and the calls nested in
 * openCategory do not, which fits the leave site but not the sale notice's, so that is not it either).
 * Wave 90: the pair is not decided at the site: it moves with inline expansions elsewhere in the function
 * (startScript("shop_sale_open") and the page menu's openCategory both written in place give retail's pair
 * at the page site, 8 lines; other in-place subsets flip the sale notice's site instead), so the original
 * differed in how many inline bodies or locals it had, not in these stores. Result types (bool for the
 * message tests and FUN_00148bb8), an unsigned sale, a signed choice, if/else and early-return shapes and
 * the cursor initialised at its declaration all stay at 16. */
#include "classes/Obj536044.h"
#include "shop/ShopMenuText.h"
#include "shop/ShopItemDescription.h"
#include "shard/Shard0049.h"
#include "shard/W5_W5Match2_ScalarArguments.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "script/scrScriptProcess.h"
#include "ui/UiSpriteApi.h"
#include "script/ScriptEntry.h"

extern "C" {

u32 FUN_00148bb8(s32 id, s32 mode);
bool statsTestFlag(u32 index);
void statsSetFlag(u32 index, s32 enabled);
void sysPlaySe(u32 id);
void equipmentMenuBuildVisibleCategories(Obj536044 *shop, s32 level); /* builds the shop's visible equipment categories */
void shopSelectEntryStart(Obj536044 *shop, s32 kind);
void uiSpriteBankApplyPreset(SpritePresetBank *bank, u32 preset);
void pointConvertToFloat(FloatPoint *point, s32 x, s32 y);
u8 messageWindowIsState1(void);
u32 messageMainGetValue(void);
u8 panelIsMissingOrFlagClear(void);
void obj04Finish(void);
Entry80 *dataTable17Type0GetEntry(u32 unused, u32 index);
void buttonHelpSetText(const s8 *text, u32 color);
void FUN_004964e0(Obj536044 *shop, s32 changed);
void shopScreenRebuildForSelection(Obj536044 *shop, u32 mode);
void FUN_00499d14(Obj536044 *shop);
s32 tableGroupFindEntryIndex(u32 table, const char *name);

} /* extern "C" */

enum {
    /* the substates of the category menu */
    SHOP_MENU_OPEN = 0,
    SHOP_MENU_TOP = 1,            /* weapons, armour, items, sell */
    SHOP_MENU_WEAPONS = 3,        /* the weapon categories */
    SHOP_MENU_ARMOUR = 4,         /* the armour categories */

    /* the rows of the top menu (equipmentMenuBuildVisibleCategories' level 0) */
    SHOP_ROW_WEAPONS = 0,
    SHOP_ROW_ARMOUR = 1,
    SHOP_ROW_ITEMS = 2,
    SHOP_ROW_SELL = 3,

    SHOP_SLOT_SELL = 8,

    SHOP_STATE_SALE_NOTICE = 4,
    SHOP_STATE_OPEN_PAGE = 6,
    SHOP_STATE_LEAVE = 14,

    SHOP_ROW_TEXT_PAGE = 4,       /* the page menus' rows follow the top menu's four in the text table */
    SHOP_HELP_COLOR = 0xF4F4F4FF
};

inline void Obj536044::startScript(const char *name)
{
    scrScriptProcessStartEntry(controller, tableGroupFindEntryIndex(tableGroup, name));
}

/* Runs the shop's scripts and moves the menu cursor. */
inline void Obj536044::advanceMenu(UiSpriteState *cursor)
{
    scrRunOpcodesStub(controller);
    scrRunOpcodesStub(menuScript);
    uiSpriteAdvanceAnimation(cursor, 1.0f);
    pointConvertToFloat((FloatPoint *)cursorPosition, vec2GetXInt(cursor), vec2GetYInt(cursor));
}

/* Opens a weapon or armour category's list. */
inline void Obj536044::openCategory(s32 category)
{
    slot = category;
    FUN_004964e0(this, 1);
    changeState(SHOP_STATE_OPEN_PAGE);
    obj04Finish();
    FUN_00499d14(this);
}

/* The shop's category menu: announces a sale the player has not seen yet, otherwise greets the player
 * and shows the top menu (weapons, armour, items, sell), then a page menu when the chosen page has
 * more than one category in stock, and opens the chosen category's list. Backing out of a page menu
 * returns to the top menu, backing out of that leaves the shop. (IV's FUN_003a3354 is the same state.) */
void Obj536044::FUN_004995b0()
{
    UiSpriteState *cursor;
    u32 choice;

    if (substate == SHOP_MENU_OPEN) {
        s32 sale = kind;

        if (restricted == 0) {
            if (sale >= 8) {
                sale++;
            } else if (sale == 5) {
                sale = 6;
            } else if (sale == 6 || sale == 7) {
                sale = 5;
            }
        }
        if (FUN_00148bb8(sale, 1) != 0 && !statsTestFlag(sale)) {
            statsSetFlag(sale, 1);
            startScript("shop_sale_open");
            scrRunOpcodesStub(controller);
            sysPlaySe(0xA0);
            changeState(SHOP_STATE_SALE_NOTICE);
            return;
        }
        if (previousState == 4 || previousState == 1) {
            if (onSale != 0) {
                startScript("shop_in_sale");
            } else {
                startScript("shop_in");
            }
        } else {
            startScript("shop_in2");
        }
        scrRunOpcodesStub(controller);
        equipmentMenuBuildVisibleCategories(this, 0);
        shopSelectEntryStart(this, 0);
        uiSpriteBankApplyPreset(&animation, 1);
        substate = SHOP_MENU_TOP;
        return;
    }
    cursor = &animation.sprites[1];
    switch (substate) {
    case SHOP_MENU_TOP:
        advanceMenu(cursor);
        if (uiSpriteGetCompletionState(cursor) == 0) {
            break;
        }
        flags &= ~0xF00;
        if (messageWindowIsState1() != 0) {
            u32 scratch;
            const ShopMenuTextRecord *record =
                (const ShopMenuTextRecord *)dataTable17Type0GetEntry((u32)&scratch, rows[messageMainGetValue()]);
            buttonHelpSetText(record->help, SHOP_HELP_COLOR);
        }
        if (panelIsMissingOrFlagClear() == 0) {
            break;
        }
        obj04Finish();
        buttonHelpSetText(NULL, SHOP_HELP_COLOR);
        choice = messageGetChoiceResult();
        if (choice == (u32)-1) {
            messageDismissNumericBanner(1);
            changeState(SHOP_STATE_LEAVE);
            break;
        }
        switch (rows[choice]) {
        case SHOP_ROW_WEAPONS:
            equipmentMenuBuildVisibleCategories(this, 1);
            if (visibleCount <= 1) {
                /* the page's only category opens at once */
                openCategory(rows[0]);
            } else {
                menuCursorSet[1] = 1;
                shopSelectEntryStart(this, 1);
                substate = SHOP_MENU_WEAPONS;
                menuCursorSet[1] = 0;
            }
            break;
        case SHOP_ROW_ARMOUR:
            equipmentMenuBuildVisibleCategories(this, 2);
            if (visibleCount <= 1) {
                openCategory(rows[0]);
            } else {
                menuCursorSet[0] = 1;
                shopSelectEntryStart(this, 2);
                substate = SHOP_MENU_ARMOUR;
                menuCursorSet[0] = 0;
            }
            break;
        case SHOP_ROW_ITEMS:
            slot = SHOP_SLOT_ITEMS;
            FUN_004964e0(this, 1);
            changeState(SHOP_STATE_OPEN_PAGE);
            obj04Finish();
            break;
        case SHOP_ROW_SELL:
            slot = SHOP_SLOT_SELL;
            shopScreenRebuildForSelection(this, 1);
            changeState(SHOP_STATE_OPEN_PAGE);
            obj04Finish();
            break;
        }
        break;
    case SHOP_MENU_WEAPONS:
    case SHOP_MENU_ARMOUR:
        advanceMenu(cursor);
        /* the cursor's arrival is read here but, unlike in the top menu, not waited for */
        uiSpriteGetCompletionState(cursor);
        if (messageWindowIsState1() != 0) {
            u32 scratch;
            const ShopMenuTextRecord *record = (const ShopMenuTextRecord *)dataTable17Type0GetEntry(
                (u32)&scratch, rows[messageMainGetValue()] + SHOP_ROW_TEXT_PAGE);
            buttonHelpSetText(record->help, SHOP_HELP_COLOR);
        }
        if (panelIsMissingOrFlagClear() == 0) {
            break;
        }
        obj04Finish();
        buttonHelpSetText(NULL, SHOP_HELP_COLOR);
        choice = messageGetChoiceResult();
        if (choice != (u32)-1) {
            openCategory(rows[choice]);
            break;
        }
        /* back to the top menu */
        if (substate == SHOP_MENU_WEAPONS) {
            menuCursors[2] = 0;
        } else {
            menuCursors[2] = 1;
        }
        equipmentMenuBuildVisibleCategories(this, 0);
        shopSelectEntryStart(this, 0);
        substate = SHOP_MENU_TOP;
        break;
    }
}
