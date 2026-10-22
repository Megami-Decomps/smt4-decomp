#include "common.h"

struct StatusCameraControls {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1C */ void *camera;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ s32 mode;
};

extern "C" {
s32 FUN_002c15fc(u32 input);
void FUN_00254650(StatusCameraControls *controls, u32 action);
s32 padIsButtonPressed(u32 button);
void statusCameraApply();
void FUN_00297684(void *camera);
}

// Apply directional camera actions and cycle the status camera's mode.
extern "C" void statusCameraHandleControls(StatusCameraControls *controls)
{
    if (controls == NULL)
        return;
    if (FUN_002c15fc(14))
        FUN_00254650(controls, 0);
    if (FUN_002c15fc(15))
        FUN_00254650(controls, 1);
    if (FUN_002c15fc(13))
        FUN_00254650(controls, 3);
    if (FUN_002c15fc(12))
        FUN_00254650(controls, 2);
    if (padIsButtonPressed(2)) {
        ++controls->mode;
        if (controls->mode >= 3)
            controls->mode = 0;
        FUN_00254650(controls, 4);
    }
    statusCameraApply();
    FUN_00297684(controls->camera);
}
