/* NON_MATCHING: retail stores the four floating-point constants individually; compiler copies the array initializer. */
#include "common.h"
namespace { struct Effects { u8 padding[0x84]; float scale; }; }
extern "C" {
extern Effects DAT_006306f8;
void FUN_001834e4(const float *values);
void FUN_001692d4(void)
{
    const float values[4] = {1.0f, 1.0f, 1.0f, 1.0f};
    DAT_006306f8.scale = 1.0f;
    FUN_001834e4(values);
}
}
