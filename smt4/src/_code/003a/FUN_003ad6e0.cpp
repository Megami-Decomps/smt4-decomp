#include "common.h"
#include "bible/bibleLegionDraw.h"

extern "C" {

/* A party unit record (0x604 bytes); the id sits at 0x46. */
struct PartyUnit {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 id;
    /* 0x48 */ u8 unk48[0x5BC];
};

/* The party manager: unit table at 0x90, an order list at 0x90F0 and its length at 0x910B. */
struct PartyManager {
    /* 0x0000 */ u8 unk0000[0x90];
    /* 0x0090 */ PartyUnit units[0x90F0 / sizeof(PartyUnit)];
};

struct PartyTable {
    /* 0x0000 */ u8 unk0000[0x90F0];
    /* 0x90F0 */ s8 order[0x1B];
    /* 0x910B */ u8 count;
};

PartyTable *gameGetSlotTable(void);

/* Finds the unit with the given id among the ordered party slots. */
void *FUN_003ad6e0(u32 id)
{
    PartyTable *table = gameGetSlotTable();
    u16 i;

    for (i = 0; i < table->count; i++) {
        s32 slot = table->order[i];
        if (slot >= 0) {
            PartyUnit *unit = &((PartyManager *)table)->units[slot];
            if (unit->id == id) {
                return unit;
            }
        }
    }
    return NULL;
}

} /* extern "C" */
