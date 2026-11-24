/* Apocalypse: the partner select menu (script entry "SetMainPartner"). It lists the owned partners in a
 * four-column grid; in item mode the same screen picks the partner a healing item is used on. */
#ifndef UI_PARTNERSELECTMENU_H
#define UI_PARTNERSELECTMENU_H

#include "common.h"
#include <stddef.h>

#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "ui/GridNavigation.h"
#include "ui/UiSpriteState.h"
#include "gamedata/SaveSlotTable.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"
#include "code/Code0018.h"

struct TableGroupHeader;
struct ScriptProcess;
struct RelativeDirectory;

enum {
    PARTNER_MENU_MODE_NONVISUAL = 1, /* starts the process without draw tasks */
    PARTNER_MENU_MODE_ITEM = 2,     /* PartnerSelectMenu::mode: picks the target of a healing item */
    PARTNER_MENU_COLUMNS = 4,
    PARTNER_MENU_SLOTS = 12
};

/* PartnerSelectMenu::state values the input step enters. */
enum {
    PARTNER_MENU_STATE_SLIDE = 2,       /* the panel slides to the status page */
    PARTNER_MENU_STATE_STATUS = 4,      /* the state the slide ends in (nextState) */
    PARTNER_MENU_STATE_SCRIPT = 5,      /* the partner change script runs */
    PARTNER_MENU_STATE_CLOSE = 13
};

struct PartnerSelectMenu {
    PartnerSelectMenu() : helpFile(NULL) {}
    static void *operator new(u32 size) throw() { return asdOperatorNew(size); }

    /* 0x000 */ u32 process;
    /* 0x004 */ u8 mode;                    /* PARTNER_MENU_MODE_ITEM, else the plain partner change */
    /* 0x005 */ u8 unk005[3];
    /* 0x008 */ s32 state;
    /* 0x00C */ s32 nextState;              /* the state entered when the panel slide ends */
    /* 0x010 */ u8 unk010[0x20];             /* the panel sprite's resource packet */
    /* 0x030 */ UiSpriteState panel;         /* the sliding panel */
    /* 0x0BC */ u8 unk0BC[0x1A4];
    /* 0x260 */ GridNavigation list;        /* the partner grid's cursor */
    /* 0x2C4 */ s32 slots[PARTNER_MENU_SLOTS];          /* party slot index of each listed partner (< 0: none) */
    /* 0x2F4 */ s32 cursor;                 /* the grid cursor as an index into slots */
    /* 0x2F8 */ s16 touchRegions[PARTNER_MENU_SLOTS];   /* touch region id of each grid cell */
    /* 0x310 */ u8 unk310[4];
    /* 0x314 */ RelativeDirectory *helpFile;
    /* 0x318 */ u32 messageFile;
    /* 0x31C */ TableGroupHeader *scriptTable;          /* entry names of the partner script */
    /* 0x320 */ ScriptProcess *script;
    /* 0x324 */ s32 count;                  /* partners listed */
    /* 0x328 */ s32 current;                /* index of the partner in use */
    /* 0x32C */ s32 selected;               /* index of the partner under the cursor */
    /* 0x330 */ u8 unk330[4];
    /* 0x334 */ u32 itemId;                 /* item mode: the healing item being used */
    /* 0x338 */ u8 usable[PARTNER_MENU_SLOTS];          /* item mode: whether the item still works on each partner */
    /* 0x344 */ s32 slideDirection;
    /* 0x348 */ u8 unk348[0x60];
};
typedef char PartnerSelectMenuLayoutCheck[offsetof(PartnerSelectMenu, list) == 0x260 &&
    offsetof(PartnerSelectMenu, panel) == 0x30 &&
    offsetof(PartnerSelectMenu, slots) == 0x2C4 && offsetof(PartnerSelectMenu, touchRegions) == 0x2F8 &&
    offsetof(PartnerSelectMenu, helpFile) == 0x314 && offsetof(PartnerSelectMenu, count) == 0x324 &&
    offsetof(PartnerSelectMenu, itemId) == 0x334 && offsetof(PartnerSelectMenu, slideDirection) == 0x344 &&
    sizeof(PartnerSelectMenu) == 0x3A8 ? 1 : -1];

extern "C" {
/* Initializes the partner list and starts the menu in the selected mode. */
void partnerMenuHandleSelectionInput(PartnerSelectMenu *menu, u32 mode);
/* Starts the panel sprite's slide for direction `keyframe` (0-3: position keys 4-7 and the matching image key). */
void partnerMenuStartPanelSlide(PartnerSelectMenu *menu, s32 keyframe, s32 image, u32 frame);
/* Item mode: uses one of the item on the selected partner, then moves the cursor to another partner it works on. */
void statusUseHealItemOnSelectedUnit(PartnerSelectMenu *menu);
} /* extern "C" */

#endif
