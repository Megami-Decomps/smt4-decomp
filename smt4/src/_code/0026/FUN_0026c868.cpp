/* NON_MATCHING: switch range/table placement and shared text-record header-byte adjustment differ. */
#include "gamedata/DataTable.h"
#include "ui/PartyPanelState.h"

extern "C" {
void buttonHelpShowSkillDetails(u16 skill);
void FUN_0029212c(u16 item);
void FUN_001b0558();

void buttonHelpSetText(const char *text, u32 color);

void FUN_0026c868()
{
    PartyPanelState *panel = g_partyPanel;
    if (panel == NULL) {
        return;
    }
    const char *text = NULL;
    switch (panel->panelState) {
    case 2: case 3: case 4:
    case 12: case 13: case 14: case 15: case 16:
        FUN_001b0558();
        return;
    case 5: case 6: case 7:
        buttonHelpShowSkillDetails(panel->previewItem);
        return;
    case 8: case 9:
        FUN_0029212c(panel->previewItem);
        return;
    case 10:
        if (panel->fusionParentCount == 0) {
            void *table = dataTableGet(0x39, 0);
            const char *entries = static_cast<const char *>(dataTableGetEntries(table));
            if (dataTableGetCount(table) > 3) {
                text = entries + 0xfd;
            }
        } else if (panel->fusionParentCount == 1) {
            void *table = dataTableGet(0x39, 0);
            const char *entries = static_cast<const char *>(dataTableGetEntries(table));
            if (dataTableGetCount(table) > 4) {
                text = entries + 0x151;
            }
        }
        break;
    case 11: {
        void *table = dataTableGet(0x39, 0);
        const char *entries = static_cast<const char *>(dataTableGetEntries(table));
        if (dataTableGetCount(table) > 5) {
            text = entries + 0x1a5;
        }
        break;
    }
    default:
        break;
    }
    if (text != NULL) {
        buttonHelpSetText(text, 0x323232ff);
    }
}
}
