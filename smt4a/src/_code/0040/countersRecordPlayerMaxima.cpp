#include "shard/Shard0040.h"
#include "gamedata/GamePlayerData.h"

namespace {
}
extern "C" {
Counters *gameGetCounters(void);

/* Raises the five recorded stat maxima to include the current player's values. */
void countersRecordPlayerMaxima(void)
{
    PlayerDataA *player = gameGetPlayerData();
    if (player != NULL) {
        u32 value = player->baseStats.stats[0];
        u32 *maximum = &gameGetCounters()->a[26];
        if (*maximum > value) value = *maximum;
        *maximum = value;

        value = player->baseStats.stats[2];
        maximum = &gameGetCounters()->a[28];
        if (*maximum > value) value = *maximum;
        *maximum = value;

        value = player->baseStats.stats[3];
        maximum = &gameGetCounters()->a[29];
        if (*maximum > value) value = *maximum;
        *maximum = value;

        value = player->baseStats.stats[4];
        maximum = &gameGetCounters()->a[30];
        if (*maximum > value) value = *maximum;
        *maximum = value;

        value = player->baseStats.stats[1];
        maximum = &gameGetCounters()->a[27];
        if (*maximum > value) value = *maximum;
        *maximum = value;
    }
}
}
