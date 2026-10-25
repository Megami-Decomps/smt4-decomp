#ifndef GFX_CAMERAANIMATIONAPPLY_H
#define GFX_CAMERAANIMATIONAPPLY_H
#include "common.h"

// Sample the requested camera into caller-owned output storage, without advancing its time.
extern "C" void controllerApplyAtUnitScale(void *controller, void *output, s32 index);
#endif
