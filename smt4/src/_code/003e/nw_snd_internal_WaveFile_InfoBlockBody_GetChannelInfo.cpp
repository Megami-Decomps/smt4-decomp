#include "common.h"

extern "C" {

int nw_snd_internal_WaveFile_InfoBlockBody_GetChannelInfo(int body, u32 index)
{
    u32 *table = (u32 *)(body + 0x14);
    int result;

    if (index >= *table) {
        result = 0;
    } else {
        result = (int)table + table[index * 2 + 2];
    }
    return result;
}

} /* extern "C" */
