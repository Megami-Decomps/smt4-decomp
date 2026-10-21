/* NON_MATCHING: constant-register allocation and byte-store scheduling differ from retail despite the same23-row profile body. */
#include "shard/W6_W6Match4_GxDrawSettings.h"

extern "C" {

void FUN_0016d1f4(GxDrawSettings *settings);
u32 *gxDrawSettingsMakeCommand(GxDrawSettings *settings, u32 *commands, s32 mode);


u32 *asdGxEmitAlphaDepthWritePreset(u32 *commands)
{
    GxDrawSettings settings;
    FUN_0016d1f4(&settings);
    settings.depthEnabled = 1;
    settings.depthWrite = 1;
    settings.alphaEnabled = 1;
    settings.alphaReference = 0;
    settings.depthFunction = 5;
    settings.outputEnabled = 0;
    settings.alphaFunction = 6;
    settings.enabled = 1;
    return gxDrawSettingsMakeCommand(&settings, commands, 1);
}

} /* extern "C" */
