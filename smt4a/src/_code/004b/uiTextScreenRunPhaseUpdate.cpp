#include "shard/S2UiTexLoader.h"

extern "C" {

extern void FUN_004ba8ec(UiTexLoader *loader);

/* Runs the current phase's update callback (if set), then updates the texture loader. */
void uiTextScreenRunPhaseUpdate(UiScreen *screen)
{
    if (screen->updateFuncs[screen->phase].func) {
        (screen->*screen->updateFuncs[screen->phase].func)();
    }
    FUN_004ba8ec(&screen->loader);
}

} /* extern "C" */
