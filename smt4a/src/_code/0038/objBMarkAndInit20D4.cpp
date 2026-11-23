#include "shard/Shard0038.h"
#include "game/GameGlobalsRef.h"
#include "ui/FloatTableLookup.h"

extern "C" {

void objBMarkAndInit20D4(void)
{
    ObjB *obj = g_gameGlobals.instance;

    if (g_gameGlobals.instance != NULL) {
        g_gameGlobals.instance->unk20D1 = 1;
        copyDefaultAnimationSteps(obj->animationSteps);
    }
}

} /* extern "C" */
