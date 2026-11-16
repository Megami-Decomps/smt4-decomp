#include "shard/W6_W6Match2_CommandProfile.h"

extern "C" {
void gxDrawSettingsInitDefaults(CommandProfile* profile);
u32* gxDrawSettingsEmitCommands(CommandProfile* profile, u32* output, s32 mode);

// Write the initialized primary/supplementary command profile into the output buffer.
u32* commandProfileWriteDefault(u32* output)
{
    CommandProfile profile;
    gxDrawSettingsInitDefaults(&profile);
    profile.secondary.enabled = 1;
    profile.secondary.mode = 0;
    profile.primary.enabled = 1;
    profile.secondary.kind = 5;
    profile.primary.mode = 0;
    profile.mode = 0;
    profile.enabled = 1;
    profile.primary.kind = 6;
    return gxDrawSettingsEmitCommands(&profile, output, 1);
}
}
