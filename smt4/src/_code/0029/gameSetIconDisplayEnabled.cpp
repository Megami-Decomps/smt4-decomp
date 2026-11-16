#include "shard/GameGlobals.h"
#include "camp/PartyPanel/PartyPanel.h"

extern "C" {

void gameSetIconDisplayEnabled(u8 value)
{
    g_gameGlobals.data->unk1E61 = value;
}

} /* extern "C" */
