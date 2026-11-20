#include "ui/PartyPanelStateA.h"
#include "gamedata/PartyPanelHelp.h"

extern "C" {
void buttonHelpSetText(const char *text, u32 color);
void FUN_0023f900(void);
void screenShowMessage(u32 id);
void skillHelpUpdateAttributeAndTarget(u32 id);

/* The help-text table's entry `index`, or NULL when the table has no such entry. */
static __inline const char *partyHelpText(u32 index)
{
    void *table = dataTableGet(0x39, 0);
    PartyPanelHelpRecordA *records = partyPanelHelpRecordsA(table);
    if (dataTableGetCount(table) > index) {
        return records[index].text;
    }
    return NULL;
}

/* Shows the help line for the party panel's current screen: the page-specific handlers, or a
 * line of table 0x39 picked by the panel kind and the selected fusion's flags. */
void partyPanelShowButtonHelp(void)
{
    PartyPanelStateA *panel = g_partyPanel;
    if (panel == NULL) {
        return;
    }
    const char *text = NULL;
    switch (panel->panelState) {
    case 0: case 1:
        break;
    case 5: case 6: case 7:
        skillHelpUpdateAttributeAndTarget(panel->previewItem);
        return;
    case 8: case 9:
        screenShowMessage(panel->previewItem);
        return;
    case 10: case 18:
        if (panel->fusionParentCount == 0) {
            text = partyHelpText(3);
        } else if (panel->fusionParentCount == 1) {
            if ((panel->selectedFusionFlags & 8) != 0) {
                text = partyHelpText(14);
            } else if ((panel->selectedFusionFlags & 0x40) != 0) {
                text = partyHelpText(11);
            } else if ((panel->selectedFusionFlags & 2) != 0) {
                text = partyHelpText(12);
            } else if ((panel->selectedFusionFlags & 4) != 0) {
                text = partyHelpText(13);
            } else if ((panel->selectedFusionFlags & 0x20) != 0) {
                text = partyHelpText(15);
            } else if ((panel->selectedFusionFlags & 0x80) != 0) {
                text = partyHelpText(16);
            } else {
                text = partyHelpText(4);
            }
        }
        break;
    case 11:
        text = partyHelpText(5);
        break;
    case 2: case 3: case 4:
    case 12: case 13: case 14: case 15: case 16: case 17:
    case 19: case 20:
        FUN_0023f900();
        return;
    default:
        break;
    }
    if (text != NULL) {
        buttonHelpSetText(text, 0xF4F4F4FF);
    }
}

} /* extern "C" */
