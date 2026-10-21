#include "common.h"

namespace { struct CameraSlots { u32 job; void **cameras; }; }

extern "C" {
/* Reads or updates the requested state. */
extern CameraSlots g_asdCamera;
void FUN_002c1568(void *camera)
{
    for (s32 index = 0; index < 32; index++) {
        if (g_asdCamera.cameras[index] == NULL) {
            g_asdCamera.cameras[index] = camera;
            return;
        }
    }
}
}
