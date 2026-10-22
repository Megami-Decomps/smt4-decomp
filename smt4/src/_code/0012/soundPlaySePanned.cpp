#include "common.h"

extern "C" {

extern u8 g_soundVolumeSetting;

s32 jyoucyuGetTableEntry(u32 index);
s32 FUN_002c1d5c(void);
s32 FUN_00126850(u32 id, u8 volumeSetting, u32 flags);
s32 FUN_0012655c(u32 id, u8 volumeSetting, u32 flags, f32 volume, f32 pan);

/* Plays a sound effect; ids 0x100016C..0x1000267 are panned by the source position (1/2 right, 4/5 left).
 * Returns the sound handle, or -1 when sound is blocked or the id is out of range. */
s32 soundPlaySePanned(u32 id, u32 position)
{
    s32 handle = -1;

    if (jyoucyuGetTableEntry(1) == 0 && FUN_002c1d5c() == 0) {
        if (id >= 0x100006C && id <= 0x100016B) {
            handle = FUN_00126850(id, g_soundVolumeSetting, 0) + 100000;
        } else if (id >= 0x100016C && id <= 0x1000267) {
            f32 pan = 0.0f;

            switch (position) {
            case 0:
            case 3:
                break;
            case 1:
                pan = 0.8f;
                break;
            case 2:
                pan = 0.4f;
                break;
            case 4:
                pan = -0.4f;
                break;
            case 5:
                pan = -0.8f;
                break;
            }
            handle = FUN_0012655c(id, g_soundVolumeSetting, 0, 1.0f, pan);
        }
    }
    return handle;
}

} /* extern "C" */
