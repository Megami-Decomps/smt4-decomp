/* NON_MATCHING: the list sub-object comes from the one-instruction accessor questUiGetList (inlined by armlink, config/inlined.txt) and is passed to resourceRunOperationIfUnblocked; the remaining differences are armcc keeping the list in r7 and the offset in r6 (retail the reverse) plus a nop armcc emits before that call (151 rows against 150). */
#include "common.h"
#include "quest_center/QuestRecordA.h"
#include "game/GameStateA.h"
#include "shard/Shard0031.h"
#include "code/Code002a_VariantA.h"

/* The quest screen's state (observed fields). */
struct QuestUiLower {
    /* 0x000 */ u8 unk000[0x10C];
};

struct QuestUi {
    /* 0x000 */ u8 unk000[0x800];
    /* 0x800 */ QuestUiLower lower;
    /* 0x90C */ u8 detailView;
    /* 0x90D */ u8 unk90D[3];
    /* 0x910 */ s32 column;
    /* 0x914 */ u8 unk914[4];
    /* 0x918 */ s32 page;
    /* 0x91C */ u8 unk91C[0x21];
    /* 0x93D */ u8 unk93D;
    /* 0x93E */ u8 unk93E[6];
    /* 0x944 */ u8 unk944;
    /* 0x945 */ u8 unk945[0x67];
    /* 0x9AC */ u8 list[0x12A];
    /* 0xAD6 */ u16 ids[1];
};

/* The part of the quest screen state from 0x900 on that holds the lock flags. */
struct QuestUiFlags {
    /* 0x00 */ u8 unk00[0x3D];
    /* 0x3D */ u8 locked;
    /* 0x3E */ u8 unk3E[6];
    /* 0x44 */ u8 altRow;
};

extern "C" {

extern QuestUi *g_uiQuest;

void sysPlaySe(u32 id);
void buttonHelpSelectSlot(s32 a, s32 b, s32 c, s32 d);
s32 resourceRunOperationIfUnblocked(void *list);
void *questUiGetList(QuestUiLower *lower);
s32 partyEntryFlagsBit3(u32 id);
u32 rosterGetLeaderId(void);

/* Plays the cursor sound for the quest screen's current page/column and sets up the help buttons for the
 * selected entry. */
void FUN_0023ff10(void)
{
    QuestUi *ui = g_uiQuest;
    QuestUiFlags *flags = (QuestUiFlags *)((u8 *)ui + 0x900);
    u32 id;
    s32 pageOffset;
    s32 row;
    QuestRecordA *record;

    if (ui->detailView != 0) {
        if (g_gameState.alternateNaviMap != 0) {
            if (ui->page == 1) {
                sysPlaySe(0x10E);
            }
            if (ui->page == 2) {
                if (ui->column == 0) {
                    sysPlaySe(0x10F);
                }
                if (ui->column == 1) {
                    sysPlaySe(0x110);
                    return;
                }
            }
        } else {
            if (ui->page == 1) {
                sysPlaySe(0x6E);
            }
            if (ui->page == 2) {
                if (ui->column == 0) {
                    sysPlaySe(0x6F);
                }
                if (ui->column == 1) {
                    sysPlaySe(0x70);
                    return;
                }
            }
        }
        return;
    }
    if (ui->page == 1) {
        sysPlaySe(0x71);
    }
    if (ui->page == 2) {
        if (flags->altRow != 0) {
            if (ui->column == 0) {
                sysPlaySe(0xF7);
            }
            if (ui->column == 1) {
                sysPlaySe(0xF8);
            }
        } else {
            if (ui->column == 0) {
                sysPlaySe(0x72);
            }
            if (ui->column == 1) {
                sysPlaySe(0x73);
            }
        }
    }
    if (ui->page == 3) {
        if (ui->column == 0) {
            sysPlaySe(0x74);
        }
        if (ui->column == 1) {
            sysPlaySe(0x75);
        }
        if (ui->column == 2) {
            sysPlaySe(0x76);
        }
    }
    void *list = questUiGetList(&ui->lower);

    pageOffset = resourceRunOperationIfUnblocked(list);
    row = listCursorGetRowIfUnblocked(reinterpret_cast<const Object *>(list));
    id = ui->ids[pageOffset + row];
    record = dataTable1bOr1cGetRecord(id);
    if (flags->locked != 0) {
        buttonHelpSelectSlot(5, 1, 0x32, 1);
        buttonHelpSelectSlot(2, 0x12, 0, 1);
    } else {
        if (record != NULL && (record->kind == 6 || record->kind == 9 || record->kind == 11)) {
            s32 hasBit = partyEntryFlagsBit3(id);
            u8 kind = 0;

            if (hasBit != 0) {
                kind = record->kind;
            }
            if ((hasBit == 0 || kind == 9) && rosterGetLeaderId() != id) {
                buttonHelpSelectSlot(5, 1, 0x31, 1);
                buttonHelpSelectSlot(2, 0x12, 0, 1);
                return;
            }
        }
        buttonHelpSelectSlot(5, 0x12, 0, 1);
    }
    buttonHelpSelectSlot(2, 0x12, 0, 1);
}

} /* extern "C" */
