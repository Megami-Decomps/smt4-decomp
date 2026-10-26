/* NON_MATCHING: only the prologue differs: retail loads g_btlUi and the work pointer before materialising the constants 1, 40 and 0 and loads the stack arguments after them, this build hoists the constants first. */
#include "common.h"
#include "gamedata/SaveLoadProcess.h"

#include "code/Code0020.h"
#include "code/Code0029_VariantB.h"
/* The battle command window's state, reached through g_btlUi. */
struct BtlCommandWindowWork {
    /* 0x0000 */ u8 unk0000[0x5678];
    /* 0x5678 */ u8 supportSelection[0x7360];
    /* 0xC9D8 */ u8 active;
    /* 0xC9D9 */ u8 unkC9D9[3];
    /* 0xC9DC */ s32 unkC9DC;
    /* 0xC9E0 */ s32 unkC9E0;
    /* 0xC9E4 */ u32 kind;
    /* 0xC9E8 */ u16 value;
};

struct BtlUi {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ BtlCommandWindowWork *work;
};

/* A support unit's table entry; its type sits in bits 17-21 of the flag word at 8. */
struct SupportUnitEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 low : 17;
    /* 0x08 */ u32 type : 5;
    /* 0x08 */ u32 high : 10;
};

struct DevilRecord {
    /* 0x00 */ u8 unk00[10];
    /* 0x0A */ u8 type;
};

extern "C" {
extern BtlUi g_btlUi;

s32 FUN_0029efc0(const u8 *object);
s32 gameGetSupportUnitData(void);
SupportUnitEntry *supportUnitGetEntry(s32 kind, u32 index);
DevilRecord *devilGetRecord(s32 id);
s32 devilGetCategoryTableId(s32 devilId);
s32 mapGetSelectedRecordCategoryTable();
u32 playerGetMappedCategory();
u32 gameGetSelectedSupportUnitTableId(void);
s32 textFormatBuffer(char *output, const char *format, ...);
u32 aocIndexValueOrDefault(u32 index);
u32 FUN_002be650(u32 value, s32 mode);
void FUN_002cd750(s16 value);
void communicationSetResultPointer(void);
void communicationBeginTransition(s32 mode);

/* Opens the battle command window for command `kind`, formatting its label text. */
void FUN_00227334(u32 unused, u32 kind, s32 value, s32 isSupport, s32 devilId, s32 isSummon)
{
    BtlCommandWindowWork *work = g_btlUi.work;
    work->active = 1;
    work->kind = kind;
    work->value = value;
    work->unkC9DC = 0x28;
    work->unkC9E0 = 0;
    char label[0x44];
    label[0] = 0;
    s32 tableId = 0;
    switch (work->kind) {
    case 1:
        if (isSupport != 0) {
            u8 *selection = work->supportSelection;
            s32 count = FUN_0029efc0(selection) + FUN_0029efa8(selection);
            if (count == 0) {
                textFormatBuffer(label, "Attack");
                tableId = playerGetMappedCategory();
            } else if (count == 1) {
                textFormatBuffer(label, "Shoot");
                tableId = mapGetSelectedRecordCategoryTable();
            }
        } else if (isSummon != 0) {
            u16 index = *(u16 *)(gameGetSupportUnitData() + 0x606);
            SupportUnitEntry *entry = supportUnitGetEntry(*(s16 *)(gameGetSupportUnitData() + 0x604), index);
            if (entry->type != 1) {
                textFormatBuffer(label, "Attack");
            } else {
                textFormatBuffer(label, "Shoot");
            }
            tableId = gameGetSelectedSupportUnitTableId();
        } else {
            if (devilGetRecord(devilId)->type != 1) {
                textFormatBuffer(label, "Attack");
            } else {
                textFormatBuffer(label, "Shoot");
            }
            tableId = devilGetCategoryTableId(devilId);
        }
        FUN_002cd750(tableId);
        break;
    case 2:
    case 3:
        textFormatBuffer(label, "%s", aocIndexValueOrDefault(work->value));
        FUN_00211868(work->value, isSupport != 0);
        break;
    case 8:
        textFormatBuffer(label, "%s", FUN_002be650(work->value, 0));
        FUN_002009c4(work->value);
        break;
    case 9:
    case 10:
    case 12:
        if (value == 0) {
            textFormatBuffer(label, "Summon");
        } else {
            textFormatBuffer(label, "Return");
        }
        communicationSetResultPointer();
        break;
    case 11:
        textFormatBuffer(label, "Run");
        communicationSetResultPointer();
        break;
    }
    comWinSetText((const u8 *)label);
    communicationBeginTransition(0);
}
}
