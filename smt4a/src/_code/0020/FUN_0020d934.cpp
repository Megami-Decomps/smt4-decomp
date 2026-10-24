/* NON_MATCHING: the repeated table-section lookups (get, entries, count) are not merged the way retail's per-case calls are, and the switch layout differs; the help text chosen for each panel kind is the same. */
#include "common.h"
#include "gamedata/DataTable.h"

/* One line of table 0x39 (0x5C bytes): the help text starts at byte 1. */
struct HelpLine {
    u8 unk00;
    char text[0x5B];
};

/* The party panel (only the fields read here). */
struct PartyPanelView {
    u8 unk000[0x36];
    u16 id;
    u8 unk038[0x97C];
    u8 kind;
    u8 unk9b5[0x4CF];
    s32 mode;
    u8 unke88[0x1EC];
    u32 flags;
};

extern "C" void FUN_0019de98(const char *text, u32 color);

/* Shows line `line` of table 0x39 when the table has it. */
static __inline void showHelpLine(u32 line)
{
    DataTableView<HelpLine> help(0x39, 0);
    HelpLine *entry = help.at(line);

    if (entry != NULL) {
        FUN_0019de98(entry->text, 0xF4F4F4FF);
    }
}

extern "C" {
extern PartyPanelView *g_partyPanel;
void FUN_0023f900(void);
void screenShowMessage(u32 id);
void FUN_00359b6c(u32 id);

/* Shows the help line for the party panel's current screen: the page-specific handlers, or a
 * line of table 0x39 picked by the panel kind and its flags. */
void FUN_0020d934(void)
{
    if (g_partyPanel == NULL) {
        return;
    }
    switch (g_partyPanel->kind) {
    default:
        return;
    case 2:
    case 3:
    case 4:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x13:
    case 0x14:
        FUN_0023f900();
        return;
    case 5:
    case 6:
    case 7:
        FUN_00359b6c(g_partyPanel->id);
        return;
    case 8:
    case 9:
        screenShowMessage(g_partyPanel->id);
        return;
    case 10:
    case 0x12:
        if (g_partyPanel->mode == 0) {
            showHelpLine(3);
            return;
        } else if (g_partyPanel->mode != 1) {
            return;
        } else if ((g_partyPanel->flags & 8) != 0) {
            showHelpLine(14);
            return;
        } else if ((g_partyPanel->flags & 0x40) != 0) {
            showHelpLine(11);
            return;
        } else if ((g_partyPanel->flags & 2) != 0) {
            showHelpLine(12);
            return;
        } else if ((g_partyPanel->flags & 4) != 0) {
            showHelpLine(13);
            return;
        } else if ((g_partyPanel->flags & 0x20) != 0) {
            showHelpLine(15);
            return;
        } else if ((g_partyPanel->flags & 0x80) != 0) {
            showHelpLine(16);
            return;
        } else {
            showHelpLine(4);
            return;
        }
    case 0xB:
        showHelpLine(5);
        return;
    }
}
}
