#include "common.h"

extern "C" {

#define SOUND_VOICE_FIRST 0x100007C
#define SOUND_VOICE_LAST 0x100020C
#define SOUND_SE_FIRST 0x100020D
#define SOUND_SE_LAST 0x1000312
#define SOUND_VOICE_HANDLE_BASE 100000

extern u8 g_soundVolumeSetting;

s32 jyoucyuGetTableEntry(u32 index);
s32 FUN_00162ea4(void);
s32 FUN_001448a8(s32 id, u8 volume, s32 arg);
s32 FUN_00143b58(s32 id, u8 volume, s32 arg, f32 pitch, f32 pan);

/* Plays sound `id` (a voice, or an effect panned by screen `position` 1-5); returns its handle or -1. */
s32 soundPlayAtPosition(s32 id, u32 position)
{
    s32 handle = -1;
    f32 pan;

    if (jyoucyuGetTableEntry(1) != 0 || FUN_00162ea4() != 0) {
        return handle;
    }
    if ((u32)(id - SOUND_VOICE_FIRST) <= SOUND_VOICE_LAST - SOUND_VOICE_FIRST) {
        handle = FUN_001448a8(id, g_soundVolumeSetting, 0) + SOUND_VOICE_HANDLE_BASE;
    } else if ((u32)(id - SOUND_SE_FIRST) <= SOUND_SE_LAST - SOUND_SE_FIRST) {
        pan = 0.0f;
        switch (position) {
        case 1:
            pan = 0.8f;
            break;
        case 2:
            pan = 0.4f;
            break;
        case 3:
            pan = 0.0f;
            break;
        case 4:
            pan = -0.4f;
            break;
        case 5:
            pan = -0.8f;
            break;
        }
        handle = FUN_00143b58(id, g_soundVolumeSetting, 0, 1.0f, pan);
    }
    return handle;
}

} /* extern "C" */
