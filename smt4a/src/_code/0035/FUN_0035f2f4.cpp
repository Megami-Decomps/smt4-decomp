/* NON_MATCHING: restored signed side index and selected-record reset argument; battle-mask loads and count-argument stack marshalling still differ. */
#include "common.h"

struct BattleSide {
    u64 flags;              // 0x000
    s16 unitIndex;          // 0x008
    u8 unk0a[2];
    u8 unk0c[0x25c - 0x0c];
    u32 spriteA;            // 0x25c
    u8 unk260[4];
    u32 spriteB;            // 0x264
    u8 unk268[0x408 - 0x268];
};

struct BattleMain {
    u8 unk0000[0x12c];
    s32 effectCount;        // 0x12c
    u8 unk130[0x1ed4 - 0x130];
    u8* units;              // 0x1ed4 (0x1d0 bytes each)
    u8 unk1ed8[0x1ffc - 0x1ed8];
    BattleSide* sides;      // 0x1ffc
};

struct SlotTable {
    u8 unk0000[0x68];
    u8 records[1];          // 0x68: 300 bytes each
};

extern "C" {

struct BattleMaskPresets {
    u64 present;            // 0x00: sides that take part
    u8 unk08[0x10];
    u64 excluded;           // 0x18: sides left out
};
extern BattleMaskPresets g_battleMaskPresets;

BattleMain* btlGetMainState(void);
s32 FUN_003e0154(void);
s32 FUN_003e0164(void);
void FUN_004fb798(s32 a, s32 b, s32 c, u8* unit, s32 d, u32 e, u32 f, s32 g, u32 mask, s32 h, s32 i, s32 j, s32 k, s32 l, s32 m);
s32 gameDataBlocksGetTableFlag(void);
s32 gameDataFlagTestBit(u32 bit);
u8* gameGetSlotTable(void);
s32 bitsAt60Test(u8* record, u32 bit);
void bitsAt60Set(u8* record, u32 bit);
void FUN_004bcb54(u8* record);
void* saveSlotFindSelected(void);
void saveSlotApplySelected(BattleMain* battle);
void btlClearMode4D74(BattleMain* battle);
void btlEffectsRelease(BattleMain* battle);

// Refreshes the battle unit visuals after a state change and re-normalises the party records.
u32 FUN_0035f2f4(void)
{
    BattleMain* battle = btlGetMainState();
    s32 first = FUN_003e0154();
    s32 second = FUN_003e0164();
    FUN_004fb798(0, 0, 0, *reinterpret_cast<u8**>(reinterpret_cast<u8*>(battle) + 0x1ed4), 0, first, second, -1, 2, 0, 0, 9, 0, 0, 1);

    s32 tableFlag = gameDataBlocksGetTableFlag();
    if (tableFlag == 4 || gameDataFlagTestBit(0x80) != 0) {
        for (s32 i = 1; i < 4; i++) {
            BattleSide* side = &battle->sides[i];
            if ((g_battleMaskPresets.present & side->flags) != 0 && (side->flags & g_battleMaskPresets.excluded) == 0) {
                u32 mask = 0;
                for (s32 bit = 0; bit < 13; bit++) {
                    if (bit == 1 || bit == 3) continue;
                    mask |= 1 << (bit + 1);
                }
                FUN_004fb798(0, 0, 0, battle->units + (s16)side->unitIndex * 0x1d0, 0, side->spriteA, side->spriteB, -1, mask, 0, 0, 9, 0, 0, 1);
            }
        }
    }

    u8* table = gameGetSlotTable();
    s8 hadFlag[4] = { 0, 0, 0, 0 };
    for (s32 i = 0; i < 3; i++) {
        s32 record = static_cast<s8>(table[i + 0x1ca0]);
        if (record >= 0) hadFlag[i] = bitsAt60Test(table + record * 300 + 0x68, 4);
    }
    for (s32 i = 0; i < 0x18; i++) {
        u8* record = table + i * 300 + 0x68;
        s32 marked = bitsAt60Test(record, 2);
        FUN_004bcb54(record);
        if (marked != 0) bitsAt60Set(record, 2);
    }
    for (s32 i = 0; i < 3; i++) {
        s32 record = static_cast<s8>(table[i + 0x1ca0]);
        if (record >= 0 && hadFlag[i] != 0) bitsAt60Set(table + record * 300 + 0x68, 4);
    }
    u8 *selected = static_cast<u8 *>(saveSlotFindSelected());
    if (selected != NULL) {
        FUN_004bcb54(selected);
        saveSlotApplySelected(battle);
        btlClearMode4D74(battle);
    }
    if (battle->effectCount > 0) btlEffectsRelease(battle);
    return 1;
}

} /* extern "C" */
