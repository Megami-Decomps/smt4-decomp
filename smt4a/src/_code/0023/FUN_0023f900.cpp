#include "common.h"
#include "gamedata/DataTable.h"

#define HELP_TEXT_TABLE 0x39
#define HELP_TEXT_COLOR 0xF4F4F4FF

/* The party panel (observed fields). */
struct PartyHelpPanel {
    /* 0x0000 */ u8 unk0000[0x9B4];
    /* 0x09B4 */ u8 screen;
    /* 0x09B5 */ u8 unk09B5[0x863];
    /* 0x1218 */ s32 mode;
};

/* A row of the help-text table. */
struct PartyHelpRecord {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 text[0x5B];
};

/* A unit record (observed field). */
struct HelpUnitRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 demonId;
};

extern "C" {

extern PartyHelpPanel *g_partyPanel;

void buttonHelpSetText(u8 *text, u32 color);
s32 FUN_002cad18(void);
u32 partyPanelGetSelectedDemonId(void);
void FUN_003aeb18(s32 value, s32 other);
HelpUnitRecord *slotRecordFindById(u16 id);
void unitRecordBuild(u16 id, u8 *record);
void FUN_0032d0c8(s32 mode, s32 visible, u16 id, HelpUnitRecord *record);

/* The help-text table's entry `index`, or NULL when the table has no such entry. */
static __inline u8 *partyHelpText(u32 index)
{
    void *table = dataTableGet(HELP_TEXT_TABLE, 0);
    PartyHelpRecord *records = static_cast<PartyHelpRecord *>(dataTableGetEntries(table));

    if (dataTableGetCount(table) > index) {
        return records[index].text;
    }
    return NULL;
}

/* Shows the help text of the party panel's current screen when no demon is selected, otherwise opens
 * the selected demon's detail (a special view for a few demons in the second mode). */
void FUN_0023f900(void)
{
    PartyHelpPanel *panel = g_partyPanel;
    s32 hasSelection = FUN_002cad18();
    s32 selected = (s32)partyPanelGetSelectedDemonId();

    if (panel->mode != 1) {
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
        if (panel->screen == 12 || panel->screen == 13) {
            buttonHelpSetText(partyHelpText(6), HELP_TEXT_COLOR);
        }
        if (panel->screen == 14) {
            buttonHelpSetText(partyHelpText(7), HELP_TEXT_COLOR);
        }
        if (panel->screen == 4) {
            buttonHelpSetText(partyHelpText(2), HELP_TEXT_COLOR);
        }
        if (panel->screen == 15) {
            buttonHelpSetText(partyHelpText(8), HELP_TEXT_COLOR);
        }
        if (panel->screen == 2) {
            buttonHelpSetText(partyHelpText(0), HELP_TEXT_COLOR);
        }
        if (panel->screen == 3) {
            buttonHelpSetText(partyHelpText(1), HELP_TEXT_COLOR);
        }
        if (panel->screen == 17) {
            buttonHelpSetText(partyHelpText(9), HELP_TEXT_COLOR);
        }
        if (panel->screen == 19) {
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
        if (panel->mode == 1) {
            if (record->demonId == 0x29D || record->demonId == 0x29E || record->demonId == 0x317) {
                FUN_0032d0c8(0, 11, (u16)selected, record);
                return;
            }
        }
        FUN_0032d0c8(0, 1, (u16)selected, record);
    }
}

} /* extern "C" */
