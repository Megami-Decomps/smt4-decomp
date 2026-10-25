/* NON_MATCHING: retail loads the large save-data offsets (0x21D90, 0x3DEE/F, 0x45B2, 0x2C50, 0x5448) with a literal-pool index and register-offset ldr, stores word50/word54 with one stm, and selects the party slot ids with early-exit branches; this build folds the offsets with add and uses conditional execution. */
#include "common.h"
#include "gamedata/GameData.h"

/* A party slot of the save data: only its id (at 0xCE) is read. */
struct SummarySlot {
    /* 0x000 */ u8 unk000[0xCE];
    /* 0x0CE */ u16 id;
    /* 0x0D0 */ u8 unk0D0[0x12C - 0xD0];
};

/* The save data the summary is read from; several members are only halfword-aligned. */
__packed struct SummarySource {
    /* 0x0000 */ u16 version;
    /* 0x0002 */ u8 mode;
    /* 0x0003 */ u8 unk0003[5];
    /* 0x0008 */ u32 word08;
    /* 0x000C */ u32 word0C;
    /* 0x0010 */ u32 word10;
    /* 0x0014 */ u16 half14;
    /* 0x0016 */ u32 word16;
    /* 0x001A */ u32 word1A;
    /* 0x001E */ u32 word1E;
    /* 0x0022 */ u16 half22;
    /* 0x0024 */ u8 name[0xE];
    /* 0x0032 */ u16 half32;
    /* 0x0034 */ u16 half34;
    /* 0x0036 */ u8 unk0036[2];
    /* 0x0038 */ u32 word38;
    /* 0x003C */ u8 unk003C[0x18];
    /* 0x0054 */ u8 header[0x12];
    /* 0x0066 */ u8 unk0066[4];
    /* 0x006A */ u16 half6A;
    /* 0x006C */ u8 unk006C[0x1C38];
    /* 0x1CA4 */ s8 partyIndex[3];
    /* 0x1CA7 */ u8 unk1CA7[0x2C50 - 0x1CA7];
    /* 0x2C50 */ u16 half2C50;
    /* 0x2C52 */ u8 unk2C52[0x3DED - 0x2C52];
    /* 0x3DED */ u8 kindByte;
    /* 0x3DEE */ u8 valueByte;
    /* 0x3DEF */ u8 overrideByte;
    /* 0x3DF0 */ u8 unk3DF0[0x45B2 - 0x3DF0];
    /* 0x45B2 */ s8 extra;
    /* 0x45B3 */ u8 unk45B3[0x21D90 - 0x45B3];
    /* 0x21D90 */ u32 word21D90;
};

/* The 0x80-byte save summary kept at the start of the save block. */
__packed struct SaveSummary {
    /* 0x00 */ u8 header[0x10];
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11;
    /* 0x12 */ u32 word12;
    /* 0x16 */ u32 word16;
    /* 0x1A */ u32 word1A;
    /* 0x1E */ u16 half1E;
    /* 0x20 */ u32 word20;
    /* 0x24 */ u16 half24;
    /* 0x26 */ u16 half26;
    /* 0x28 */ u8 unk28[8];
    /* 0x30 */ u8 name[0xE];
    /* 0x3E */ u32 word3E;
    /* 0x42 */ u32 word42;
    /* 0x46 */ u32 word46;
    /* 0x4A */ u16 half4A;
    /* 0x4C */ u8 unk4C;
    /* 0x4D */ u8 flags;
    /* 0x4E */ u16 version;
    /* 0x50 */ u32 word50;
    /* 0x54 */ u32 word54;
    /* 0x58 */ u16 kind;
    /* 0x5A */ u16 value;
    /* 0x5C */ u16 slotA;
    /* 0x5E */ u16 slotB;
    /* 0x60 */ u16 slotC;
    /* 0x62 */ u8 mode;
    /* 0x63 */ u8 tableFlag;
    /* 0x64 */ u16 half64;
    /* 0x66 */ u16 half66;
    /* 0x68 */ u16 half68;
    /* 0x6A */ u8 byte6A;
    /* 0x6B */ u8 byte6B;
    /* 0x6C */ u32 word6C;
    /* 0x70 */ u8 unk70[0x10];
};

/* The save block: the summary in front, its saved copy at 0x270CC. */
struct SaveBlockView {
    /* 0x00000 */ SaveSummary summary;
    /* 0x00080 */ u8 unk00080[0x5448 - 0x80];
    /* 0x05448 */ u32 word5448;
    /* 0x0544C */ u8 unk0544C[0x270CC - 0x544C];
    /* 0x270CC */ u8 savedSummary[0x80];
    /* 0x2714C */ u8 unk2714C[0x27EC4 - 0x2714C];
    /* 0x27EC4 */ u8 tableFlag;
};

extern "C" {
extern GameDataBlocksA g_gameDataBlocks;

void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
bool gameFlagIsSet(u32 index);
s32 FUN_00371f3c(void);
u32 gameFlagsClassify(s32 id);

/* Fills the save summary from the save data and copies it to its saved slot. */
void FUN_002299b0(SummarySource *source)
{
    SaveSummary *summary = &((SaveBlockView *)g_gameDataBlocks.saveBlock)->summary;
    summary->version = source->version;
    __aeabi_memcpy4(summary, source->header, 0x12);
    summary->unk10 = 0;
    summary->word12 = source->word08;
    summary->word16 = source->word0C;
    summary->word1A = source->word10;
    summary->half1E = source->half14;
    summary->word20 = source->word38;
    summary->half24 = source->half32;
    summary->half26 = source->half34;
    __aeabi_memcpy4(summary->name, source->name, 0xE);
    summary->word3E = source->word16;
    summary->word42 = source->word1A;
    summary->word46 = source->word1E;
    summary->half4A = source->half22;
    summary->half64 = source->half6A;
    summary->flags = 0;
    if (gameFlagIsSet(0x603)) {
        summary->flags |= 1;
    }
    if (gameFlagIsSet(0x604)) {
        summary->flags |= 2;
    }
    if (gameFlagIsSet(0x605)) {
        summary->flags |= 4;
    }
    if (gameFlagIsSet(0x606)) {
        summary->flags |= 8;
    }
    summary->word50 = source->word21D90;
    summary->word54 = 0;
    summary->kind = source->kindByte;
    summary->value = source->valueByte;
    if (gameFlagsClassify(source->kindByte) == 3) {
        summary->kind = 1000;
    }
    u8 override = source->overrideByte;
    if (override == 0) {
        if (summary->kind == 0x18) {
            if (source->extra != 0) {
                if (summary->value < 100) {
                    summary->kind = source->extra + 1000;
                }
            } else {
                summary->value = override;
            }
        }
    } else {
        summary->value = override;
    }
    summary->tableFlag = ((SaveBlockView *)g_gameDataBlocks.saveBlock)->tableFlag;
    if (gameFlagIsSet(0x410)) {
        summary->unk4C = 1;
    } else {
        summary->unk4C = 0;
    }
    if (summary->flags == 0) {
        summary->half66 = 0;
    }
    summary->mode = source->mode;
    if (source->mode != 2) {
        summary->slotA = source->partyIndex[0] < 0 ? 0 : ((SummarySlot *)source)[source->partyIndex[0]].id;
        summary->slotB = source->partyIndex[1] < 0 ? 0 : ((SummarySlot *)source)[source->partyIndex[1]].id;
        summary->slotC = source->partyIndex[2] < 0 ? 0 : ((SummarySlot *)source)[source->partyIndex[2]].id;
    } else {
        summary->slotA = 0;
        summary->slotB = 0;
        summary->slotC = 0;
    }
    summary->half68 = source->half2C50;
    summary->byte6A = FUN_00371f3c();
    if (gameFlagIsSet(0x11)) {
        summary->byte6B = 1;
    } else {
        summary->byte6B = 0;
    }
    summary->word6C = ((SaveBlockView *)g_gameDataBlocks.saveBlock)->word5448;
    __aeabi_memcpy4(((SaveBlockView *)g_gameDataBlocks.saveBlock)->savedSummary, summary, 0x80);
}
}
