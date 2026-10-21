#include "common.h"

extern "C" {

struct TimedState {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ f32 time;
};
struct StateHolder {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ TimedState *state;
};
extern StateHolder DAT_005806a0;

void engineResetStateTime(void)
{
    DAT_005806a0.state->time = 0.0f;
}

} /* extern "C" */
