/* Tests whether the textures required by the current screen mode have loaded. */
#include "ui/TextureLoadState.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

u32 menuAreModeTexturesLoaded(const TextureLoadState *state)
{
    u32 ready = 0;
    switch (state->mode) {
    case 3:
        if (asdTMTexTableNodeIsLoaded(42, 6)) {
            ready = 1;
        }
        break;
    case 4:
        if (asdTMTexTableNodeIsLoaded(42, 7)) {
            ready = 1;
        }
        break;
    case 7:
    case 8:
        if (!asdTMTexTableNodeIsLoaded(42, 0)) {
            break;
        }
        if (!asdTMTexTableNodeIsLoaded(42, 1)) {
            break;
        }
        if (asdTMTexTableNodeIsLoaded(42, 2)) {
            ready = 1;
        }
        break;
    default:
        ready = 1;
        break;
    }
    return ready;
}
}
