#include "common.h"

extern "C" {

typedef struct PlayerData {
    /* 0x00 */ u8 unk00[0x1E];
    /* 0x1E */ s16 limit;
    /* 0x20 */ u8 unk20[0xC];
    /* 0x2C */ s16 value;
} PlayerData;

extern PlayerData *gameGetPlayerData(void);

static inline s32 playerClampPositive(s32 value)
{
    if (value < 1)
        value = 1;
    return value;
}

/* Sets the player value to `value` clamped to at least 1, but never above the player's limit. */
void FUN_00333fec(s32 value)
{
    PlayerData *player = gameGetPlayerData();
    s32 limit = player->limit;

    player->value = value <= limit ? playerClampPositive(value) : limit;
}

} /* extern "C" */
