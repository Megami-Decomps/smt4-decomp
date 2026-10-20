#include "common.h"

extern "C" {

typedef int romwright_code(...);
extern int nw_snd_internal_SoundArchiveLoader_GetFileAddressFromSoundArchive(int *archive, u32 id);

void FUN_003e6060(int *obj, u32 id)
{
    int *loader = (int *)obj[0x87];

    if (((loader == NULL) || ((**(romwright_code **)(*loader + 8))(loader, id) == 0)) &&
        (nw_snd_internal_SoundArchiveLoader_GetFileAddressFromSoundArchive(obj + 3, id) == 0)) {
        (**(romwright_code **)(*obj + 0x10))(obj, id);
        return;
    }
}

} /* extern "C" */
