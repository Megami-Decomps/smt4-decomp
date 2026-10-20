#include "common.h"

extern "C" {

void FUN_001d3490(void *channel);

typedef struct Channel {
    /* 0x00 */ u8 unk00[0x0D];
    /* 0x0D */ u8 mode;
} Channel;

/* Runs FUN_001d3490 on the channel while its mode is 0. */
void FUN_001d3154(Channel *channel)
{
    if (channel->mode == 0) {
        FUN_001d3490(channel);
        return;
    }
}

} /* extern "C" */
