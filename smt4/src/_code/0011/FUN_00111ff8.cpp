#include "common.h"

extern "C" {

extern int g_textureBindingState;

void FUN_00111ff8(void)
{
    if (g_textureBindingState != 0) {
        g_textureBindingState = 0;
    }
}

} /* extern "C" */
