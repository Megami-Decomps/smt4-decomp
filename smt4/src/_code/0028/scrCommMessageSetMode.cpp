#include "shard/Sys43e0b8.h"

extern "C" {

/* Stores `mode` when it is in -1..1. */
void scrCommMessageSetMode(int mode)
{
    if (mode + 1U < 3) {
        DAT_0043e0b8.unk04 = mode;
    }
}

} /* extern "C" */
