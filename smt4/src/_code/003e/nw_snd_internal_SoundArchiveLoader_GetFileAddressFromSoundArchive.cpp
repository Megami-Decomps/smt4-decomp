#include "common.h"

extern "C" {

typedef int romwright_code(...);

void nw_snd_internal_SoundArchiveLoader_GetFileAddressFromSoundArchive(int loader, int id)
{
    if (*(int **)(loader + 4) != NULL) {
        (**(romwright_code **)(**(int **)(loader + 4) + 8))(*(int **)(loader + 4), id);
        return;
    }
}

} /* extern "C" */
