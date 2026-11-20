#include "common.h"

namespace { struct Camera { u8 padding[0x4c]; float x; float unused; float y; float targetX; float reserved; float targetY; }; }

extern "C" {
extern Camera *g_lmapViewHolder[2];
float __hardfp_atan2f(float x, float y);
float cameraGetTargetAngle(void)
{
    float x = g_lmapViewHolder[1]->x - g_lmapViewHolder[1]->targetX;
    float y = g_lmapViewHolder[1]->y - g_lmapViewHolder[1]->targetY;
    return __hardfp_atan2f(x, y) * 57.3248405456543f;
}
}
