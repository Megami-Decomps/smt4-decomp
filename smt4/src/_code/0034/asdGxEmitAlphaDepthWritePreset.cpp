#include "shard/W6_W6Match4_GxDrawSettings.h"

extern "C" {

u32 *FUN_0023a724(GxDrawSettings *settings, u32 *commands, s32 mode);
void FUN_0023a928(GxDrawSettings *settings);


u32 *asdGxEmitAlphaDepthWritePreset(u32 *commands)
{
    GxDrawSettings settings;
    FUN_0023a928(&settings);
    settings.depthEnabled = 1;
    settings.depthWrite = 1;
    settings.alphaEnabled = 1;
    settings.depthFunction = 5;
    settings.alphaReference = 0;
    settings.outputEnabled = 0;
    settings.enabled = 1;
    settings.alphaFunction = 6;
    return FUN_0023a724(&settings, commands, 1);
}

} /* extern "C" */
