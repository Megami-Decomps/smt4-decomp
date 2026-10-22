#include "common.h"

extern "C" {

extern int g_textureBindingState;

void textureClearBindingState(void)
{
    if (g_textureBindingState != 0) {
        g_textureBindingState = 0;
    }
}

} /* extern "C" */
