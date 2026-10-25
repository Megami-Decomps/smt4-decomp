/* NON_MATCHING: retrieved and constructed date-time locals occupy opposite stack slots. */
#include "common.h"

// Private views of the date-time value and the referenced game-data records.
namespace {

struct DateTimeView {
    u64 ticks; // 0x00
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

void FUN_0030fc80(DateTimeView* result);
s32 nn_fnd_DateTime_GetDay(const DateTimeView* dateTime);
s32 nn_fnd_DateTime_GetMonth(const DateTimeView* dateTime);
s32 nn_fnd_DateTime_GetYear(const DateTimeView* dateTime);
s32 FUN_001a1564(s32 year, s32 month, s32 day);
s32 FUN_005020c0(const DateTimeView* dateTime);
s32 FUN_005021d8(const DateTimeView* dateTime);
s32 FUN_00502244(const DateTimeView* dateTime);

// Convert the retrieved date-time to seconds and store it in the game-data record.
void FUN_002c9104(void)
{
    DateTimeView retrieved;
    FUN_0030fc80(&retrieved);
    DateTimeView dateTime = retrieved;

    s32 day = nn_fnd_DateTime_GetDay(&dateTime);
    s32 month = nn_fnd_DateTime_GetMonth(&dateTime);
    s32 year = nn_fnd_DateTime_GetYear(&dateTime);
    s32 hours = FUN_001a1564(year, month, day) * 24;
    hours += FUN_005020c0(&dateTime);
    s32 minutes = hours * 60;
    minutes += FUN_005021d8(&dateTime);
    s32 seconds = minutes * 60;
    seconds += FUN_00502244(&dateTime);

    g_gameDataBlocks.unk0C->unk04 = seconds;
}
}
