/* NON_MATCHING: Retail forms the list address in r0 and copies it to r6; armcc forms it in r6 and copies it to r0. */
#include "ui/ButtonHelp.h"
#include "common.h"
#include "quest_center/QuestRecordA.h"
#include "game/GameStateA.h"
#include "shard/Shard0031.h"
#include "code/Code002a_VariantA.h"

/* The quest screen's list area begins 0x800 bytes into the work. */
struct QuestUiLower {
    u8 unk000[0x10c];
    u8 detailView;
    u8 unk10D[3];
    s32 column;
    u8 unk114[4];
    s32 page;
    u8 unk11C[0x90];
    u8 list[0x12A];
    u16 ids[1];
};

struct QuestUi {
    u8 unk000[0x800];
    QuestUiLower lower;
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
s32 resourceRunOperationIfUnblocked(void *list);
s32 partyEntryFlagsBit3(u32 id);
u32 rosterGetLeaderId(void);

/* Plays the cursor sound for the quest screen's current page/column and sets up the help buttons for the
 * selected entry. */
void FUN_0023ff10(void)
{
    QuestUi *ui = g_uiQuest;
    QuestUiFlags *flags = (QuestUiFlags *)((u8 *)ui + 0x900);
    u32 id;
    QuestRecordA *record;

    if (ui->lower.detailView != 0) {
        if (g_gameState.alternateNaviMap != 0) {
            if (ui->lower.page == 1) {
                sysPlaySe(0x10E);
            }
            if (ui->lower.page == 2) {
                if (ui->lower.column == 0) {
                    sysPlaySe(0x10F);
                }
                if (ui->lower.column == 1) {
                    sysPlaySe(0x110);
                    return;
                }
            }
        } else {
            if (ui->lower.page == 1) {
                sysPlaySe(0x6E);
            }
            if (ui->lower.page == 2) {
                if (ui->lower.column == 0) {
                    sysPlaySe(0x6F);
                }
                if (ui->lower.column == 1) {
                    sysPlaySe(0x70);
                    return;
                }
            }
        }
        return;
    }
    if (ui->lower.page == 1) {
        sysPlaySe(0x71);
    }
    if (ui->lower.page == 2) {
        if (flags->altRow != 0) {
            if (ui->lower.column == 0) {
                sysPlaySe(0xF7);
            }
            if (ui->lower.column == 1) {
                sysPlaySe(0xF8);
            }
        } else {
            if (ui->lower.column == 0) {
                sysPlaySe(0x72);
            }
            if (ui->lower.column == 1) {
                sysPlaySe(0x73);
            }
        }
    }
    if (ui->lower.page == 3) {
        if (ui->lower.column == 0) {
            sysPlaySe(0x74);
        }
        if (ui->lower.column == 1) {
            sysPlaySe(0x75);
        }
        if (ui->lower.column == 2) {
            sysPlaySe(0x76);
        }
    }
    void *list = ui->lower.list;

    s32 pageOffset = resourceRunOperationIfUnblocked(list);
    s32 row = listCursorGetRowIfUnblocked(reinterpret_cast<const Object *>(list));
    id = ui->lower.ids[pageOffset + row];
    record = questDataGetRecord(id);
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
