#include "saveLoadUI/SaveLoadState.h"

extern "C" {

extern SaveLoadUIBaseA g_saveLoadUIBase;

/* Returns the second byte of g_saveLoadUIBase, sign-extended. */
int FUN_0037de2c(void)
{
    return g_saveLoadUIBase.unk01;
}

} /* extern "C" */
