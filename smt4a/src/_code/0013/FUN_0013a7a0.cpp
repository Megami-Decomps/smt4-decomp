/* NON_MATCHING: the zero float argument move is unpredicated and follows the range branch, shifting the constant pool; 59 built and retail rows. */
#include "common.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {
extern u8 g_soundVolumeSetting;
extern u32 g_eventQueueEntries[32];
s32 FUN_00162ea4(void);
void FUN_001448a8(u32 id, u32 volume, u32 flags);
void FUN_00143b58(u32 id, u32 volume, u32 flags, f32 volumeScale, f32 pan);
void asdSoundDetachAllHandles(void);

void FUN_0013a7a0(void)
{
    for (s32 index = 0; index < 32; ++index) {
        u32 id = g_eventQueueEntries[index];
        if (id) {
            if (!jyoucyuGetTableEntry(1) && !FUN_00162ea4()) {
                if (id - 0x100007C <= 400) {
                    FUN_001448a8(id, g_soundVolumeSetting, 0);
                } else if (id - 0x100020D <= 261) {
                    FUN_00143b58(id, g_soundVolumeSetting, 0, 1.0f, 0.0f);
                }
            }
            g_eventQueueEntries[index] = 0;
        }
    }
    if (FUN_00162ea4()) {
        asdSoundDetachAllHandles();
    }
}
}
