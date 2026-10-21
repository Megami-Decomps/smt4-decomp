#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern CameraResourceState g_asdCamera;
extern void asdMemFree(void *memory);

/* Releases the camera work area. */
void asdCameraFreeWork(void)
{
    asdMemFree(g_asdCamera.work);
    g_asdCamera.work = NULL;
}

} /* extern "C" */
