/* NON_MATCHING: r5/r6 swapped: retail keeps the constant 1 in r5 and the record address in r6. */
#include "shard/GameGlobals.h"

extern "C" {

u32 gameGetPlayerData(void);
void FUN_0024d94c(u16 *destination, u32 player);
void FUN_0026a858(u16 id, u8 *record);
void FUN_0029dc74(u16 id, u8 *record);
void btlBuildUnitSnapshot(u16 *destination, const u8 *record);

/* Loads the game data's unit snapshot: the player for a negative id, otherwise unit `id` from one of two record sources; then flags the update. */
void FUN_0029defc(s32 id, s32 useAltSource)
{
    GameData *data = g_gameGlobals.data;
    u8 record[0x610];

    if (id < 0) {
        FUN_0024d94c(&data->unk1300, gameGetPlayerData());
        data->unk1E66 = 0;
    } else if (useAltSource != 0) {
        FUN_0026a858((u16)id, record);
        btlBuildUnitSnapshot(&data->unk1300, record);
        data->unk1E66 = 6;
    } else {
        FUN_0029dc74((u16)id, record);
        btlBuildUnitSnapshot(&data->unk1300, record);
        data->unk1E66 = 1;
    }
    data->unk1EB8 = 1;
}

} /* extern "C" */
