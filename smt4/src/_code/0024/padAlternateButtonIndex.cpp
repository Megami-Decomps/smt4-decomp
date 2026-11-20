#include "common.h"
#include "AsdSDK/Source/Gfx/EffectEditor/EffectEditor.h"

extern "C" {

extern u8 g_padAlternateButtonTable[];

u8 padAlternateButtonIndex(int index)
{
    return g_padAlternateButtonTable[index];
}

} /* extern "C" */
