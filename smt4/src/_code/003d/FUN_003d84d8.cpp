/* NON_MATCHING: case order (0,2,3,1/4,5) and jump table now match retail; floating-constant hoisting (retail loads seven constants before the switch) and the merged vstmia stores differ. */
#include "gfx/CameraPoseBlend.h"

static __inline void setCameraVector(BattleVector3 *vector, f32 x, f32 y, f32 z)
{
    vector->x = x;
    vector->y = y;
    vector->z = z;
}

extern "C" void FUN_003d84d8(CameraPoseBlendView *camera, u32 preset, s32 destination)
{
    CameraBlendPose *pose;
    if (destination == 1)
        pose = &camera->end;
    else if (destination == 2)
        pose = &camera->start;
    else
        pose = &camera->current;

    switch (preset) {
    case 0:
        pose->scalar = 35.0f;
        setCameraVector(&pose->target, 0.0f, 0.0f, -1.0f);
        setCameraVector(&pose->position, 0.0f, 6.3f, 44.5f);
        setCameraVector(&pose->up, 44.5f, 0.0f, 0.0f);
        break;
    case 2:
        pose->scalar = 35.0f;
        setCameraVector(&pose->target, 0.8f, 0.0f, -0.6f);
        setCameraVector(&pose->position, 0.7f, 5.3f, 39.6f);
        setCameraVector(&pose->up, 39.6f, -6.2f, 180.0f);
        break;
    case 3:
        pose->scalar = 30.0f;
        setCameraVector(&pose->target, 0.0f, 0.0f, -1.0f);
        setCameraVector(&pose->position, 1.8f, 4.0f, 46.5f);
        setCameraVector(&pose->up, 46.5f, -9.9f, 180.0f);
        break;
    case 1:
    case 4:
        pose->scalar = 35.0f;
        setCameraVector(&pose->target, 0.0f, 0.0f, -1.0f);
        setCameraVector(&pose->position, 0.0f, 2.3f, 55.0f);
        setCameraVector(&pose->up, 55.0f, -7.7f, 180.0f);
        break;
    case 5:
        pose->scalar = 35.0f;
        setCameraVector(&pose->target, 0.0f, 0.0f, -1.0f);
        setCameraVector(&pose->position, 0.0f, 2.3f, 53.3f);
        setCameraVector(&pose->up, 53.3f, -7.7f, 180.0f);
        break;
    }
}
