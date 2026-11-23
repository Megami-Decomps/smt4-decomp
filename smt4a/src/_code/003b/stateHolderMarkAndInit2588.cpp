#include "status/StatusDownA.h"
#include "shard/Shard003B.h"
#include "ui/FloatTableLookup.h"

extern "C" {

void stateHolderMarkAndInit2588(void)
{
    StatusDownStateA *obj = g_statusDown;

    if (g_statusDown != NULL) {
        g_statusDown->unk2584 = 1;
        copyDefaultAnimationSteps(obj->animationSteps);
    }
}

} /* extern "C" */
