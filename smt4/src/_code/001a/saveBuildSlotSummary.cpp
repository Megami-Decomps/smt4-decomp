#include "common.h"
#include <stddef.h>

/* The word-aligned save-slot summary contains two packed three-word groups. */
struct SaveSummary {
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
    u8 flagBits;        // 0x4D: poison-style progress flags
    u16 slotId;         // 0x4E
    u32 unk50;
    u32 unk54;
    u16 unk58;
    u16 unk5A;
    u16 partyLevel[3];  // 0x5C
    u8 unk62;
    u8 unk63;
    u8 unk64;
    u8 unk65;
    u16 unk66;
    u8 unk68[0x18];
};
typedef char SaveSummaryLayoutCheck[
    offsetof(SaveSummary, words12) == 0x12 &&
    offsetof(SaveSummary, words3E) == 0x3e &&
    offsetof(SaveSummary, unk50) == 0x50 &&
    offsetof(SaveSummary, unk54) == 0x54 &&
    sizeof(SaveSummary) == 0x80 ? 1 : -1];

extern "C" {
extern u8 g_gameDataBlocks[];
void __aeabi_memcpy4(void *dest, const void *src, u32 size);
s32 FUN_00288f78(u8 value);
s32 gameFlagIsSet(u32 flag);

/* Build the save-slot summary record from a save image and store it in the game data block. */
void saveBuildSlotSummary(u16 *save)
{
    SaveSummary *summary = *reinterpret_cast<SaveSummary **>(g_gameDataBlocks + 4);
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
    summary->unk4C = *reinterpret_cast<u8 *>(save + 0x3F);
    summary->flagBits = 0;
    if (gameFlagIsSet(0x67A) != 0)
        summary->flagBits |= 1;
    if (gameFlagIsSet(0x67B) != 0)
        summary->flagBits |= 2;
    if (gameFlagIsSet(0x679) != 0)
        summary->flagBits |= 4;
    if (gameFlagIsSet(0x678) != 0)
        summary->flagBits |= 8;
    u8 *bytes = reinterpret_cast<u8 *>(save);
    summary->unk50 = *reinterpret_cast<u32 *>(save + 0xFA2C);
    summary->unk54 = 0;
    summary->unk58 = bytes[0xA839];
    summary->unk5A = *reinterpret_cast<u8 *>(save + 0x541D);
    if (FUN_00288f78(bytes[0xA839]) == 3)
        summary->unk58 = 1000;
    if (bytes[0xA83B] == 0) {
        if (summary->unk58 == 0x18) {
            if (*reinterpret_cast<s8 *>(save + 0x57E5) != 0)
                summary->unk58 = *reinterpret_cast<s8 *>(save + 0x57E5) + 1000;
            else
                summary->unk5A = bytes[0xA83B];
        }
    } else {
        summary->unk5A = bytes[0xA83B];
    }
    summary->unk63 = (*reinterpret_cast<u8 **>(g_gameDataBlocks + 4))[0x24BB0];
    if (gameFlagIsSet(0x410) != 0)
        summary->unk64 = 1;
    else
        summary->unk64 = 0;
    if (summary->flagBits == 0)
        summary->unk66 = 0;
    summary->unk62 = *reinterpret_cast<u8 *>(save + 1);
    if (*reinterpret_cast<s8 *>(save + 1) == 2) {
        summary->partyLevel[0] = 0;
        summary->partyLevel[1] = 0;
        summary->partyLevel[2] = 0;
    } else {
        s8 first = *reinterpret_cast<s8 *>(save + 0x4886);
        if (first < 0)
            summary->partyLevel[0] = 0;
        else
            summary->partyLevel[0] = save[first * 0x302 + 0x6D];
        s8 second = *reinterpret_cast<s8 *>(bytes + 0x910D);
        if (second < 0)
            summary->partyLevel[1] = 0;
        else
            summary->partyLevel[1] = save[second * 0x302 + 0x6D];
        s8 third = *reinterpret_cast<s8 *>(save + 0x4887);
        if (third < 0)
            summary->partyLevel[2] = 0;
        else
            summary->partyLevel[2] = save[third * 0x302 + 0x6D];
    }
    __aeabi_memcpy4(*reinterpret_cast<u8 **>(g_gameDataBlocks + 4) + 0x24794, summary, 0x80);
}
}
