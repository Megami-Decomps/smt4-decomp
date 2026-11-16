#include "classes/AocMenu.h"
#include "classes/Obj422214Owner.h"
#include "shard/Shard004A.h"
#include "shard/W6_W6Match2_StatusBytes.h"

/* The part of the add-on main block that holds the per-slot records (0x9c8 bytes each). */
struct AocSlotTableView {
    /* 0x000 */ u8 unk000[0x678];
    /* 0x678 */ Obj422214Owner *records;
    /* 0x67C */ u32 count;
};
typedef char AocSlotTableViewOffsets[
    offsetof(AocSlotTableView, records) == 0x678 && offsetof(AocSlotTableView, count) == 0x67c ? 1 : -1];

extern "C" {
extern AocSlotTableView *g_aocMain;

void sysPlaySe(u32 id);
void FUN_00182084(void);
void buttonHelpBeginExit(s32 clearKinds);
void FUN_00183f58(u32 index, u32 kind, u32 value, u32 queue);
void ifTouchDecrementTimer(void);
void buttonHelpSetText(const s8 *text, u32 color);
void FUN_002bf4f4(u8 value);
void buttonHelpSetSelectedId(u16 value);
u8 countOwnerIsValidIndex(const AocSlotTableView *owner, u32 index);
u32 statusDecodeActivityState(const StatusBytes *status);

enum {
    AOC_HELP_COLOR = 0xf4f4f4ff,
    AOC_MENU_HELP_SHOWN = 0x100000
};

/* Releases the six touch registrations of the help panel. */
static __inline void releaseTouchRegistrations(void)
{
    for (s32 index = 0; index < 6; ++index) {
        ifTouchDecrementTimer();
    }
}

/* The slot the menu's selection currently points at. */
static __inline u32 selectedSlot(const AocMenu *menu)
{
    return flaggedValueHolderGetTotal(reinterpret_cast<const FlaggedValueHolder *>(&menu->selection));
}

static __inline Obj422214Owner *selectedRecord(AocSlotTableView *main, const AocMenu *menu)
{
    return &main->records[selectedSlot(menu)];
}

/* Clears the last unit and applies the prompt text and its color. */
static __inline void finishFooter(AocMenu *menu)
{
    FUN_00183f58(5, 0, 0, 0);
    FUN_002bf4f4(1);
    buttonHelpSetText(reinterpret_cast<const s8 *>(menu->prompt), AOC_HELP_COLOR);
}

/* Lays out the menu's six button-help units for the given selection (-1 closes them) and, when `mode` is set, announces the change. */
void aocMenuSetButtonHelp(AocMenu *menu, u32 selection, s32 mode)
{
    buttonHelpSetSelectedId(0);
    switch (selection) {
    case 0xffffffff:
        if ((menu->flags & AOC_MENU_HELP_SHOWN) != 0) {
            menu->flags &= ~AOC_MENU_HELP_SHOWN;
            buttonHelpBeginExit(0);
            releaseTouchRegistrations();
        }
        return;
    case 0:
        menu->flags |= AOC_MENU_HELP_SHOWN;
        sysPlaySe(0xcb);
        releaseTouchRegistrations();
        FUN_00182084();
        return;
    case 1:
        menu->flags |= AOC_MENU_HELP_SHOWN;
        if (mode != 0) {
            sysPlaySe(0xcc);
            releaseTouchRegistrations();
            FUN_00182084();
        }
        FUN_00183f58(0, 0x11, 0, 1);
        FUN_00183f58(1, 0, 0, 1);
        FUN_00183f58(2, 0xb, 0x4b, 1);
        FUN_00183f58(3, 0, 0, 1);
        FUN_00183f58(4, 0x10, 0x4f, 1);
        FUN_00183f58(5, 0, 0, 1);
        return;
    case 2: {
        menu->flags |= AOC_MENU_HELP_SHOWN;
        AocSlotTableView *main = g_aocMain;
        selectedSlot(menu);
        if (mode != 0) {
            sysPlaySe(0xcd);
            releaseTouchRegistrations();
            FUN_00182084();
        }
        FUN_00183f58(0, 0xa, 0x4a, 1);
        FUN_00183f58(1, 0, 0, 1);
        FUN_00183f58(2, 0xb, 0x4b, 1);
        FUN_00183f58(3, 0, 0, 1);
        if (countOwnerIsValidIndex(main, selectedSlot(menu))) {
            if (selectedRecord(main, menu)->flags[7] != 0) {
                FUN_00183f58(4, 0xf, 0x4f, 0);
            } else {
                switch (statusDecodeActivityState(reinterpret_cast<const StatusBytes *>(selectedRecord(main, menu)))) {
                case 0:
                    FUN_00183f58(4, 0xc, 0x4c, 0);
                    break;
                case 1:
                    FUN_00183f58(4, 0xd, 0x4d, 0);
                    break;
                case 2:
                    FUN_00183f58(4, 0xe, 0x4e, 0);
                    break;
                case 3:
                    FUN_00183f58(4, 0x11, 0, 0);
                    break;
                }
            }
        } else {
            FUN_00183f58(4, 0x11, 0, 0);
        }
        finishFooter(menu);
        return;
    }
    case 3:
        menu->flags |= AOC_MENU_HELP_SHOWN;
        if (mode != 0) {
            sysPlaySe(0xcc);
            releaseTouchRegistrations();
            FUN_00182084();
        }
        FUN_00183f58(0, 0x11, 0, 1);
        FUN_00183f58(1, 0, 0, 1);
        FUN_00183f58(2, 0x11, 0, 1);
        FUN_00183f58(3, 0, 0, 1);
        FUN_00183f58(4, 0x10, 0x4f, 1);
        FUN_00183f58(5, 0, 0, 1);
        FUN_002bf4f4(0);
        buttonHelpSetText(NULL, AOC_HELP_COLOR);
        return;
    case 4:
        menu->flags |= AOC_MENU_HELP_SHOWN;
        if (mode != 0) {
            sysPlaySe(0xd0);
        }
        return;
    }
}

} /* extern "C" */
