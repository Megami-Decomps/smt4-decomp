/* NON_MATCHING: the remaining differences are branch layout and register allocation of the state selection (the two `mov r0, #0` stub calls use FUN_00284dbc as the nearest equivalent stub). */
#include "common.h"

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

/* A quest record: its kind byte at 6. */
typedef struct QuestRecord {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u8 kind;
} QuestRecord;

extern QuestScreen *g_uiQuest;

s32 resourceRunOperationIfUnblocked(void *list);
s32 FUN_002a4894(void *list);
s32 partyEntryFlagsBit1(u32 id);
s32 partyEntryFlagsBit3(u32 id);
s32 partyEntryBitsBit4(u32 id);
u32 questHasSpecialDetailPage(u32 id);
u32 FUN_004186e0(void);
QuestRecord *FUN_001ad9b4(u32 id);
s32 FUN_003de75c(u32 id);
s32 FUN_00284dbc(u32 id); /* a `mov r0, #0` stub armlink inlines */
void *dataTableGet(u32 table, u32 section);
void *dataTableGetEntries(void *section);
u32 dataTableGetCount(void *section);
void FUN_0019de98(const char *text, u32 color);

/* Picks the description line (an entry of table 0x34) for the selected quest or party entry and
 * shows it: the state depends on the entry's flags, bits and kind. */
void FUN_003d474c(void)
{
    QuestScreen *screen = g_uiQuest;
    u32 id;
    u32 state;

    if (screen->mode != 0) {
        s32 operation = resourceRunOperationIfUnblocked(screen->entryList);
        id = screen->entryIds[FUN_002a4894(screen->entryList) + operation];
    } else {
        s32 operation = resourceRunOperationIfUnblocked(screen->questList);
        id = ((QuestScreenView *)screen)->questIds[FUN_002a4894(screen->questList) + operation];
    }
    if (id == 0) {
        return;
    }
    if (screen->mode != 0) {
        if (partyEntryFlagsBit1(id) != 0) {
            state = FUN_004186e0() == 0 ? 0 : 6;
        } else {
            state = partyEntryFlagsBit3(id) != 0 ? 3 : 6;
        }
    } else {
        QuestRecord *record = FUN_001ad9b4(id);

        if (record->kind == 6 || record->kind == 9 || record->kind == 11) {
            if (FUN_003de75c(id) == 0 && FUN_00284dbc(id) == 0) {
                if (partyEntryFlagsBit3(id) == 0) {
                    state = 5;
                } else if (partyEntryBitsBit4(id) != 0) {
                    state = 3;
                } else if (questHasSpecialDetailPage(id) != 0) {
                    state = 10;
                } else {
                    state = 3;
                }
            } else if (FUN_004186e0() == id) {
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

    FUN_0019de98(line, 0xF4F4F4FF);
}

}
