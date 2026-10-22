#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {

/* A table 0x4C entry. */
typedef struct Table4cEntry {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 level;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06;
} Table4cEntry;

Table4cEntry *dataTable4CGetEntry(s32 id);
u32 randRange(s32 max);

/* Loads table 0x4C entry `id` into the flag block, with a level of -1 when it has none and at most 15. */
void FUN_002b945c(s32 id)
{
    FlagWorkBanks *flags = gameFlagsGetBlock();
    Table4cEntry *entry = dataTable4CGetEntry(id);
    flags->table4c.rate = 1;
    flags->table4cHead.unk3a = entry->unk04;
    flags->table4cHead.unk3b = entry->unk06;
    flags->table4c.level = entry->level;
    flags->table4c.rate = 100;
    flags->table4c.unk1520 = 0;
    flags->table4c.id = id;
    flags->table4c.random4 = randRange(4);
    flags->table4c.random100 = randRange(100);
    if (flags->table4c.level == 0) {
        flags->table4c.level = -1;
    } else if (flags->table4c.level > 15) {
        flags->table4c.level = 15;
    }
}

} /* extern "C" */
