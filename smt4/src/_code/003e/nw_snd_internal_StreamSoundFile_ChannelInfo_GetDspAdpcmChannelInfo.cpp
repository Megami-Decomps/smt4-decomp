#include "common.h"

extern "C" {

int nw_snd_internal_StreamSoundFile_ChannelInfo_GetDspAdpcmChannelInfo(s16 *info)
{
    int result;

    if (*info == 0x300) {
        result = (int)info + *(int *)(info + 2);
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
