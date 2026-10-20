#include "common.h"

extern "C" {

extern s8 g_saveLoadUIBase[2];

/* Returns the second byte of g_saveLoadUIBase, sign-extended. */
int FUN_0037de2c(void)
{
    return g_saveLoadUIBase[1];
}

} /* extern "C" */
