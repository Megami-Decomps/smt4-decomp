#include "common.h"

extern "C" {

typedef struct Voice {
    u8 unk00[0x68];
    u32 *channel;                  /* 0x68 */
} Voice;

u8 FUN_001c7bf8(u32 *channel, u32 param);

/* Passes the voice's channel index on to FUN_001c7bf8, the function that follows it. */
u8 FUN_001c7bf0(Voice *voice, u32 param)
{
    return FUN_001c7bf8(voice->channel, param);
}

} /* extern "C" */
