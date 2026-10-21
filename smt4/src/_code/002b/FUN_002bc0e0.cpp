/* NON_MATCHING: retail stores the four floating-point constants individually; compiler copies the array initializer. */
#include "common.h"
namespace { struct Effects { u8 padding[0x84]; float scale; }; }
extern "C" {
extern Effects DAT_004d4680;
void FUN_002ae038(const float *values);
void FUN_002bc0e0(void)
{
    const float values[4] = {1.0f, 1.0f, 1.0f, 1.0f};
    DAT_004d4680.scale = 1.0f;
    FUN_002ae038(values);
}
}
