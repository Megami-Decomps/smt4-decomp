#include "common.h"

extern "C" {

int FUN_0015f1ac(void *channel);

typedef struct Channel {
    /* 0x00 */ u8 unk00[0xD];
    /* 0x0D */ u8 state;
} Channel;

void FUN_0015efec(Channel *channel)
{
    if (channel->state == 0) {
        FUN_0015f1ac(channel);
    }
}

} /* extern "C" */
