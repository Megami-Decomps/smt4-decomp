#include "common.h"

extern "C" {

/* Summary record built for the save screen. */
typedef struct SaveSummary {
    /* 0x00 */ u8 nameA[0x0e];
    /* 0x0e */ u8 nameB[0x12];
    /* 0x20 */ u8 flagByte;
    /* 0x21 */ u8 unk21;
    /* 0x22 */ u8 unk22;
    /* 0x23 */ u8 unk23;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 word28;
    /* 0x2c */ u8 unk2c[4];
    /* 0x30 */ u32 word30;
    /* 0x34 */ u16 unk34;
    /* 0x36 */ u16 value36;
    /* 0x38 */ u16 value38;
    /* 0x3a */ u16 value3a;
    /* 0x3c */ u16 partyValues[3];
    /* 0x42 */ u8 unk42;
    /* 0x43 */ u8 unk43;
    /* 0x44 */ u16 value44;
    /* 0x46 */ u8 unk46[10];
    /* 0x50 */ u8 copy50[0x10];
    /* 0x60 */ u16 id60;
    /* 0x62 */ u16 value62;
} SaveSummary;

typedef struct SlotTable {
    /* 0x0000 */ u8 unk0000[4];
    /* 0x0004 */ u8 nameA[0x4c];
    /* 0x0050 */ u8 nameB[0x16];
    /* 0x0066 */ u16 value66;
    /* 0x0068 */ u8 unk0068[0x2be4];
    /* 0x2c4c */ u16 value2c4c;
} SlotTable;

typedef struct SaveSlot {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 value62;
    /* 0x64 */ u16 value64;
} SaveSlot;

typedef struct SaveData {
    /* 0x00000 */ u8 unk00000[0x21d90];
    /* 0x21d90 */ u32 word21d90;
} SaveData;

typedef struct SummarySource {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u16 value06;
    /* 0x08 */ u8 unk08[0x38];
    /* 0x40 */ u8 data40[1];
} SummarySource;

void FUN_002e59f8(void *first, void *second, s32 size);   /* copies `size` bytes between the two buffers */
SummarySource *FUN_00184310(s32 id);
SaveSlot *gameGetSaveSlotData(s32 index);
u8 gameDataBlocksGetFlagByte(void);
SaveData *gameDataBlocksGetSaveData(void);
u32 gameDataBlocksGetWord27E90(void);
void gameDataBlocksSetFlagBits(s32 bits, s32 value);
s32 gameFlagIsSet(u32 flag);
SlotTable *gameGetSlotTable(void);
SaveSlot *saveSlotFindSelected(void);

/* Fills the save summary from the slot table, the save data, the selected save slot and the party. */
void saveBuildSummary(SaveSummary *summary)
{
    SlotTable *table = gameGetSlotTable();
    SaveSlot *slot;
    SummarySource *source;
    s32 i;

    FUN_002e59f8(table->nameA, summary->nameA, 0xe);
    FUN_002e59f8(table->nameB, summary->nameB, 0x12);
    summary->value36 = table->value66;
    summary->word28 = gameDataBlocksGetSaveData()->word21d90;
    summary->unk24 = 0;
    summary->flagByte = gameDataBlocksGetFlagByte();
    gameDataBlocksSetFlagBits(0x10, 1);
    if (gameFlagIsSet(0x581) != 0) {
        gameDataBlocksSetFlagBits(4, 1);
    }
    summary->unk21 = 0;
    summary->word30 = gameDataBlocksGetWord27E90();
    summary->unk22 = 0;
    summary->unk23 = 0;
    summary->value38 = table->value2c4c;
    slot = saveSlotFindSelected();
    if (slot == NULL) {
        summary->value44 = 0;
        summary->value3a = 0;
    } else {
        summary->value44 = slot->value62;
        summary->value3a = slot->value64;
    }
    summary->unk42 = 0;
    for (i = 0; i < 3; i++) {
        slot = gameGetSaveSlotData(i);
        if (slot != NULL) {
            summary->partyValues[i] = slot->value62;
        } else {
            summary->partyValues[i] = 0;
        }
    }
    summary->unk34 = 0;
    summary->id60 = 0x218;
    source = FUN_00184310(0x218);
    summary->value62 = source->value06;
    FUN_002e59f8(source->data40, summary->copy50, 0x10);
}

} /* extern "C" */
