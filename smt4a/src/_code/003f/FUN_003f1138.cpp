/* NON_MATCHING: retail loads the entry's two mask words separately (ldr/ldr, found entry recomputed after the loop) rather than with ldm; register allocation differs. */
#include "shard/W5_W5Match7_BattleMask.h"
#include "shard/BattleFlagMasks.h"

struct EntryWords {
    u64 mask; // 0x00
    u8 unk08[0x400];
};

struct EntryTable {
    u8 unk0000[0x1ffc];
    EntryWords *entries; // 0x1ffc
};

extern "C" {

// Find the first free combatant entry from slot 4 up to slot 53 (NULL when all are taken).
EntryWords *FUN_003f1138(EntryTable *table)
{
    EntryWords *found = NULL;
    s16 index = 4;
    do {
        EntryWords *entry = &table->entries[index];
        if ((entry->mask & g_btlMain.entryMask) == 0) {
            found = entry;
            break;
        }
        index++;
    } while (index < 54);
    return found;
}

} /* extern "C" */
