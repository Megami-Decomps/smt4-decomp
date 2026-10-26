#include "shard/GameGlobals.h"
#include "code/Code0029_Smt4.h"

extern "C" {


u8 FUN_0029563c(void)
{
    return g_gameGlobals.data->activeState == 8;
}

} /* extern "C" */
