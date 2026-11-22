#include "shard/S2UiTexLoader.h"

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
    for (s32 phase = 0; phase < 19; ++phase) {
        screen->updateFuncs[phase].func = g_mikadoUpdateHandlerTemplates.idle;
    }
    screen->updateFuncs[1].func = g_mikadoUpdateHandlerTemplates.phase1;
    screen->updateFuncs[2].func = g_mikadoUpdateHandlerTemplates.phase2;
    screen->updateFuncs[3].func = g_mikadoUpdateHandlerTemplates.phase3;
    screen->updateFuncs[4].func = g_mikadoUpdateHandlerTemplates.phase4;
    screen->updateFuncs[5].func = g_mikadoUpdateHandlerTemplates.phase5;
    screen->updateFuncs[6].func = g_mikadoUpdateHandlerTemplates.phase6;
    screen->updateFuncs[7].func = g_mikadoUpdateHandlerTemplates.phase7;
    screen->updateFuncs[8].func = g_mikadoUpdateHandlerTemplates.phase8;
    screen->updateFuncs[9].func = g_mikadoUpdateHandlerTemplates.phase9;
    screen->updateFuncs[10].func = g_mikadoUpdateHandlerTemplates.phase10;
    screen->updateFuncs[11].func = g_mikadoUpdateHandlerTemplates.phase11;
    screen->updateFuncs[12].func = g_mikadoUpdateHandlerTemplates.phase12;
    screen->updateFuncs[13].func = g_mikadoUpdateHandlerTemplates.phase13;
    screen->updateFuncs[14].func = g_mikadoUpdateHandlerTemplates.phase14;
    screen->updateFuncs[15].func = g_mikadoUpdateHandlerTemplates.phase15;
    screen->updateFuncs[16].func = g_mikadoUpdateHandlerTemplates.phase16;
    screen->updateFuncs[17].func = g_mikadoUpdateHandlerTemplates.phase17;
}
} // extern "C"
