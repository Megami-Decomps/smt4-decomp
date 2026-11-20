#include "gamedata/PartyPanelHelp.h"
#include "ui/PartyPanelState.h"

extern "C" {
void buttonHelpShowSkillDetails(u16 skill);
void FUN_0029212c(u16 item);
void FUN_001b0558();

void buttonHelpSetText(const char *text, u32 color);

/* The help-text table's entry `index`, or NULL when the table has no such entry. */
static __inline const char *partyHelpText(u32 index)
{
    void *table = dataTableGet(0x39, 0);
    PartyPanelHelpRecord *records = partyPanelHelpRecords(table);
    if (dataTableGetCount(table) > index) {
        return records[index].text;
    }
    return NULL;
}

/* Shows the button help of the party panel's current screen: skill or item details, the fusion help lines, or the
 * panel's general help. */
void partyPanelShowButtonHelp()
{
    PartyPanelState *panel = g_partyPanel;
    if (panel == NULL) {
        return;
    }
    const char *text = NULL;
    switch (panel->panelState) {
    case 0: case 1:
        break;
    case 5: case 6: case 7:
        buttonHelpShowSkillDetails(panel->previewItem);
        return;
    case 8: case 9:
        FUN_0029212c(panel->previewItem);
        return;
    case 10:
        if (panel->fusionParentCount == 0) {
            text = partyHelpText(3);
        } else if (panel->fusionParentCount == 1) {
            text = partyHelpText(4);
        }
        break;
    case 11:
        text = partyHelpText(5);
        break;
    case 2: case 3: case 4:
    case 12: case 13: case 14: case 15: case 16:
        FUN_001b0558();
        return;
    default:
        break;
    }
    if (text != NULL) {
        buttonHelpSetText(text, 0x323232ff);
    }
}
}
