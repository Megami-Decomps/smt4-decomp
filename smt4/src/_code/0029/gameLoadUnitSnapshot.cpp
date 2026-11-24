#include "shard/GameGlobals.h"

extern "C" {

u32 gameGetPlayerData(void);
void btlBuildDemonSnapshot(u16 *destination, u32 player);
void FUN_0026a858(u16 id, u8 *record);
void unitRecordBuild(u16 id, u8 *record);
void btlBuildUnitSnapshot(u16 *destination, const u8 *record);

/* Loads the game data's unit snapshot: the player for a negative id, otherwise unit `id` from one of two record sources; then flags the update. */
void gameLoadUnitSnapshot(s32 id, s32 useAltSource)
{
    GameData *data = g_gameGlobals.data;

    if (id < 0) {
        btlBuildDemonSnapshot(&data->unk1300, gameGetPlayerData());
        data->unk1E66 = 0;
    } else if (useAltSource != 0) {
        u8 record[0x60C]; /* a saved unit record, as FUN_0029d8a0 transfers */
        FUN_0026a858((u16)id, record);
        btlBuildUnitSnapshot(&data->unk1300, record);
        data->unk1E66 = 6;
    } else {
        u8 record[0x60C];
        unitRecordBuild((u16)id, record);
        btlBuildUnitSnapshot(&data->unk1300, record);
        data->unk1E66 = 1;
    }
    data->unk1EB8 = 1;
}

} /* extern "C" */
