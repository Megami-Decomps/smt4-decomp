/* NON_MATCHING: retail reloads the data-blocks pointer for each of the two stores (two loads from the pool word, two address computations); built shares one. */
#include "common.h"
#include "game/GameGlobalsRef.h"

extern "C" {

/* Stores value `value` (7 is stored as 3) and whether it was 7. */
void gameGlobalsSetSelected(s32 value)
{
    u8 isSeven = value == 7;

    if (isSeven) {
        value = 3;
    }
    g_gameGlobals.data->selectionWasSeven = isSeven;
    g_gameGlobals.data->unk1E67 = value;
}

} /* extern "C" */
