#include "common.h"

struct WorkState {
    /* 0x000 */ u8 unk00[0x560];
    /* 0x560 */ f32 value;
};

/* Stores the work area's floating-point value. */
extern "C" void workSetScalarParameter(WorkState *work, f32 value)
{
    work->value = value;
}
