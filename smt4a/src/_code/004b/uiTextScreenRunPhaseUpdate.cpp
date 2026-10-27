#include "shard/S2UiTexLoader.h"

extern "C" {

extern void uiTexLoaderUpdate(UiTexLoader *loader);

/* Runs the current phase's update callback (if set), then updates the texture loader. */
void uiTextScreenRunPhaseUpdate(UiScreen *screen)
{
    if (screen->updateFuncs[screen->phase].func) {
        (screen->*screen->updateFuncs[screen->phase].func)();
    }
    uiTexLoaderUpdate(&screen->loader);
}

} /* extern "C" */
