#include "common.h"

extern "C" {
s32 bustupCutAnimFinish();
/* Reports whether the shared state query returned nonzero. */
bool FUN_0031c048()
{
    return bustupCutAnimFinish() != 0;
}
}
