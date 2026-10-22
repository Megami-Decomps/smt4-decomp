#include "common.h"

extern "C" {

#define FLAG_ENABLED 0x01
#define FLAG_EXTRA   0x02
#define MODE_ENABLED 0x01
#define MODE_EXTRA   0x10

typedef struct Config {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 mode;
} Config;

/* Translates the request flags (bit 0, bit 1) into the config's mode word (bit 0, bit 4). */
void FUN_0016a10c(Config *config, u32 flags)
{
    u32 mode = 0;

    config->mode = mode;
    if ((flags & FLAG_ENABLED) != 0) {
        mode = MODE_ENABLED;
        config->mode = mode;
    }
    if ((flags & FLAG_EXTRA) != 0) {
        config->mode = mode | MODE_EXTRA;
    }
}

} /* extern "C" */
