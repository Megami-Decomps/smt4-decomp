#include "common.h"
#include <stdio.h>
#include "battle/BtlUiGlobal.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/SaveLoadProcess.h"

#include "code/Code0020.h"
#include "code/Code0029_VariantB.h"
/* A support unit's table entry; its type sits in bits 17-21 of the flag word at 8. */
struct SupportUnitEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 low : 17;
    /* 0x08 */ u32 type : 5;
    /* 0x08 */ u32 high : 10;
};

extern "C" {

s32 resourceRunOperationIfUnblocked(const u8 *object);
s32 gameGetSupportUnitData(void);
SupportUnitEntry *supportUnitGetEntry(s32 kind, u32 index);
s32 devilGetCategoryTableId(s32 devilId);
s32 mapGetSelectedRecordCategoryTable();
u32 playerGetMappedCategory();
u32 gameGetSelectedSupportUnitTableId(void);
u32 aocIndexValueOrDefault(u32 index);
u32 dataFindKindRecordWithAocOverrides(u32 value, s32 mode);
void FUN_002cd750(s16 value);
void communicationSetResultPointer(void);
void communicationBeginTransition(s32 mode);

/* Opens the battle command window for command `kind`, formatting its label text. */
void FUN_00227334(u32 unused, u32 kind, s32 value, s32 isSupport, s32 devilId, s32 isSummon)
{
    BtlUi *ui = g_btlUi.ui;
    ui->objD.commandWindow.active = 1;
    ui->objD.commandWindow.kind = kind;
    ui->objD.commandWindow.value = value;
    ui->objD.commandWindow.timer = 0x28;
    ui->objD.commandWindow.unk4B20 = 0;
    char label[0x44];
    label[0] = 0;
    s32 tableId = 0;
    switch (ui->objD.commandWindow.kind) {
    case 1:
        if (isSupport != 0) {
            u8 *selection = ui->objC.supportSelection.cursor;
            s32 count = resourceRunOperationIfUnblocked(selection) + listCursorGetRowIfUnblocked(selection);
            if (count == 0) {
                sprintf(label, "Attack");
                tableId = playerGetMappedCategory();
            } else if (count == 1) {
                sprintf(label, "Shoot");
                tableId = mapGetSelectedRecordCategoryTable();
            }
        } else if (isSummon != 0) {
            u16 index = *(u16 *)(gameGetSupportUnitData() + 0x606);
            SupportUnitEntry *entry = supportUnitGetEntry(*(s16 *)(gameGetSupportUnitData() + 0x604), index);
            if (entry->type != 1) {
                sprintf(label, "Attack");
            } else {
                sprintf(label, "Shoot");
            }
            tableId = gameGetSelectedSupportUnitTableId();
        } else {
            if (nkmBaseGetRecord(devilId)->element != 1) {
                sprintf(label, "Attack");
            } else {
                sprintf(label, "Shoot");
            }
            tableId = devilGetCategoryTableId(devilId);
        }
        FUN_002cd750(tableId);
        break;
    case 2:
    case 3:
        sprintf(label, "%s", aocIndexValueOrDefault(ui->objD.commandWindow.value));
        FUN_00211868(ui->objD.commandWindow.value, isSupport != 0);
        break;
    case 8:
        sprintf(label, "%s", dataFindKindRecordWithAocOverrides(ui->objD.commandWindow.value, 0));
        FUN_002009c4(ui->objD.commandWindow.value);
        break;
    case 9:
    case 10:
    case 12:
        if (value == 0) {
            sprintf(label, "Summon");
        } else {
            sprintf(label, "Return");
        }
        communicationSetResultPointer();
        break;
    case 11:
        sprintf(label, "Run");
        communicationSetResultPointer();
        break;
    }
    comWinSetText((const u8 *)label);
    communicationBeginTransition(0);
}
}
