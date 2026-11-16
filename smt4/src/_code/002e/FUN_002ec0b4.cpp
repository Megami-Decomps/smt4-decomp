/* Initializes the effect resources and registers effect 0x39/0xD with the given pair of parameters. */
#include "common.h"

extern "C" {

extern void gxResetColorQuadToWhite(void);
extern void texDrawCompositeSprite(s32 a, s32 b, s32 c, u32 param1, u32 param2, s32 d);
extern void efctSetSpeed(f32 scale);

void FUN_002ec0b4(u32 param1, u32 param2)
{
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    texDrawCompositeSprite(2, 0x39, 0xD, param1, param2, 0x76);
}

}
