#include "gamedata/MapSaveBlockA.h"
#include "shard/Shard0039.h"

extern "C" {

/* Pointer to word `index` (below 8) of the table at +0x1590, or NULL. */
u32 *gameFlagsGetWord1590Ptr(s32 index)
{
    MapSaveBlockA *flags = gameFlagsGetBlock();

    if (flags != NULL && index < 8) {
        return &flags->naviSlots[index].word;
    }
    return NULL;
}

} /* extern "C" */
