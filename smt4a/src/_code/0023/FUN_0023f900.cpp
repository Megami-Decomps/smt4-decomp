#include "ui/PartyPanelStateA.h"
#include "gamedata/PartyPanelHelp.h"

#define HELP_TEXT_TABLE 0x39
#define HELP_TEXT_COLOR 0xF4F4F4FF

/* A unit record (observed field). */
struct HelpUnitRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 demonId;
};

extern "C" {

void buttonHelpSetText(const char *text, u32 color);
s32 FUN_002cad18(void);
u32 partyPanelGetSelectedDemonId(void);
u32 btlMainGetUnk14(void);
void FUN_003aeb18(s32 value, s32 other);
HelpUnitRecord *slotRecordFindById(u16 id);
void unitRecordBuild(u16 id, u8 *record);
void FUN_0032d0c8(s32 mode, s32 visible, u16 id, HelpUnitRecord *record);

/* The help-text table's entry `index`, or NULL when the table has no such entry. */
static __inline char *partyHelpText(u32 index)
{
    void *table = dataTableGet(HELP_TEXT_TABLE, 0);
    PartyPanelHelpRecordA *records = partyPanelHelpRecordsA(table);

    if (dataTableGetCount(table) > index) {
        return records[index].text;
    }
    return NULL;
}

/* Shows the help text of the party panel's current screen when no demon is selected, otherwise opens
 * the selected demon's detail (a special view for a few demons in the second mode). */
void FUN_0023f900(void)
{
    PartyPanelStateA *panel = g_partyPanel;
    s32 hasSelection = FUN_002cad18();
    s32 selected = (s32)partyPanelGetSelectedDemonId();

    if (panel->layoutMode != 1) {
        if (hasSelection != 0) {
            FUN_003aeb18(0, 0);
            return;
        }
    } else if (hasSelection != 0) {
        HelpUnitRecord *linked = (HelpUnitRecord *)btlMainGetUnk14();

        if (linked != NULL) {
            selected = (s16)linked->demonId;
        }
    }
    if (selected < 0) {
        if (panel->panelState == 12 || panel->panelState == 13) {
            buttonHelpSetText(partyHelpText(6), HELP_TEXT_COLOR);
        }
        if (panel->panelState == 14) {
            buttonHelpSetText(partyHelpText(7), HELP_TEXT_COLOR);
        }
        if (panel->panelState == 4) {
            buttonHelpSetText(partyHelpText(2), HELP_TEXT_COLOR);
        }
        if (panel->panelState == 15) {
            buttonHelpSetText(partyHelpText(8), HELP_TEXT_COLOR);
        }
        if (panel->panelState == 2) {
            buttonHelpSetText(partyHelpText(0), HELP_TEXT_COLOR);
        }
        if (panel->panelState == 3) {
            buttonHelpSetText(partyHelpText(1), HELP_TEXT_COLOR);
        }
        if (panel->panelState == 17) {
            buttonHelpSetText(partyHelpText(9), HELP_TEXT_COLOR);
        }
        if (panel->panelState == 19) {
            buttonHelpSetText(partyHelpText(10), HELP_TEXT_COLOR);
            return;
        }
    } else {
        u8 buffer[0x130];
        HelpUnitRecord *record = slotRecordFindById((u16)selected);
        if (record == NULL) {
            unitRecordBuild((u16)selected, buffer);
            record = (HelpUnitRecord *)buffer;
        }
        if (panel->layoutMode == 1) {
            if (record->demonId == 0x29D || record->demonId == 0x29E || record->demonId == 0x317) {
                FUN_0032d0c8(0, 11, (u16)selected, record);
                return;
            }
        }
        FUN_0032d0c8(0, 1, (u16)selected, record);
    }
}

} /* extern "C" */
