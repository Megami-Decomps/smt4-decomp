/* NON_MATCHING: instructions equal retail (vstmia of the 4.0/8.0 pair); only the literal-pool order differs (retail 4.0, 8.0, 0.0). */
#include "common.h"

extern "C" {

struct FloatPair { f32 values[2]; };
struct Controller { u8 unk000[0x40c]; u32 mode; f32 start; f32 first; FloatPair range; };

void controllerStartInterpolation(Controller *controller)
{
    FloatPair range;

    range.values[0] = 4.0f;
    range.values[1] = 8.0f;

    controller->mode = 3;
    controller->first = 4.0f;
    controller->range = range;
    controller->start = 0.0f;
}

} /* extern "C" */
