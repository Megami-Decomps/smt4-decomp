/* NON_MATCHING: retail uses `vstr s2, [r1, #16]` where armcc emits `vstr s1, [r1, #16]`. */
#include "common.h"

extern "C" {

struct Controller { u8 unk000[0x40c]; u32 mode; f32 values[4]; };

void controllerStartInterpolation(Controller *controller)
{
    controller->mode = 3;
    controller->values[1] = 4.0f;
    controller->values[0] = 0.0f;
    controller->values[2] = 4.0f;
    controller->values[3] = 8.0f;
}

} /* extern "C" */
