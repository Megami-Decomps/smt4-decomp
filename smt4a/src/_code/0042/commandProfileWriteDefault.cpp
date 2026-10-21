/* NON_MATCHING: profile byte-store constants occupy different registers and the final kind store is scheduled later. Candidate O2. */
#include "shard/W6_W6Match2_CommandProfile.h"

extern "C" {
void FUN_0016d1f4(CommandProfile* profile);
u32* gxDrawSettingsMakeCommand(CommandProfile* profile, u32* output, s32 mode);

// Write the initialized primary/supplementary command profile into the output buffer.
u32* commandProfileWriteDefault(u32* output)
{
    CommandProfile profile;
    FUN_0016d1f4(&profile);
    profile.secondary.enabled = 1;
    profile.secondary.mode = 0;
    profile.primary.enabled = 1;
    profile.primary.mode = 0;
    profile.secondary.kind = 5;
    profile.mode = 0;
    profile.primary.kind = 6;
    profile.enabled = 1;
    return gxDrawSettingsMakeCommand(&profile, output, 1);
}
}
