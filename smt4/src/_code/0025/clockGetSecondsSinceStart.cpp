#include "gamedata/GameData.h"

/* The small game data block viewed whole: the counter and the recorded clock time in seconds. */
struct GameDataSmallBlock {
    /* 0x00 */ u16 counter;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 startSeconds;
    /* 0x08 */ u32 unk08;
};

/* nn::fnd::DateTime: milliseconds since 2000-01-01. */
struct NnDateTime {
    s64 value;
};

extern "C" {
extern GameDataBlocks g_gameDataBlocks;
NnDateTime FUN_002c567c(void);
s32 nn_fnd_DateTime_GetDay(const NnDateTime *dateTime);
s32 nn_fnd_DateTime_GetMonth(const NnDateTime *dateTime);
s32 nn_fnd_DateTime_GetYear(const NnDateTime *dateTime);
s32 nn_fnd_DateTime_DateToDays(s32 year, s32 month, s32 day);
s32 FUN_003e0c80(const NnDateTime *dateTime);
s32 FUN_003e0ce8(const NnDateTime *dateTime);
s32 FUN_003e0d54(const NnDateTime *dateTime);

/* Seconds elapsed on the clock since the recorded start time (0 if the clock is behind it, -1
 * when no start time is recorded). */
s32 clockGetSecondsSinceStart(void)
{
    GameDataSmallBlock *block = (GameDataSmallBlock *)g_gameDataBlocks.smallBlock;
    NnDateTime now;
    u32 seconds;

    if (block->startSeconds == 0) {
        return -1;
    }
    now = FUN_002c567c();
    seconds = nn_fnd_DateTime_DateToDays(nn_fnd_DateTime_GetYear(&now), nn_fnd_DateTime_GetMonth(&now),
                                         nn_fnd_DateTime_GetDay(&now));
    seconds *= 24;
    seconds += FUN_003e0c80(&now);
    seconds *= 60;
    seconds += FUN_003e0ce8(&now);
    seconds *= 60;
    seconds += FUN_003e0d54(&now);
    block = (GameDataSmallBlock *)g_gameDataBlocks.smallBlock;
    if (seconds >= block->startSeconds) {
        return seconds - block->startSeconds;
    }
    return 0;
}

} /* extern "C" */
