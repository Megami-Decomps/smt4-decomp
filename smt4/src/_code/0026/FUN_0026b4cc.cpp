/* NON_MATCHING: temporary retrieved clock and copied working date-time occupy reversed eight-byte stack slots. */
#include "common.h"

// Private views of the date-time value and the referenced game-data records.
namespace {

struct DateTimeView {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
};

struct TimeRecordView {
    u8 unk00[4]; // 0x00
    s32 unk04;   // 0x04
};

struct GameDataBlocksView {
    u8 unk00[12];         // 0x00
    TimeRecordView* unk0C; // 0x0C
};

}

extern "C" {
extern GameDataBlocksView g_gameDataBlocks;

void FUN_002c567c(DateTimeView* result);
s32 nn_fnd_DateTime_GetDay(const DateTimeView* dateTime);
s32 nn_fnd_DateTime_GetMonth(const DateTimeView* dateTime);
s32 nn_fnd_DateTime_GetYear(const DateTimeView* dateTime);
s32 nn_fnd_DateTime_DateToDays(s32 year, s32 month, s32 day);
s32 FUN_003e0c80(const DateTimeView* dateTime);
s32 FUN_003e0ce8(const DateTimeView* dateTime);
s32 FUN_003e0d54(const DateTimeView* dateTime);

// Convert the retrieved date-time to seconds and store it in the game-data record.
void FUN_0026b4cc(void)
{
    DateTimeView retrieved;
    FUN_002c567c(&retrieved);
    DateTimeView dateTime = retrieved;

    s32 day = nn_fnd_DateTime_GetDay(&dateTime);
    s32 month = nn_fnd_DateTime_GetMonth(&dateTime);
    s32 year = nn_fnd_DateTime_GetYear(&dateTime);
    s32 hours = nn_fnd_DateTime_DateToDays(year, month, day) * 24;
    hours += FUN_003e0c80(&dateTime);
    s32 minutes = hours * 60;
    minutes += FUN_003e0ce8(&dateTime);
    s32 seconds = minutes * 60;
    seconds += FUN_003e0d54(&dateTime);

    g_gameDataBlocks.unk0C->unk04 = seconds;
}
}
