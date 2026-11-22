#ifndef CLASSES_OBJ536044_H
#define CLASSES_OBJ536044_H

#include "common.h"
#include <stddef.h>
#include "ui/UiSpriteState.h"
#include "shop/EquipmentMenuPage.h"
#include "shop/ShopPanel.h"
#include "shop/ShopSlotNeighbors.h"
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W6_W6Match7_NumericStepper.h"
#include "shard/W6_W6Match6_SpritePresetBank.h"

struct ScriptProcess;
struct MoriModelContent;
class Obj536044;

extern "C" void shopEnterQuantitySelection(Obj536044 *shop, s32 nextState);
extern "C" void shopTrackSelectedItemPreview(Obj536044 *scene);
extern "C" void shopDrawSelectedItem(Obj536044 *shop);

/* A scene whose step functions are listed in the table at 0x536044 (named after it until its real
 * name is known): the table holds member-function pointers, not a vtable. */
class Obj536044 {
public:
    typedef void (Obj536044::*Handler)();
    typedef s32 (Obj536044::*ExitHandler)();

    /* Clears both handler banks, then installs the state handlers. */
    void resetHandlers();

    /* After the transition (screenFadeIsBusy) is over: marks the scene changed (flags 0x102), remembers
     * the current state and moves to state 3. */
    void enterState3();

    /* Moves to state 5 once scrRunOpcodesStub reports 2 for the scene's controller. */
    void waitController();

    void FUN_0049569c();
    void FUN_00494a34();
    void FUN_00498ac0();
    void FUN_004995b0();
    void updatePageTransition();
    void FUN_0049bd20();
    void itemMenuHandleSelectionInput();
    void FUN_00499fdc();
    void FUN_0049a2b4();
    void shopQuantityStep();
    void shopUpdateCharonRequestTransition();
    void sceneMarkActiveEnterState21();
    void FUN_004969a8();
    void panelUpdatePageExitTransition();
    void FUN_00497290();
    void FUN_00498594();
    void FUN_00495584();

protected:
    /* Remembers the current state, enters `next` and restarts the substate. */
    void changeState(s32 next)
    {
        previousState = state;
        state = next;
        substate = 0;
    }

    /* The quantity state's helpers, inline in Obj536044__shopQuantityStep.cpp: the item under the
     * category's cursor, what the chosen quantity of it costs, that price shown as a change of the
     * player's macca, and starting an entry of the shop script. */
    EquipmentMenuItem *selectedItem();
    s32 quantityPrice();
    void showPriceChange();
    void startScript(const char *name);

    /* The list states' tests of the item under the cursor: whether it can be sold (inline in
     * Obj536044__FUN_00499fdc.cpp) and whether the player can pay for it (shop/ShopBuyItem.h, inlined by
     * FUN_0049bd20 and itemMenuHandleSelectionInput). Slot 8 is the selling list. */
    /* The category menu's helpers, inline in Obj536044__FUN_004995b0.cpp: running the shop's scripts
     * with the menu cursor, and opening a weapon or armour category's list. */
    void advanceMenu(UiSpriteState *cursor);
    void openCategory(s32 category);

    bool canSellItem(const EquipmentMenuItem *item);
    bool canBuyItem(const EquipmentMenuItem *item);

    /* 0x00 */ u32 flags;                /* 0x1000: the quantity panel is on screen */
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 substate;
    /* 0x0C */ s32 timer;
    /* 0x10 */ s32 previousState;
    /* 0x14 */ s32 mode;                /* 0 and 1: the equipment pages; with 1 the restricted slot 0 can still be left */
    /* 0x18 */ u8 restricted;           /* slots 0 and 3 take their restricted neighbours, as they do until flag 0x410 is set */
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ s32 kind;                /* which shop this is; its sale has its own flag (statsTestFlag) */
    /* 0x20 */ u8 unk20;
    /* 0x21 */ u8 onSale;               /* the shop greets with its sale script ("shop_in_sale") */
    /* 0x22 */ u8 previewing;           /* the selected item's preview is up */
    /* 0x23 */ u8 previewReady;         /* the equipment preview model has been requested */
    /* 0x24 */ Handler states[22];
    /* 0xD4 */ ExitHandler exitStates[22];
    /* 0x184 */ u32 tableGroup;
    /* 0x188 */ u8 unk188[4];
    /* 0x18C */ ScriptProcess *controller;  /* the shop script */
    /* 0x190 */ ScriptProcess *menuScript;  /* the category menu's script ("shop_select") */
    /* 0x194 */ char menuText[0x200];       /* the menu's rows, one line each (shopSelectEntryStart) */
    /* 0x394 */ void *resultTable;
    /* 0x398 */ void *resultMessages;
    /* 0x39C */ ScriptProcess *resultScript;
    /* 0x3A0 */ u8 unk3A0[4];
    /* 0x3A4 */ f32 cursorPosition[2];      /* where the appraisal cursor is drawn */
    /* 0x3AC */ u8 unk3AC[0xC];
    /* 0x3B8 */ EmptyRange panelRect;       /* where the quantity panel is drawn */
    /* 0x3CC */ SpritePresetBank animation; /* the scene's thirteen sprites: 0 the cursor, 6 slides the quantity panel in, 7 out */
    /* 0xB08 */ u8 touchSelection[0x34];    /* the list's touch selection (menuSynchronizeFlaggedSelection) */
    /* 0xB3C */ ShopPanel *view;
    /* 0xB40 */ s32 slot;                   /* the category shown (7: items, 8: selling) */
    /* 0xB44 */ s32 tab;
    /* 0xB48 */ NumericStepper quantity;    /* how many of the selected item to trade */
    /* 0xB60 */ EquipmentMenuCursor slotInfo[9];
    /* 0xF74 */ EquipmentMenuPage lists[9];
    /* 0x9F86 */ u8 unk9F86[2];
    /* 0x9F88 */ u8 flaggedValues[0x76];    /* the appraisal list's cursor */
    /* 0x9FFE */ u16 messages[3];           /* the appraisal records follow: 6 bytes each, the message id first */
    /* 0xA004 */ u8 unkA004[0xBFFC];
    /* 0x16000 */ u32 panel;
    /* 0x16004 */ s32 previewEnabled;       /* the selected item is shown on the character */
    /* 0x16008 */ u32 previewedId;          /* the item shown on the character */
    /* 0x1600C */ s32 rows[4];              /* what each row of the category menu stands for */
    /* 0x1601C */ s32 visibleCount;         /* how many categories the menu shows */
    /* 0x16020 */ u8 unk16020[8];
    /* 0x16028 */ MoriModelContent *resource;  /* the equipment preview model */
    /* 0x1602C */ s16 nextItem;         /* the records whose mode 6 stands for the right and left buttons */
    /* 0x1602E */ s16 previousItem;
    /* 0x16030 */ s16 touchRegionCount;
    /* 0x16032 */ u8 unk16032[2];
    /* 0x16034 */ u32 lastSelectedId;       /* the item the preview was last restarted for */
    /* 0x16038 */ u32 menuCursors[3];       /* where each category menu's cursor returns to: [0] the armour page's, [1] the weapons page's, [2] the top menu's row */
    /* 0x16044 */ u8 menuCursorSet[2];      /* set while a page menu is started ([0] armour, [1] weapons): it opens at its remembered cursor */
    /* 0x16046 */ u8 unk16046[2];
    /* 0x16048 */ s32 quantityIndex;        /* the list index the quantity panel was set up for, -1: none */

    friend void shopEnterQuantitySelection(Obj536044 *shop, s32 nextState);
    friend void shopTrackSelectedItemPreview(Obj536044 *scene);
    friend void shopDrawSelectedItem(Obj536044 *shop);
    friend struct Obj536044LayoutCheck;
};


struct Obj536044LayoutCheck {
    char restricted[offsetof(Obj536044, restricted) == 0x18 ? 1 : -1];
    char previewing[offsetof(Obj536044, previewing) == 0x22 ? 1 : -1];
    char nextItem[offsetof(Obj536044, nextItem) == 0x1602C ? 1 : -1];
    char visibleCount[offsetof(Obj536044, visibleCount) == 0x1601C ? 1 : -1];
    char previewedId[offsetof(Obj536044, previewedId) == 0x16008 ? 1 : -1];
    char lastSelectedId[offsetof(Obj536044, lastSelectedId) == 0x16034 ? 1 : -1];
    char mode[offsetof(Obj536044, mode) == 0x14 ? 1 : -1];
    char kind[offsetof(Obj536044, kind) == 0x1C ? 1 : -1];
    char onSale[offsetof(Obj536044, onSale) == 0x21 ? 1 : -1];
    char menuScript[offsetof(Obj536044, menuScript) == 0x190 ? 1 : -1];
    char rows[offsetof(Obj536044, rows) == 0x1600C ? 1 : -1];
    char resultScript[offsetof(Obj536044, resultScript) == 0x39C ? 1 : -1];
    char previewReady[offsetof(Obj536044, previewReady) == 0x23 ? 1 : -1];
    char panelRect[offsetof(Obj536044, panelRect) == 0x3B8 ? 1 : -1];
    char cursorPosition[offsetof(Obj536044, cursorPosition) == 0x3A4 ? 1 : -1];
    char animation[offsetof(Obj536044, animation) == 0x3CC ? 1 : -1];
    char cursorSprite[offsetof(Obj536044, animation.sprites[0].finished) == 0x476 ? 1 : -1];
    char flaggedValues[offsetof(Obj536044, flaggedValues) == 0x9F88 ? 1 : -1];
    char panel[offsetof(Obj536044, panel) == 0x16000 ? 1 : -1];
    char resource[offsetof(Obj536044, resource) == 0x16028 ? 1 : -1];
    char size[sizeof(Obj536044) == 0x1604C ? 1 : -1];
    char touchSelection[offsetof(Obj536044, touchSelection) == 0xB08 ? 1 : -1];
    char slot[offsetof(Obj536044, slot) == 0xB40 ? 1 : -1];
    char quantity[offsetof(Obj536044, quantity) == 0xB48 ? 1 : -1];
    char slotInfo[offsetof(Obj536044, slotInfo) == 0xB60 ? 1 : -1];
    char lists[offsetof(Obj536044, lists) == 0xF74 ? 1 : -1];
    char quantityIndex[offsetof(Obj536044, quantityIndex) == 0x16048 ? 1 : -1];
};

#endif
