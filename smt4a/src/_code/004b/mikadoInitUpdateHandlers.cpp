/* NON_MATCHING: only the copy of phase 16 differs: retail loads it into r2/ip with the source address in ip and the destination in r3, armcc here the other way round. */
#include "shard/S2UiTexLoader.h"

namespace {
struct UiScreenHandlerStorage {
    u8 unk0000[0x117c];
    UiScreenFunc handlers[19];
};
}

/* The mikado screen's update handlers: the idle one, then those of phases 1-17. */
struct MikadoUpdateHandlerTemplates {
    UiScreenFunc idle;
    UiScreenFunc phase1;
    UiScreenFunc phase2;
    UiScreenFunc phase3;
    UiScreenFunc phase4;
    UiScreenFunc phase5;
    UiScreenFunc phase6;
    UiScreenFunc phase7;
    UiScreenFunc phase8;
    UiScreenFunc phase9;
    UiScreenFunc phase10;
    UiScreenFunc phase11;
    UiScreenFunc phase12;
    UiScreenFunc phase13;
    UiScreenFunc phase14;
    UiScreenFunc phase15;
    UiScreenFunc phase16;
    UiScreenFunc phase17;
};

extern "C" {
extern const MikadoUpdateHandlerTemplates g_mikadoUpdateHandlerTemplates;

/* Every phase starts with the idle handler; phases 1-17 then get their own. */
void mikadoInitUpdateHandlers(UiScreen* screen)
{
    UiScreenHandlerStorage* work = reinterpret_cast<UiScreenHandlerStorage*>(screen);
    for (s32 phase = 0; phase < 19; ++phase) {
        work->handlers[phase] = g_mikadoUpdateHandlerTemplates.idle;
    }
    work->handlers[1] = g_mikadoUpdateHandlerTemplates.phase1;
    work->handlers[2] = g_mikadoUpdateHandlerTemplates.phase2;
    work->handlers[3] = g_mikadoUpdateHandlerTemplates.phase3;
    work->handlers[4] = g_mikadoUpdateHandlerTemplates.phase4;
    work->handlers[5] = g_mikadoUpdateHandlerTemplates.phase5;
    work->handlers[6] = g_mikadoUpdateHandlerTemplates.phase6;
    work->handlers[7] = g_mikadoUpdateHandlerTemplates.phase7;
    work->handlers[8] = g_mikadoUpdateHandlerTemplates.phase8;
    work->handlers[9] = g_mikadoUpdateHandlerTemplates.phase9;
    work->handlers[10] = g_mikadoUpdateHandlerTemplates.phase10;
    work->handlers[11] = g_mikadoUpdateHandlerTemplates.phase11;
    work->handlers[12] = g_mikadoUpdateHandlerTemplates.phase12;
    work->handlers[13] = g_mikadoUpdateHandlerTemplates.phase13;
    work->handlers[14] = g_mikadoUpdateHandlerTemplates.phase14;
    work->handlers[15] = g_mikadoUpdateHandlerTemplates.phase15;
    work->handlers[16] = g_mikadoUpdateHandlerTemplates.phase16;
    work->handlers[17] = g_mikadoUpdateHandlerTemplates.phase17;
}
} // extern "C"
