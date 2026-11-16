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
s32 nn_fnd_DateTime_DateToDays(s32 year, s32 month, s32 day);
s32 FUN_005020c0(const NnDateTime *dateTime);
s32 FUN_005021d8(const NnDateTime *dateTime);
s32 FUN_00502244(const NnDateTime *dateTime);

/* Records the current clock time, in seconds, as the start time in the small game data block. */
void clockRecordStartSeconds(void)
{
    GameDataSmallBlock *block;
    NnDateTime now;
    u32 seconds;

    now = FUN_0030fc80();
    s32 day = nn_fnd_DateTime_GetDay(&now);
    s32 month = nn_fnd_DateTime_GetMonth(&now);
    seconds = nn_fnd_DateTime_DateToDays(nn_fnd_DateTime_GetYear(&now), month, day);
    seconds *= 24;
    seconds += FUN_005020c0(&now);
    seconds *= 60;
    seconds += FUN_005021d8(&now);
    seconds *= 60;
    seconds += FUN_00502244(&now);
    block = (GameDataSmallBlock *)g_gameDataBlocks.smallBlock;
    block->startSeconds = seconds;
}

} /* extern "C" */
