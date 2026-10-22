#include "map/mapDepart.h"

extern "C" {

extern GameStateA g_gameState;


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
    g_gameState.clear.unk5C = 0;
}

} /* extern "C" */
