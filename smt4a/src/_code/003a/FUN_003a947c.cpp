/* NON_MATCHING: only one extra compiler `nop {0}` before scrSetResult (the null-record path joins at the call in retail without it). */
#include "common.h"

extern "C" {

/* A battle record with four u16 values after its id. */
struct BattleRecord {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 values[4];
};

s32 scrGetArg(s32 index);
void scrSetResult(u32 value);
void *btlGetMainState(void);
BattleRecord *FUN_003ecd24(void *state, u16 id);

/* Script command: pushes value `index` (0-3) of the battle record `id`, or -1. */
u32 FUN_003a947c(void)
{
    s32 id = scrGetArg(0);
    s32 index = scrGetArg(1);
    BattleRecord *record = FUN_003ecd24(btlGetMainState(), id);
    u32 result;

    if (record == NULL) {
        result = -1;
    } else {
        u32 value = -1;
        switch (index) {
        case 0: value = record->values[0]; break;
        case 1: value = record->values[1]; break;
        case 2: value = record->values[2]; break;
        case 3: value = record->values[3]; break;
        }
        result = value;
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
