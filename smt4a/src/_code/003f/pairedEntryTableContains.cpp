#include "battle/btlMain.h"
#include "code/Code003f_Smt4a.h"

/* Looks up an encounter exclusion ID. */
extern "C" s32 pairedEntryTableContains(BtlMainStateA *state, s32 id)
{
    return btlPairedEntryTableContains(state, id);
}
