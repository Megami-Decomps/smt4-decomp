#include "event/2dEvent/2dEventTex.h"

extern "C" {
extern EventTexA *g_eventTex;
s32 scrGetArg(u32 argument);
s32 jobIsValid(u32 job);
s32 eventTexJobGetId(u32 job);
s32 FUN_00167898(u32 job);
void jobSetIntensity(u32 job, u32 enabled);
void jobBlendSetRate(u32 job, u32 enabled);
u32 FUN_00169580(u32 job);
u32 FUN_00169590(u32 job);
void messageMainSetMode(u32 mode);

// Toggle matching texture jobs and synchronize message mode when enabling them.
u32 scrSetEventTextureVisibility(void)
{
    s16 id = static_cast<s16>(scrGetArg(0));
    u8 enabled = scrGetArg(1) != 0;
    EventTexA *textures = g_eventTex;
    if (textures != NULL) {
        for (s32 index = 0; index < textures->count; ++index) {
            if (jobIsValid(textures->slots[index]) &&
                static_cast<s16>(eventTexJobGetId(textures->slots[index])) == id) {
                jobSetIntensity(textures->slots[index], enabled);
                if (enabled) {
                    messageMainSetMode(static_cast<u8>(FUN_00169580(textures->slots[index])));
                }
            }
        }
        for (s32 index = 0; index < EVENT_TEX_HANDLES_A; ++index) {
            if (jobIsValid(textures->handles[index]) &&
                static_cast<s16>(FUN_00167898(textures->handles[index])) == id) {
                jobBlendSetRate(textures->handles[index], enabled);
                if (enabled) {
                    messageMainSetMode(static_cast<u8>(FUN_00169590(textures->handles[index])));
                }
            }
        }
    }
    return 1;
}
}
