#include "shard/W6_W6Match4_GxDrawSettings.h"

extern "C" {
void gxDrawSettingsInitDefaults(GxDrawSettings *settings);
u32 *gxDrawSettingsEmitCommands(GxDrawSettings *settings, u32 *commands, s32 mode);

// Emit the draw-state preset with enabled alpha/depth tests and no depth writes.
u32 *asdGxBuildAlphaDepthPresetCommands(u32 *commands)
{
    GxDrawSettings settings;
    gxDrawSettingsInitDefaults(&settings);
    settings.depthEnabled = 1;
    settings.depthWrite = 0;
    settings.alphaEnabled = 1;
    settings.depthFunction = 5;
    settings.alphaReference = 0;
    settings.outputEnabled = 0;
    settings.enabled = 1;
    settings.alphaFunction = 6;
    return gxDrawSettingsEmitCommands(&settings, commands, 1);
}
}
