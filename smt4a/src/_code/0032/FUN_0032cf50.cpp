/* Per-frame update of a ramp value: while idle it is held at or above its floor; when the pending flag is set it is reset (rate 10, floor 0, value 0). */
#include "common.h"

extern "C" {

typedef struct {
    f32 value;       /* 0x00 */
    f32 rate;        /* 0x04 */
    f32 floor;       /* 0x08 */
    u8 unk0c[0x18];  /* 0x0c */
    u8 reset;        /* 0x24 */
} Ramp;

Ramp *jobGetWork(void);

void FUN_0032cf50(void)
{
    Ramp *ramp = jobGetWork();

    if (ramp != NULL) {
        if (ramp->reset == 0) {
            ramp->value = (ramp->value > ramp->floor) ? ramp->value : ramp->floor;
            return;
        }
        ramp->rate = 10.0f;
        ramp->reset = 0;
        ramp->floor = 0.0f;
        ramp->value = 0.0f;
    }
}

} /* extern "C" */
