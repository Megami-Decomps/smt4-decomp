#include "AsdSDK/Source/Gfx/Model/AsdMotionControlApi.h"

/* The historical symbol name is retained; this scales primary motion speed. */
extern "C" void modelSetScale(AsdMdlNode *model, f32 speed)
{
    model->speed = speed;
    if (model->motionCount > 0) {
        f32 scaled = model->animationSpeed * speed;
        if (model->active != NULL)
            model->active->playbackSpeed = scaled;
    }
}
