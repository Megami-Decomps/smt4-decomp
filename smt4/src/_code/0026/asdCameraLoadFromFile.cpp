#include "common.h"
#include "code/Code0038.h"
#include "camp/Unite/UniteEffectState.h"

extern "C" {

void *asdLoadFileSyncDefault(const char *path);

CameraObject *asdCameraCreateFromResource(void *resource);

/* Loads the camera file `path` and creates the camera for it. */
void *asdCameraLoadFromFile(const char *path)
{
    void *resource = asdLoadFileSyncDefault(path);
    CameraObject *camera = asdCameraCreateFromResource(resource);

    camera->resource = resource;
    return camera;
}

} /* extern "C" */
