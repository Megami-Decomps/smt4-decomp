#include "shard/Shard0044.h"

extern "C" {

extern s32 nn_applet_CTR_detail_IsRegistered(s32 id);

void appletIsRegistered406(void)
{
    nn_applet_CTR_detail_IsRegistered(0x406);
}

} /* extern "C" */
