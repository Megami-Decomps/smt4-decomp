#include "common.h"

extern "C" {
s32 FUN_001269fc();
/* Reports whether the shared state query returned nonzero. */
bool FUN_0031c048()
{
    return FUN_001269fc() != 0;
}
}
