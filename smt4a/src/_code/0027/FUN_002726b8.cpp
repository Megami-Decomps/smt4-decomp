#include "battle/btlMain.h"
#include "classes/Obj4209d8.h"
#include "shard/W6_W6Match7_BattleEffects.h"

struct ValueSource;

extern "C" {
extern BattleEffectGlobals g_battleEffectSettings;
extern ValueSource *g_handleRegistry;

u32 taskCreateDraw(const char *name, u32 priority, u32 flags, u32 argument, void (*draw)(), void (*teardown)(),
                   void *work, u32 parent);
void valueSourceStore(ValueSource *source, u32 value);
void *asdOperatorNew(u32 bytes);
void battleRosterMotionUpdate();
void btlEffectSettingsReleaseTask();
void battleDrawRosterMarkerRects();
void FUN_002df754();
void FUN_002fc0c8();

/* Creates the battle effect tasks (calculation and three draw layers), the cell query object and
 * registers the handle registry's value hook. */
void FUN_002726b8(BtlMainStateA *state)
{
    state->effectTasks.effectJob = taskCreateDraw("btlUnit Calc", 4, 0, 0, battleRosterMotionUpdate,
                                                  btlEffectSettingsReleaseTask, state, state->job);
    taskCreateDraw("btlUnit DrawUp", 0x71, 0, 0, battleDrawRosterMarkerRects, 0, state, state->effectTasks.effectJob);
    taskCreateDraw("btlUnit DrawUp2DLeft", 0x7D, 0, 0, FUN_002df754, 0, state, state->effectTasks.effectJob);
    taskCreateDraw("btlUnit DrawUp2DRight", 0xD9, 0, 0, FUN_002df754, 0, state, state->effectTasks.effectJob);
    g_battleEffectSettings.queryObject = new Obj4209d8(reinterpret_cast<Obj4209d8Owner *>(state));
    valueSourceStore(g_handleRegistry, reinterpret_cast<u32>(FUN_002fc0c8));
}

}
