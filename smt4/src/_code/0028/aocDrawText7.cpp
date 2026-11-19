#include "addon/AocFileBufferApi.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
extern FileQueue *g_aocDisplay;

void *aocDrawText7(AocSystem *system, s32 id, const char *secondPath)
{
    char path[128];
    memClear(path, sizeof(path));
    AocPackageFile *file = packageFindFileByTypeAndId(system, 7, id, path);
    if (file != NULL)
        return reinterpret_cast<void *>(fileQueueRequestAndWait(g_aocDisplay, path,
            secondPath, &file->result, 1, 0x80, NULL));
    return NULL;
}
}
