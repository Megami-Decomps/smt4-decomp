#include "common.h"

extern "C" {

extern s32 g_textureBindingState;

/* Clears the word at 0x005b4400 if it is set. */
void FUN_0014938c(void)
{
    if (g_textureBindingState != 0) {
        g_textureBindingState = 0;
    }
}

} /* extern "C" */
