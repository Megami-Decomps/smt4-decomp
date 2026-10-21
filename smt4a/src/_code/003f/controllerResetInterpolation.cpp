#include "common.h"

extern "C" {

struct Controller { u8 unk000[0x40c]; u32 counter; f32 values[4]; };

void controllerResetInterpolation(Controller *controller)
{
    controller->counter = 0;
    controller->values[1] = 0.0f;
    controller->values[2] = 0.0f;
    controller->values[3] = 0.0f;
    controller->values[0] = 0.0f;
}

} /* extern "C" */
