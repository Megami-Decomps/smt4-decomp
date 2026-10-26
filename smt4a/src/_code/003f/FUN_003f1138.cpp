/* NON_MATCHING: retail loads the entry's two mask words with separate ldr (the build merges them into an ldm) and recomputes the found entry after the loop; register allocation differs. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct EntryWords {
    u32 maskLow;  // 0x00
    u32 maskHigh; // 0x04
    u8 unk08[0x400];
};

/* The battle globals' entry mask, read as two words. */
struct EntryMaskWords {
    u8 unk00[0x58];
    u32 low;  // 0x58
    u32 high; // 0x5c
};

struct EntryTable {
    u8 unk0000[0x1ffc];
    EntryWords *entries; // 0x1ffc
};

extern "C" {
extern EntryMaskWords g_btlMain;

// Find the first free combatant entry from slot 4 up to slot 53 (NULL when all are taken).
EntryWords *FUN_003f1138(EntryTable *table)
{
    EntryWords *found = NULL;
    s16 index = 4;
    do {
        EntryWords *entry = &table->entries[index];
        if (((g_btlMain.low & entry->maskLow) | (g_btlMain.high & entry->maskHigh)) == 0) {
            found = entry;
            break;
        }
        index++;
    } while (index < 54);
    return found;
}

} /* extern "C" */
