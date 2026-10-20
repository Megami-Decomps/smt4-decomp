#include "common.h"

extern "C" {

/* Record whose signed halfword at 0x1b6 is the value of interest. */
typedef struct {
    u8 unk00[0x1b6];
    s16 value;          /* 0x1b6 */
} ValueRecord;

u32 scrGetArg(u32 index);
void *btlGetMainState(void);
ValueRecord *FUN_00282924(void *context, u32 id);
int scrSetResult(int value);

/* Looks up the record for entry 0 and passes its value (0 when missing) to scrSetResult. */
u32 FUN_0030018c(void)
{
    u32 id = scrGetArg(0);
    int value = 0;
    ValueRecord *record = FUN_00282924(btlGetMainState(), id);

    if (record != NULL) {
        value = record->value;
    }
    scrSetResult(value);
    return 1;
}

} /* extern "C" */
