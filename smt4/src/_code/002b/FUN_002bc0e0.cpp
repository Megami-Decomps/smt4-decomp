#include "common.h"
namespace { struct Effects { u8 padding[0x84]; float scale; }; }
extern "C" {
extern Effects DAT_004d4680;
void FUN_002ae038(const float *values);
void FUN_002bc0e0(void)
{
    float values[4];
    DAT_004d4680.scale = 1.0f;
    values[0] = 1.0f;
    values[1] = 1.0f;
    values[2] = 1.0f;
    values[3] = 1.0f;
    FUN_002ae038(values);
}
}
