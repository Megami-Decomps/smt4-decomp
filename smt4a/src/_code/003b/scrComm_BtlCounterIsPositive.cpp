#include "common.h"

extern "C" {

typedef struct BtlUnitState {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ s32 counters[12];
} BtlUnitState;

extern void *btlGetMainState(void);
extern BtlUnitState *FUN_003eaf20(void *mainState);
extern int scrGetArg(u32 index);
extern int scrSetResult(int value);

/* Script command: pushes whether the counter selected by argument 0 (0-3) is positive. */
u32 scrComm_BtlCounterIsPositive(void)
{
    int arg;
    int index;
    BtlUnitState *state;

    arg = scrGetArg(0);
    index = 0;
    if (arg == 0) {
        index = 7;
    } else if (arg == 1) {
        index = 8;
    } else if (arg == 2) {
        index = 10;
    } else if (arg == 3) {
        index = 11;
    }
    state = FUN_003eaf20(btlGetMainState());
    if (state != NULL) {
        scrSetResult(state->counters[index] >= 1);
    } else {
        scrSetResult(0);
    }
    return 1;
}

} /* extern "C" */
