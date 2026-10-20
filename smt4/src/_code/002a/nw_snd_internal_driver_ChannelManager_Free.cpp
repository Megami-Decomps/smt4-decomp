#include "common.h"

extern "C" {

int FUN_00155634(int channel);
int FUN_002a3188(int manager, int channel);
int nw_ut_internal_LinkListImpl_erase_2B743C(int list, int node);

void nw_snd_internal_driver_ChannelManager_Free(int manager, int channel)
{
    int list = manager + 4;

    nw_ut_internal_LinkListImpl_erase_2B743C(list, channel + 0x13c);
    if (channel != 0) {
        FUN_00155634(channel);
        FUN_002a3188(manager, channel);
        return;
    }
}

} /* extern "C" */
