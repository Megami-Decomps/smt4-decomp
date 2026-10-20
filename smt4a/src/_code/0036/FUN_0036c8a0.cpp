/* Initializes the effect resources and registers effect 0x2E/0xD with the given pair of parameters. */
#include "common.h"

extern "C" {

extern void FUN_00164b5c(s32 a, s32 b, s32 c, u32 param1, u32 param2, s32 d);
extern void efctSetSpeed(f32 scale);
extern void FUN_00183bb0(void);

void FUN_0036c8a0(u32 param1, u32 param2)
{
    FUN_00183bb0();
    efctSetSpeed(1.0f);
    FUN_00164b5c(2, 0x2E, 0xD, param1, param2, 0x6C);
}

}
