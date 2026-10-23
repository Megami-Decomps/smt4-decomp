/* NON_MATCHING: retail pads the saved-register set with R6 and reserves 0x610 bytes; the recovered record alignment yields a three-register save and 0x614-byte split reservation. */
#include "shard/GameGlobals.h"

struct GameTransferRecord {
    u32 words[0x610 / 4];
};

extern "C" {
void unitInitializeFromSavedRecord(u32 source, GameTransferRecord* record);
void btlBuildUnitSnapshot(u16* destination, const GameTransferRecord* record);

// Transfers a record into game data and sets its update-state flags.
void FUN_0029d8a0(u32 source)
{
    GameData* data = g_gameGlobals.data;
    GameTransferRecord record;
    unitInitializeFromSavedRecord(source, &record);
    btlBuildUnitSnapshot(&data->unk1300, &record);
    data->unk1E66 = 4;
    data->unk1EB8 = 1;
}
}
