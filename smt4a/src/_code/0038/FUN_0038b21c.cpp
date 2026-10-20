#include "common.h"

extern "C" {

typedef struct FlagRecord {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u16 flags[3];
} FlagRecord;

u32 scrGetArg(u32 index);
s32 FUN_002c2758(u16 id);
FlagRecord *FUN_003de92c(u16 id);
s32 FUN_002c7b8c(u16 id, s32 state);
s32 gameFlagSetValue(u32 flag, s32 value, s32 arg);

/* Script command: for an id in state 1 that has a record, sets state 2 and raises the record's flags. */
u32 FUN_0038b21c(void)
{
    u16 id = scrGetArg(0);
    FlagRecord *record;
    s32 i;

    if (FUN_002c2758(id) == 1) {
        record = FUN_003de92c(id);
        if (record != NULL) {
            FUN_002c7b8c(id, 2);
            for (i = 0; i < 3; i++) {
                u16 flag = record->flags[i];

                if (flag != 0) {
                    gameFlagSetValue(flag, 1, 1);
                }
            }
        }
    }
    return 1;
}

} /* extern "C" */
