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
extern GameDataBlocksA g_gameDataBlocks;
NnDateTime FUN_0030fc80(void);
s32 nn_fnd_DateTime_GetDay(const NnDateTime *dateTime);
s32 nn_fnd_DateTime_GetMonth(const NnDateTime *dateTime);
s32 nn_fnd_DateTime_GetYear(const NnDateTime *dateTime);
s32 FUN_001a1564(s32 year, s32 month, s32 day);
s32 FUN_005020c0(const NnDateTime *dateTime);
s32 FUN_005021d8(const NnDateTime *dateTime);
s32 FUN_00502244(const NnDateTime *dateTime);

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
    now = FUN_0030fc80();
    seconds = FUN_001a1564(nn_fnd_DateTime_GetYear(&now), nn_fnd_DateTime_GetMonth(&now),
                                         nn_fnd_DateTime_GetDay(&now));
    seconds *= 24;
    seconds += FUN_005020c0(&now);
    seconds *= 60;
    seconds += FUN_005021d8(&now);
    seconds *= 60;
    seconds += FUN_00502244(&now);
    block = (GameDataSmallBlock *)g_gameDataBlocks.smallBlock;
    if (seconds >= block->startSeconds) {
        return seconds - block->startSeconds;
    }
    return 0;
}

} /* extern "C" */
