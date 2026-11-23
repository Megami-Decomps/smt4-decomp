#include "gamedata/MapSaveBlockA.h"
#include "util/Random.h"
#include "code/Code002b.h"

extern "C" {

/* A table 0x4C entry. */
typedef struct Table4cEntry {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 level;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06;
} Table4cEntry;

Table4cEntry *dataTable4CGetEntry(s32 id);

/* Loads table 0x4C entry `id` into the flag block, with a level of -1 when it has none and at most 15. */
void gameFlagsLoadTable4cEntry(s32 id)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();
    Table4cEntry *entry = dataTable4CGetEntry(id);
    flags->option = 1;
    flags->sizeX = entry->unk04;
    flags->sizeY = entry->unk06;
    flags->layer = entry->level;
    flags->option = 100;
    flags->unk1520 = 0;
    flags->unk15C4 = id;
    flags->random4 = randRange(4);
    flags->random100 = randRange(100);
    if (flags->layer == 0) {
        flags->layer = -1;
    } else if (flags->layer > 15) {
        flags->layer = 15;
    }
}

} /* extern "C" */
