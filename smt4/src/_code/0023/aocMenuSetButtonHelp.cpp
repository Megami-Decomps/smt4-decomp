#include "ui/ButtonHelp.h"
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "classes/Obj422214Owner.h"
#include "shard/Shard004A.h"
#include "shard/W6_W6Match2_StatusBytes.h"

extern "C" {

void buttonHelpSetPreset(u32 preset);
void buttonHelpRebuildTouchRegions(void);
void buttonHelpClosePanel(s32 clearKinds);
void ifTouchDecrementTimer(void);
void buttonHelpSetText(const s8 *text, u32 color);
void buttonHelpSetPanelState(u8 value);
void buttonHelpWorkSetPreset(u8 value);
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
    buttonHelpSetSlot(5, 0, 0, 0);
    buttonHelpSetPanelState(1);
    buttonHelpSetText(reinterpret_cast<const s8 *>(menu->prompt), AOC_HELP_COLOR);
}

/* Lays out the menu's six button-help units for the given selection (-1 closes them) and, when `mode` is set, announces the change. */
void aocMenuSetButtonHelp(AocMenu *menu, u32 selection, s32 mode)
{
    buttonHelpWorkSetPreset(0);
    switch (selection) {
    case 0xffffffff:
        if ((menu->flags & AOC_MENU_HELP_SHOWN) != 0) {
            menu->flags &= ~AOC_MENU_HELP_SHOWN;
            buttonHelpClosePanel(0);
            releaseTouchRegistrations();
        }
        return;
    case 0:
        menu->flags |= AOC_MENU_HELP_SHOWN;
        buttonHelpSetPreset(0xc9);
        releaseTouchRegistrations();
        buttonHelpRebuildTouchRegions();
        return;
    case 1:
        menu->flags |= AOC_MENU_HELP_SHOWN;
        if (mode != 0) {
            buttonHelpSetPreset(0xca);
            releaseTouchRegistrations();
            buttonHelpRebuildTouchRegions();
        }
        buttonHelpSetSlot(0, 0x11, 0, 1);
        buttonHelpSetSlot(1, 0, 0, 1);
        buttonHelpSetSlot(2, 0xb, 0x4b, 1);
        buttonHelpSetSlot(3, 0, 0, 1);
        buttonHelpSetSlot(4, 0x10, 0x4f, 1);
        buttonHelpSetSlot(5, 0, 0, 1);
        return;
    case 2: {
        menu->flags |= AOC_MENU_HELP_SHOWN;
        AocMain *main = g_aocMain;
        selectedSlot(menu);
        if (mode != 0) {
            buttonHelpSetPreset(0xcb);
            releaseTouchRegistrations();
            buttonHelpRebuildTouchRegions();
        }
        buttonHelpSetSlot(0, 0xa, 0x4a, 1);
        buttonHelpSetSlot(1, 0, 0, 1);
        buttonHelpSetSlot(2, 0xb, 0x4b, 1);
        buttonHelpSetSlot(3, 0, 0, 1);
        if (aocIsEntryIndexValid(main, selectedSlot(menu))) {
            if (selectedRecord(main, menu)->flags[7] != 0) {
                buttonHelpSetSlot(4, 0xf, 0x4f, 0);
            } else {
                switch (statusDecodeActivityState(reinterpret_cast<const StatusBytes *>(selectedRecord(main, menu)))) {
                case 0:
                    buttonHelpSetSlot(4, 0xc, 0x4c, 0);
                    break;
                case 1:
                    buttonHelpSetSlot(4, 0xd, 0x4d, 0);
                    break;
                case 2:
                    buttonHelpSetSlot(4, 0xe, 0x4e, 0);
                    break;
                case 3:
                    buttonHelpSetSlot(4, 0x11, 0, 0);
                    break;
                }
            }
        } else {
            buttonHelpSetSlot(4, 0x11, 0, 0);
        }
        finishFooter(menu);
        return;
    }
    case 3:
        menu->flags |= AOC_MENU_HELP_SHOWN;
        if (mode != 0) {
            buttonHelpSetPreset(0xca);
            releaseTouchRegistrations();
            buttonHelpRebuildTouchRegions();
        }
        buttonHelpSetSlot(0, 0x11, 0, 1);
        buttonHelpSetSlot(1, 0, 0, 1);
        buttonHelpSetSlot(2, 0x11, 0, 1);
        buttonHelpSetSlot(3, 0, 0, 1);
        buttonHelpSetSlot(4, 0x10, 0x4f, 1);
        buttonHelpSetSlot(5, 0, 0, 1);
        buttonHelpSetPanelState(0);
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
