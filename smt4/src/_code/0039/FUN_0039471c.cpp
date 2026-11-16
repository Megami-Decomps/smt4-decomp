#include "common.h"

extern "C" {

s32 soundPlaySeUnpanned(s32 first, u32 second);

/* Forwards the request to the shared handler. */
s32 FUN_0039471c(s32 first, u32 second)
{
    return soundPlaySeUnpanned(first, second);
}

}
