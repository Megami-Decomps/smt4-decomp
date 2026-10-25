#include "common.h"

extern "C" {

void *asdLoadFileSyncDefault(const char *path);

/* A camera object; it keeps the camera file it was created from at 0x14. */
typedef struct CameraObject {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ void *resource;
} CameraObject;

CameraObject *asdCameraCreateFromResource(void *resource);

/* Loads the camera file `path` and creates the camera for it. */
CameraObject *asdCameraLoadFromFile(const char *path)
{
    void *resource = asdLoadFileSyncDefault(path);
    CameraObject *camera = asdCameraCreateFromResource(resource);

    camera->resource = resource;
    return camera;
}

} /* extern "C" */
