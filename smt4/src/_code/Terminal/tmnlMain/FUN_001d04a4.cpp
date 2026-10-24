/* NON_MATCHING: ids come from the 0x24-byte entry table in the right rows, but retail keeps them as four halfwords packed in r1/r2 (per-case lsr/lsl/orr merges, list pointer moved to r3) which a plain u32+s16 pair does not reproduce */
#include "common.h"

extern "C" {

/* A 0x24-byte terminal entry; only its leading id is read here. */
struct TerminalEntry {
    /* 0x00 */ s16 id;
    /* 0x02 */ u8 unk02[0x22];
};
typedef char TerminalEntrySizeCheck[sizeof(TerminalEntry) == 0x24 ? 1 : -1];

extern TerminalEntry DAT_00432cf8[]; /* 0x432cf8 */

#define PACK_IDS(upper, lower) \
    (((u32)(u16)DAT_00432cf8[upper].id << 16) | (u16)DAT_00432cf8[lower].id)

/* Finds the slot (among the list at +0x594) that holds one of the ids that belong to the terminal item `item`; 0 when none. */
s32 FUN_001d04a4(u8 *list, u32 item)
{
    u32 packed = 0;
    s16 third = 0;
    switch (item) {
    case 0x34:
    case 0x43:
    case 0x48:
        packed = PACK_IDS(9, 4);
        third = DAT_00432cf8[13].id;
        break;
    case 0x35:
    case 0x44:
    case 0x49:
        packed = PACK_IDS(10, 6);
        third = DAT_00432cf8[14].id;
        break;
    case 0x36:
    case 0x45:
    case 0x47:
        packed = PACK_IDS(8, 3);
        third = DAT_00432cf8[12].id;
        break;
    case 0x37:
    case 0x46:
    case 0x4A:
        packed = PACK_IDS(11, 5);
        third = DAT_00432cf8[15].id;
        break;
    case 0x38:
        packed = (u16)DAT_00432cf8[7].id;
        break;
    case 0x39:
        packed = (u16)DAT_00432cf8[2].id;
        break;
    case 0x3A:
        packed = (u16)DAT_00432cf8[16].id;
        break;
    case 0x3B:
        packed = (u16)DAT_00432cf8[17].id;
        break;
    case 0x3D:
        packed = (u16)DAT_00432cf8[0].id;
        break;
    case 0x40:
        packed = (u16)DAT_00432cf8[1].id;
        break;
    case 0x41:
        packed = (u16)DAT_00432cf8[18].id;
        break;
    case 0x42:
        packed = (u16)DAT_00432cf8[19].id;
        break;
    }
    s32 count = *(s32 *)(list + 0x5E4);
    s32 i = 0;
    s16 **slots = (s16 **)(list + 0x594);
    if (i < count) {
        do {
            if (0 < (s16)packed && *slots[i] == (s16)packed) {
                return i;
            }
            if (0 < (s32)packed >> 16 && *slots[i] == (s32)packed >> 16) {
                return i;
            }
            if (0 < third && *slots[i] == third) {
                return i;
            }
            i++;
        } while (i < count);
    }
    return 0;
}

} /* extern "C" */
