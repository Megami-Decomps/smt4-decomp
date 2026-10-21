/* NON_MATCHING: retail expands the 17 member-handler registrations; default codegen loops over the genuine constant member-pointer templates and uses different copy/register grouping. */
#include "shard/S2UiTexLoader.h"

namespace {
struct UiScreenHandlerStorage {
    u8 unk0000[0x117c];
    UiScreenFunc handlers[19];
};
}

extern "C" {
extern const UiScreenFunc g_mikadoUpdateHandlerTemplates[18];

void mikadoInitUpdateHandlers(UiScreen* screen)
{
    UiScreenHandlerStorage* work = reinterpret_cast<UiScreenHandlerStorage*>(screen);
    for (s32 phase = 0; phase < 19; ++phase) {
        work->handlers[phase] = g_mikadoUpdateHandlerTemplates[0];
    }
    for (s32 phase = 1; phase < 18; ++phase) {
        work->handlers[phase] = g_mikadoUpdateHandlerTemplates[phase];
    }
}
} // extern "C"
