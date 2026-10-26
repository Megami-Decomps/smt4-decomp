#include "common.h"

extern "C" {

void gameEnableFloatSettings(void *self);

/* Runs gameEnableFloatSettings on `self` and returns it. */
void *FUN_0046069c(void *self)
{
    gameEnableFloatSettings(self);
    return self;
}

} /* extern "C" */
