/* NON_MATCHING: written in the shape of IV's saveBuildSlotSummary; only the tail differs: retail keeps the reloaded save block in r1 (the 0x5448 word read into r0) and forms the 0x270CC copy destination from it after the store, this build swaps the two registers. */
#include "common.h"
#include <stddef.h>
#include "gamedata/GameData.h"

/* The word-aligned save-slot summary contains two packed three-word groups. */
struct SaveSummaryA {
    u8 unk00[0x10];
    u8 unk10;
    u8 unk11;
    __packed u32 words12[3]; // 0x12
    u16 unk1E;
    u32 unk20;
    u16 unk24;
    u16 unk26;
    u8 unk28[8];
    u8 name30[0xE];     // 0x30
    __packed u32 words3E[3]; // 0x3E
    u16 unk4A;
    u8 unk4C;
    u8 flagBits;        // 0x4D: progress flags
    u16 slotId;         // 0x4E
    u32 unk50;
    u32 unk54;
    u16 unk58;
    u16 unk5A;
    u16 partyIds[3];    // 0x5C
    u8 unk62;
    u8 unk63;
    u16 unk64;
    u16 unk66;
    u16 unk68;
    u8 unk6A;
    u8 unk6B;
    u32 unk6C;
    u8 unk70[0x10];
};
typedef char SaveSummaryALayoutCheck[
    offsetof(SaveSummaryA, words12) == 0x12 &&
    offsetof(SaveSummaryA, words3E) == 0x3e &&
    offsetof(SaveSummaryA, unk50) == 0x50 &&
    offsetof(SaveSummaryA, unk64) == 0x64 &&
    offsetof(SaveSummaryA, unk6C) == 0x6C &&
    sizeof(SaveSummaryA) == 0x80 ? 1 : -1];

extern "C" {
extern GameDataBlocksA g_gameDataBlocks;

void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
bool gameFlagIsSet(u32 index);
s32 mapFindEligibleGroupIndex(void);
u32 gameFlagsClassify(s32 id);

/* Build the save-slot summary record from a save image and store it in the game data block (IV: saveBuildSlotSummary). */
void FUN_002299b0(u16 *save)
{
    SaveSummaryA *summary = reinterpret_cast<SaveSummaryA *>(g_gameDataBlocks.saveBlock);
    summary->slotId = save[0];
    __aeabi_memcpy4(summary, save + 0x2A, 0x12);
    summary->unk10 = 0;
    summary->words12[0] = *reinterpret_cast<u32 *>(save + 4);
    summary->words12[1] = *reinterpret_cast<u32 *>(save + 6);
    summary->words12[2] = *reinterpret_cast<u32 *>(save + 8);
    summary->unk1E = save[10];
    summary->unk20 = *reinterpret_cast<u32 *>(save + 0x1C);
    summary->unk24 = save[0x19];
    summary->unk26 = save[0x1A];
    __aeabi_memcpy4(summary->name30, save + 0x12, 0xE);
    summary->words3E[0] = *reinterpret_cast<u32 *>(save + 0xB);
    summary->words3E[1] = *reinterpret_cast<u32 *>(save + 0xD);
    summary->words3E[2] = *reinterpret_cast<u32 *>(save + 0xF);
    summary->unk4A = save[0x11];
    summary->unk64 = save[0x35];
    summary->flagBits = 0;
    if (gameFlagIsSet(0x603))
        summary->flagBits |= 1;
    if (gameFlagIsSet(0x604))
        summary->flagBits |= 2;
    if (gameFlagIsSet(0x605))
        summary->flagBits |= 4;
    if (gameFlagIsSet(0x606))
        summary->flagBits |= 8;
    u8 *bytes = reinterpret_cast<u8 *>(save);
    summary->unk50 = *reinterpret_cast<u32 *>(save + 0x10EC8);
    summary->unk54 = 0;
    summary->unk58 = bytes[0x3DED];
    summary->unk5A = *reinterpret_cast<u8 *>(save + 0x1EF7);
    if (gameFlagsClassify(bytes[0x3DED]) == 3)
        summary->unk58 = 1000;
    if (bytes[0x3DEF] == 0) {
        if (summary->unk58 == 0x18) {
            if (*reinterpret_cast<s8 *>(save + 0x22D9) != 0) {
                if (summary->unk5A < 100)
                    summary->unk58 = *reinterpret_cast<s8 *>(save + 0x22D9) + 1000;
            } else {
                summary->unk5A = bytes[0x3DEF];
            }
        }
    } else {
        summary->unk5A = bytes[0x3DEF];
    }
    summary->unk63 = reinterpret_cast<u8 *>(g_gameDataBlocks.saveBlock)[0x27EC4];
    if (gameFlagIsSet(0x410))
        summary->unk4C = 1;
    else
        summary->unk4C = 0;
    if (summary->flagBits == 0)
        summary->unk66 = 0;
    summary->unk62 = *reinterpret_cast<u8 *>(save + 1);
    if (*reinterpret_cast<s8 *>(save + 1) == 2) {
        summary->partyIds[0] = 0;
        summary->partyIds[1] = 0;
        summary->partyIds[2] = 0;
    } else {
        s8 first = *reinterpret_cast<s8 *>(save + 0xE52);
        if (first < 0)
            summary->partyIds[0] = 0;
        else
            summary->partyIds[0] = save[first * 0x96 + 0x67];
        s8 second = *reinterpret_cast<s8 *>(bytes + 0x1CA5);
        if (second < 0)
            summary->partyIds[1] = 0;
        else
            summary->partyIds[1] = save[second * 0x96 + 0x67];
        s8 third = *reinterpret_cast<s8 *>(save + 0xE53);
        if (third < 0)
            summary->partyIds[2] = 0;
        else
            summary->partyIds[2] = save[third * 0x96 + 0x67];
    }
    summary->unk68 = save[0x1628];
    summary->unk6A = mapFindEligibleGroupIndex();
    if (gameFlagIsSet(0x11))
        summary->unk6B = 1;
    else
        summary->unk6B = 0;
    summary->unk6C = *reinterpret_cast<u32 *>(reinterpret_cast<u8 *>(g_gameDataBlocks.saveBlock) + 0x5448);
    *reinterpret_cast<SaveSummaryA *>(reinterpret_cast<u8 *>(g_gameDataBlocks.saveBlock) + 0x270CC) = *summary;
}
}
