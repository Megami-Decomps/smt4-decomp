#include "map/mapDepart.h"
#include "game/GameState.h"

extern "C" {



void gameStateResetRecord(GameStateRecord *record)
{
    record->unk1A = 0;
    record->unk1C = 0;
    record->unk1E = 0;
    record->unk22 = 0;
    record->unk26 = 0;
    record->unk2A = 0;
    record->unk2E = 0;
    record->unk32 = 0;
    g_gameState.entryValue = 0;
}

} /* extern "C" */
