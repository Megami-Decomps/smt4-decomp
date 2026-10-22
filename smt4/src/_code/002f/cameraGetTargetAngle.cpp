#include "common.h"

namespace { struct Camera { u8 padding[0x4c]; float x; float unused; float y; float targetX; float reserved; float targetY; }; }

extern "C" {
extern Camera *DAT_004474f0[2];
float FUN_00281e34(float x, float y);
float cameraGetTargetAngle(void)
{
    float x = DAT_004474f0[1]->x - DAT_004474f0[1]->targetX;
    float y = DAT_004474f0[1]->y - DAT_004474f0[1]->targetY;
    return FUN_00281e34(x, y) * 57.3248405456543f;
}
}
