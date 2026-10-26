#include "status/StatusDown.h"
#include "code/Code0029_Smt4.h"

extern "C" {
extern StatusDownState *g_statusDown;

void FUN_0029c424(u8 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->unk412 = value;
    }
}

} /* extern "C" */
