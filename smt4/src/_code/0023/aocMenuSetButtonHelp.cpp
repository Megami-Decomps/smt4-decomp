#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "classes/Obj422214Owner.h"
#include "shard/Shard004A.h"
#include "shard/W6_W6Match2_StatusBytes.h"

extern "C" {

void buttonHelpSetPreset(u32 preset);
void FUN_002ae5e0(void);
void FUN_00289c98(s32 clearKinds);
void FUN_002b8454(u32 index, u32 kind, u32 value, u32 queue);
void ifTouchDecrementTimer(void);
void buttonHelpSetText(const s8 *text, u32 color);
void FUN_002636d0(u8 value);
void FUN_00290d5c(u8 value);
u8 aocIsEntryIndexValid(const AocMain *owner, u32 index);
u32 statusDecodeActivityState(const StatusBytes *status);

enum {
    AOC_HELP_COLOR = 0x323232ff,
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

static __inline Obj422214Owner *selectedRecord(AocMain *main, const AocMenu *menu)
{
    return &main->records[selectedSlot(menu)];
}

/* Clears the last unit and applies the prompt text and its color. */
static __inline void finishFooter(AocMenu *menu)
{
    FUN_002b8454(5, 0, 0, 0);
    FUN_002636d0(1);
    buttonHelpSetText(reinterpret_cast<const s8 *>(menu->prompt), AOC_HELP_COLOR);
}

/* Lays out the menu's six button-help units for the given selection (-1 closes them) and, when `mode` is set, announces the change. */
void aocMenuSetButtonHelp(AocMenu *menu, u32 selection, s32 mode)
{
    FUN_00290d5c(0);
    switch (selection) {
    case 0xffffffff:
        if ((menu->flags & AOC_MENU_HELP_SHOWN) != 0) {
            menu->flags &= ~AOC_MENU_HELP_SHOWN;
            FUN_00289c98(0);
            releaseTouchRegistrations();
        }
        return;
    case 0:
        menu->flags |= AOC_MENU_HELP_SHOWN;
        buttonHelpSetPreset(0xc9);
        releaseTouchRegistrations();
        FUN_002ae5e0();
        return;
    case 1:
        menu->flags |= AOC_MENU_HELP_SHOWN;
        if (mode != 0) {
            buttonHelpSetPreset(0xca);
            releaseTouchRegistrations();
            FUN_002ae5e0();
        }
        FUN_002b8454(0, 0x11, 0, 1);
        FUN_002b8454(1, 0, 0, 1);
        FUN_002b8454(2, 0xb, 0x4b, 1);
        FUN_002b8454(3, 0, 0, 1);
        FUN_002b8454(4, 0x10, 0x4f, 1);
        FUN_002b8454(5, 0, 0, 1);
        return;
    case 2: {
        menu->flags |= AOC_MENU_HELP_SHOWN;
        AocMain *main = g_aocMain;
        selectedSlot(menu);
        if (mode != 0) {
            buttonHelpSetPreset(0xcb);
            releaseTouchRegistrations();
            FUN_002ae5e0();
        }
        FUN_002b8454(0, 0xa, 0x4a, 1);
        FUN_002b8454(1, 0, 0, 1);
        FUN_002b8454(2, 0xb, 0x4b, 1);
        FUN_002b8454(3, 0, 0, 1);
        if (aocIsEntryIndexValid(main, selectedSlot(menu))) {
            if (selectedRecord(main, menu)->flags[7] != 0) {
                FUN_002b8454(4, 0xf, 0x4f, 0);
            } else {
                switch (statusDecodeActivityState(reinterpret_cast<const StatusBytes *>(selectedRecord(main, menu)))) {
                case 0:
                    FUN_002b8454(4, 0xc, 0x4c, 0);
                    break;
                case 1:
                    FUN_002b8454(4, 0xd, 0x4d, 0);
                    break;
                case 2:
                    FUN_002b8454(4, 0xe, 0x4e, 0);
                    break;
                case 3:
                    FUN_002b8454(4, 0x11, 0, 0);
                    break;
                }
            }
        } else {
            FUN_002b8454(4, 0x11, 0, 0);
        }
        finishFooter(menu);
        return;
    }
    case 3:
        menu->flags |= AOC_MENU_HELP_SHOWN;
        if (mode != 0) {
            buttonHelpSetPreset(0xca);
            releaseTouchRegistrations();
            FUN_002ae5e0();
        }
        FUN_002b8454(0, 0x11, 0, 1);
        FUN_002b8454(1, 0, 0, 1);
        FUN_002b8454(2, 0x11, 0, 1);
        FUN_002b8454(3, 0, 0, 1);
        FUN_002b8454(4, 0x10, 0x4f, 1);
        FUN_002b8454(5, 0, 0, 1);
        FUN_002636d0(0);
        buttonHelpSetText(NULL, AOC_HELP_COLOR);
        return;
    case 4:
        menu->flags |= AOC_MENU_HELP_SHOWN;
        if (mode != 0) {
            buttonHelpSetPreset(0xce);
        }
        return;
    }
}

} /* extern "C" */
