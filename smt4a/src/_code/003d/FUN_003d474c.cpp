/* NON_MATCHING: the remaining differences are branch layout and register allocation of the state selection (the two `mov r0, #0` stub calls use FUN_00284dbc as the nearest equivalent stub). */
#include "common.h"
#include "quest_center/QuestRecordA.h"
#include "code/Code002a_VariantA.h"

extern "C" {

/* The quest screen's state block (only the fields this routine reads). */
typedef struct QuestScreen {
    /* 0x000 */ u8 unk000[0x90C];
    /* 0x90C */ u8 mode;               /* 0: quest list, else the party-entry list */
    /* 0x90D */ u8 unk90d[0x3B];
    /* 0x948 */ u8 entryList[0x64];
    /* 0x9AC */ u8 questList[0x64];
    /* 0xA10 */ u16 entryIds[0x6B];
    /* 0xAE6 */ u8 unkae6[0x8];
} QuestScreen;

typedef struct QuestScreenView {
    u8 unk0000[0xAD6];
    u16 questIds[1];
} QuestScreenView;

extern QuestScreen *g_uiQuest;

s32 resourceRunOperationIfUnblocked(void *list);
s32 partyEntryFlagsBit1(u32 id);
s32 partyEntryFlagsBit3(u32 id);
s32 partyEntryBitsBit4(u32 id);
u32 questHasSpecialDetailPage(u32 id);
u32 rosterGetLeaderId(void);
s32 questRecordIsUsable(u32 id);
s32 FUN_00284dbc(u32 id); /* a `mov r0, #0` stub armlink inlines */
void *dataTableGet(u32 table, u32 section);
void *dataTableGetEntries(void *section);
u32 dataTableGetCount(void *section);
void buttonHelpSetText(const char *text, u32 color);

/* Picks the description line (an entry of table 0x34) for the selected quest or party entry and
 * shows it: the state depends on the entry's flags, bits and kind. */
void FUN_003d474c(void)
{
    QuestScreen *screen = g_uiQuest;
    u32 id;
    u32 state;

    if (screen->mode != 0) {
        s32 operation = resourceRunOperationIfUnblocked(screen->entryList);
        id = screen->entryIds[listCursorGetRowIfUnblocked(screen->entryList) + operation];
    } else {
        s32 operation = resourceRunOperationIfUnblocked(screen->questList);
        id = ((QuestScreenView *)screen)->questIds[listCursorGetRowIfUnblocked(screen->questList) + operation];
    }
    if (id == 0) {
        return;
    }
    if (screen->mode != 0) {
        if (partyEntryFlagsBit1(id) != 0) {
            state = rosterGetLeaderId() == 0 ? 0 : 6;
        } else {
            state = partyEntryFlagsBit3(id) != 0 ? 3 : 6;
        }
    } else {
        QuestRecordA *record = questDataGetRecord(id);

        if (record->kind == 6 || record->kind == 9 || record->kind == 11) {
            if (questRecordIsUsable(id) == 0 && FUN_00284dbc(id) == 0) {
                if (partyEntryFlagsBit3(id) == 0) {
                    state = 5;
                } else if (partyEntryBitsBit4(id) != 0) {
                    state = 3;
                } else if (questHasSpecialDetailPage(id) != 0) {
                    state = 10;
                } else {
                    state = 3;
                }
            } else if (rosterGetLeaderId() == id) {
                state = 0;
            } else if (partyEntryFlagsBit3(id) != 0) {
                state = 2;
            } else {
                state = record->kind == 11 ? 12 : 11;
            }
        } else if (partyEntryFlagsBit3(id) == 0) {
            state = 0;
        } else if (FUN_00284dbc(id) != 0) {
            state = 4;
        } else if (partyEntryBitsBit4(id) != 0) {
            state = 3;
        } else if (questHasSpecialDetailPage(id) != 0) {
            state = 10;
        } else {
            state = 3;
        }
    }
    void *table = dataTableGet(0x34, 0);
    u8 *entries = (u8 *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    const char *line = state < count ? (const char *)(entries + state * 0x60 + 1) : NULL;

    buttonHelpSetText(line, 0xF4F4F4FF);
}

}
