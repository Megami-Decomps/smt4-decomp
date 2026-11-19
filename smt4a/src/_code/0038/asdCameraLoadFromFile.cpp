#include "shard/Shard0038.h"
#include "code/Code0038.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "camp/Unite/UniteEffectState.h"

extern "C" {

extern CameraObject *FUN_003a4448(void *resource);

/* Loads the camera file `path` and creates the camera for it. */
void *asdCameraLoadFromFile(const char *path)
{
    void *resource = asdLoadFileSyncDefault(path);
    CameraObject *camera = FUN_003a4448(resource);

    camera->resource = resource;
    return camera;
}

} /* extern "C" */
