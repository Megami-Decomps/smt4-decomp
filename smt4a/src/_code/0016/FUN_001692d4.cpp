#include "common.h"
namespace { struct Effects { u8 padding[0x84]; float scale; }; }
extern "C" {
extern Effects DAT_006306f8;
void FUN_001834e4(const float *values);
void FUN_001692d4(void)
{
    float values[4];
    DAT_006306f8.scale = 1.0f;
    values[0] = 1.0f;
    values[1] = 1.0f;
    values[2] = 1.0f;
    values[3] = 1.0f;
    FUN_001834e4(values);
}
}
