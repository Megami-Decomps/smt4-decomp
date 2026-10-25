#include "common.h"

extern "C" {

typedef struct PlayerData {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s16 max;
    /* 0x1E */ u8 unk1E[0xC];
    /* 0x2A */ s16 value;
} PlayerData;

extern PlayerData *gameGetPlayerData(void);

static inline s32 playerClampPositive(s32 value)
{
    if (value < 1)
        value = 1;
    return value;
}

/* Sets the player value to `value` clamped to at least 1, but never above the player's maximum. */
void playerSetClampedStat(s32 value)
{
    PlayerData *player = gameGetPlayerData();
    s32 max = player->max;

    player->value = value <= max ? playerClampPositive(value) : max;
}

} /* extern "C" */
