#include "battle/btlMain.h"

/* Looks up an encounter exclusion ID. */
extern "C" s32 pairedEntryTableContains(BtlMainState *state, s32 id)
{
    return btlPairedEntryTableContains(state, id);
}
