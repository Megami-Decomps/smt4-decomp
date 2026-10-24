/* NON_MATCHING: retail reads each type id from its own global (DAT_0056fd74, DAT_0056fdb0, ... one pool word each) and packs two ids into one register; the build addresses one record table from a single base. */
#include "common.h"

/* A record of the command-type table (0x3C bytes, first halfword is its item type id). */
struct CommandTypeRecord {
    s16 typeId;
    u8 unk02[0x3A];
};

/* The menu object: item pointers from 0x5A8, their count at 0x600. */
struct CommandMenu {
    u8 unk000[0x5A8];
    s16 *items[22];     // 0x5A8: each points at the item's type id
    s32 itemCount;      // 0x600
};

extern "C" {
extern CommandTypeRecord DAT_0056fd74[21];

/* Find the index of the first menu item whose type matches the command code (the inverse of the item-to-code mapping). */
s32 FUN_0026edbc(CommandMenu *menu, u32 code)
{
    const CommandTypeRecord *types = DAT_0056fd74;
    s16 first = 0;
    s16 second = 0;
    s16 third = 0;
    switch (code) {
    case 0x35:
    case 0x44:
    case 0x49:
        first = types[3].typeId;
        second = types[8].typeId;
        third = types[12].typeId;
        break;
    case 0x36:
    case 0x45:
    case 0x4A:
        first = types[5].typeId;
        second = types[9].typeId;
        third = types[13].typeId;
        break;
    case 0x37:
    case 0x48:
        first = types[2].typeId;
        third = types[11].typeId;
        break;
    case 0x38:
    case 0x47:
    case 0x4B:
        first = types[4].typeId;
        second = types[10].typeId;
        third = types[14].typeId;
        break;
    case 0x39:
        first = types[6].typeId;
        break;
    case 0x3A:
        first = types[1].typeId;
        break;
    case 0x3B:
        first = types[15].typeId;
        break;
    case 0x3C:
        first = types[16].typeId;
        break;
    case 0x41:
        first = types[0].typeId;
        break;
    case 0x42:
        first = types[17].typeId;
        break;
    case 0x43:
        first = types[18].typeId;
        break;
    case 0x46:
        first = types[7].typeId;
        break;
    case 0x4C:
        first = types[19].typeId;
        break;
    case 0x4D:
        first = types[20].typeId;
    }
    for (s32 i = 0; i < menu->itemCount; i++) {
        if (first > 0 && *menu->items[i] == first)
            return i;
        if (second > 0 && *menu->items[i] == second)
            return i;
        if (third > 0 && *menu->items[i] == third)
            return i;
    }
    return 0;
}
}
