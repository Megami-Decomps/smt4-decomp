#include "common.h"

struct StatusCameraControls {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1C */ void *camera;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ s32 mode;
};

extern "C" {
s32 slotIsActive(u32 input);
void campOutfitPreviewHandleAction(StatusCameraControls *controls, u32 action);
s32 padIsButtonPressed(u32 button);
void statusCameraApply();
void lmapPlayerModelDestroy(void *camera);
}

// Apply directional camera actions and cycle the status camera's mode.
extern "C" void statusCameraHandleControls(StatusCameraControls *controls)
{
    if (controls == NULL)
        return;
    if (slotIsActive(14))
        campOutfitPreviewHandleAction(controls, 0);
    if (slotIsActive(15))
        campOutfitPreviewHandleAction(controls, 1);
    if (slotIsActive(13))
        campOutfitPreviewHandleAction(controls, 3);
    if (slotIsActive(12))
        campOutfitPreviewHandleAction(controls, 2);
    if (padIsButtonPressed(2)) {
        ++controls->mode;
        if (controls->mode >= 3)
            controls->mode = 0;
        campOutfitPreviewHandleAction(controls, 4);
    }
    statusCameraApply();
    lmapPlayerModelDestroy(controls->camera);
}
