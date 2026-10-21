#include "common.h"

struct WorkState {
    /* 0x00 */ u32 state;
    /* 0x04 */ u32 value;
    /* 0x08 */ u8 active;
};

extern "C" {

/* Clears the work area's state and activation flag. */
void FUN_00150d18(WorkState *work)
{
    work->state = 0;
    work->value = 0;
    work->active = 0;
}

} /* extern "C" */
