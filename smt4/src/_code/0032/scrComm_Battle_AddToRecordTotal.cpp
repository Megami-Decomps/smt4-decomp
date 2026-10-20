#include "common.h"

extern "C" {

/* Record with an accumulator at 0x274. */
typedef struct {
    u8 unk00[0x274];
    s32 total;          /* 0x274 */
} TotalRecord;

u32 scrGetArg(u32 index);
void *btlGetMainState(void);
TotalRecord *btlMainFindEntryByListedId(void *context, u32 id);

/* Adds entry 1 to the accumulator of the record selected by entry 0; always reports success. */
u32 scrComm_Battle_AddToRecordTotal(void)
{
    u32 id = scrGetArg(0);
    u32 amount = scrGetArg(1);
    TotalRecord *record = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (record != NULL) {
        record->total += amount;
    }
    return 1;
}

} /* extern "C" */
