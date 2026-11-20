#include "shard/Sys43e0b8.h"

extern "C" {

int eventIsSkipping(void)
{
    int value;

    if (g_messageFlags.unk04 < 0) {
        value = g_messageFlags.unk00;
    } else {
        value = 0;
    }
    return value;
}

} /* extern "C" */
