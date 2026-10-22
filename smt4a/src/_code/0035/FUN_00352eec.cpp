#include "map/mapDepart.h"
#include "shard/W5_W5Match7_FlagBanks.h"

/* Data table 0x2F entries of the three types, as this loader reads them. */
struct Table2FType0Entry {
    /* 0x00 */ u8 unk00[0xA];
    /* 0x0A */ u16 level;
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u16 unk0E;
    /* 0x10 */ u16 rate;
};

struct Table2FType1Entry {
    /* 0x00 */ u8 unk00[0xA];
    /* 0x0A */ u16 level;
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u16 unk0E;
    /* 0x10 */ u8 unk10[0x6];
    /* 0x16 */ u16 rate;
    /* 0x18 */ u32 unk18;
};

struct Table2FType2Entry {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u16 level;
    /* 0x0A */ u8 unk0A[0x2];
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u16 unk0E;
};

extern "C" {

extern GameStateA g_gameState;
s32 lmapGetSpawnIndex(void);
Table2FType0Entry *dataTable2FType0GetEntry(u32 id);
Table2FType1Entry *dataTable2FType1GetEntry(u32 id);
Table2FType2Entry *dataTable2FType2GetEntry(u32 id);

// Load the selected table 0x2F entry into the flag block; the level becomes -1 when it has none
// and is capped at 15.
void FUN_00352eec(void)
{
    FlagWorkBanks *flags = gameFlagsGetBlock();
    if (lmapGetSpawnIndex() < 100) {
        flags->table4c.rate = 0;
    }
    switch (g_gameState.table2F.type) {
    case 1: {
        Table2FType0Entry *entry = dataTable2FType0GetEntry(g_gameState.table2F.id);
        flags->table4cHead.unk3a = entry->unk0C;
        flags->table4cHead.unk3b = entry->unk0E;
        flags->table4c.level = entry->level;
        flags->table4c.rate = entry->rate;
        flags->table4c.unk1520 = 0;
        break;
    }
    case 2: {
        Table2FType1Entry *entry = dataTable2FType1GetEntry(g_gameState.table2F.id);
        flags->table4cHead.unk3a = entry->unk0C;
        flags->table4cHead.unk3b = entry->unk0E;
        flags->table4c.level = entry->level;
        flags->table4c.rate = entry->rate;
        flags->table4c.unk1520 = entry->unk18;
        break;
    }
    case 3: {
        Table2FType2Entry *entry = dataTable2FType2GetEntry(g_gameState.table2F.id);
        flags->table4cHead.unk3a = entry->unk0C;
        flags->table4cHead.unk3b = entry->unk0E;
        flags->table4c.level = entry->level;
        flags->table4c.unk1520 = 0;
        break;
    }
    }
    if (flags->table4c.level == 0) {
        flags->table4c.level = -1;
    } else if (flags->table4c.level > 15) {
        flags->table4c.level = 15;
    }
}

} /* extern "C" */
