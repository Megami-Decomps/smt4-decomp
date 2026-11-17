/* NON_MATCHING: the repeated table-section lookups (get, entries, count) are not merged the way retail's per-case calls are, and the switch layout differs; the help text chosen for each panel kind is the same. */
#include "ui/PartyPanelStateA.h"
#include "gamedata/PartyPanelHelp.h"

extern "C" void buttonHelpSetText(const char *text, u32 color);

/* Shows line `line` of PartyPanelHelp.tbb when the table has it. */
static __inline void showHelpLine(u32 line)
{
    DataTableView<PartyPanelHelpRecordA> help(0x39, 0);
    PartyPanelHelpRecordA *entry = help.at(line);

    if (entry != NULL) {
        buttonHelpSetText(entry->text, 0xF4F4F4FF);
    }
}

extern "C" {
void FUN_0023f900(void);
void screenShowMessage(u32 id);
void skillHelpUpdateAttributeAndTarget(u32 id);

/* Shows the help line for the party panel's current screen: the page-specific handlers, or a
 * line of table 0x39 picked by the panel kind and its flags. */
void FUN_0020d934(void)
{
    if (g_partyPanel == NULL) {
        return;
    }
    switch (g_partyPanel->panelState) {
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
        skillHelpUpdateAttributeAndTarget(g_partyPanel->previewItem);
        return;
    case 8:
    case 9:
        screenShowMessage(g_partyPanel->previewItem);
        return;
    case 10:
    case 0x12:
        if (g_partyPanel->fusionParentCount == 0) {
            showHelpLine(3);
            return;
        } else if (g_partyPanel->fusionParentCount != 1) {
            return;
        } else if ((g_partyPanel->selectedFusionFlags & 8) != 0) {
            showHelpLine(14);
            return;
        } else if ((g_partyPanel->selectedFusionFlags & 0x40) != 0) {
            showHelpLine(11);
            return;
        } else if ((g_partyPanel->selectedFusionFlags & 2) != 0) {
            showHelpLine(12);
            return;
        } else if ((g_partyPanel->selectedFusionFlags & 4) != 0) {
            showHelpLine(13);
            return;
        } else if ((g_partyPanel->selectedFusionFlags & 0x20) != 0) {
            showHelpLine(15);
            return;
        } else if ((g_partyPanel->selectedFusionFlags & 0x80) != 0) {
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
