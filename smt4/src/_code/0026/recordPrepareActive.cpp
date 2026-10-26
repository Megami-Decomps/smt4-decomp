#include "common.h"
extern "C" {
struct ActiveRecordArguments { u32 first; u8 pending; u8 unk05[3]; u32 third; u8 unk0c[8]; u32 second; };
struct ActiveRecord { u8 active; u8 unk01[3]; ActiveRecordArguments arguments; };
void FUN_00346b84(ActiveRecord *record);
static void argumentsSetBounds(ActiveRecordArguments *arguments, u32 first, u32 second)
{
    arguments->first = first;
    arguments->second = second;
}
/* Initialize record arguments, prepare it, then mark it active. */
void recordPrepareActive(ActiveRecord *record,u32 first,u32 second,u32 third)
{
    argumentsSetBounds(&record->arguments, first, second);
    record->arguments.third = third;
    record->arguments.pending = 0;
    FUN_00346b84(record);
    record->active = 1;
}
}
