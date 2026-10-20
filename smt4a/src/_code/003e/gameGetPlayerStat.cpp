#include "common.h"

extern "C" {

typedef struct PlayerData {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 stats[5];
} PlayerData;

extern PlayerData *gameGetPlayerData(void);

/* Returns the player's stat `index` (0-4), or 0 for any other index. */
int gameGetPlayerStat(u32 index)
{
    PlayerData *player = gameGetPlayerData();

    switch (index) {
    case 0:
        return player->stats[0];
    case 2:
        return player->stats[2];
    case 3:
        return player->stats[3];
    case 4:
        return player->stats[4];
    case 1:
        return player->stats[1];
    default:
        return 0;
    }
}

} /* extern "C" */
