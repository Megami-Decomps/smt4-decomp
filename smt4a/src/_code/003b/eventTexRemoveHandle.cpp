#include "event/2dEvent/2dEventTex.h"

extern "C" {
extern EventTexA *g_eventTex;

/* Removes the first matching texture handle and compacts the sixteen-slot queue. */
void eventTexRemoveHandle(u32 handle)
{
    EventTexA *textures = g_eventTex;
    s32 removed = EVENT_TEX_HANDLES_A;
    for (s32 i = 0; i < EVENT_TEX_HANDLES_A; ++i) {
        if (textures->slots[i] == handle) {
            textures->slots[i] = 0;
            removed = i;
            break;
        }
    }
    for (s32 i = removed; i < EVENT_TEX_HANDLES_A; ++i) {
        if (i + 1 < EVENT_TEX_HANDLES_A) {
            textures->slots[i] = textures->slots[i + 1];
        } else {
            textures->slots[i] = 0;
        }
    }
}
}
