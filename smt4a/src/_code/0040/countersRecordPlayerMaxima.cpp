#include "shard/Shard0040.h"

namespace {
struct PlayerStatRecord {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ s16 stats[5];
};
}
extern "C" {
PlayerStatRecord *gameGetPlayerData(void);
Counters *gameGetCounters(void);

/* Raises the five recorded stat maxima to include the current player's values. */
void countersRecordPlayerMaxima(void)
{
    PlayerStatRecord *player = gameGetPlayerData();
    if (player != NULL) {
        u32 value = player->stats[0];
        u32 *maximum = &gameGetCounters()->a[26];
        if (*maximum > value) value = *maximum;
        *maximum = value;

        value = player->stats[2];
        maximum = &gameGetCounters()->a[28];
        if (*maximum > value) value = *maximum;
        *maximum = value;

        value = player->stats[3];
        maximum = &gameGetCounters()->a[29];
        if (*maximum > value) value = *maximum;
        *maximum = value;

        value = player->stats[4];
        maximum = &gameGetCounters()->a[30];
        if (*maximum > value) value = *maximum;
        *maximum = value;

        value = player->stats[1];
        maximum = &gameGetCounters()->a[27];
        if (*maximum > value) value = *maximum;
        *maximum = value;
    }
}
}
