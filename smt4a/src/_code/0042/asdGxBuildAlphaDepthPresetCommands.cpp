/* NON_MATCHING: zero/five/six constants use different registers and alpha-function store is scheduled after the final argument setup. */
#include "shard/W6_W6Match4_GxDrawSettings.h"

extern "C" {
void FUN_0016d1f4(GxDrawSettings *settings);
u32 *gxDrawSettingsMakeCommand(GxDrawSettings *settings, u32 *commands, s32 mode);

// Emit the draw-state preset with enabled alpha/depth tests and no depth writes.
u32 *asdGxBuildAlphaDepthPresetCommands(u32 *commands)
{
    GxDrawSettings settings;
    FUN_0016d1f4(&settings);
    settings.depthEnabled = 1;
    settings.depthWrite = 0;
    settings.alphaEnabled = 1;
    settings.alphaReference = 0;
    settings.depthFunction = 5;
    settings.outputEnabled = 0;
    settings.alphaFunction = 6;
    settings.enabled = 1;
    return gxDrawSettingsMakeCommand(&settings, commands, 1);
}
}
