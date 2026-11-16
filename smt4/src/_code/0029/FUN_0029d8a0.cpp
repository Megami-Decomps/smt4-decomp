#include "shard/GameGlobals.h"

/* A saved unit record being transferred (0x60C bytes: the frame retail reserves for it). */
struct GameTransferRecord {
    u32 words[0x60C / 4];
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
