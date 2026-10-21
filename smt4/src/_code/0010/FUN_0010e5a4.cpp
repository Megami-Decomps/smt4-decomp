/* NON_MATCHING: instruction selection/order differs: retail add r0, r1, #1024; compiler ldrb r0, [r0, #204]. */
#include "common.h"

struct SoundRuntimeScalars {
    /* 0x0000 */ u8 unk0000[0x1100];
    /* 0x1100 */ u8 object[0xB8];
    /* 0x11B8 */ f32 first;
    /* 0x11BC */ u32 unk11BC;
    /* 0x11C0 */ f32 second;
    /* 0x11C4 */ u8 unk11C4[8];
    /* 0x11CC */ s8 active;
};

extern "C" {

extern SoundRuntimeScalars g_asdSound;
extern void FUN_00121028(void *work, f32 value);

/* Updates an active sound scalar and forwards it to the playing object. */
void FUN_0010e5a4(f32 value)
{
    if (g_asdSound.active != 0) {
        g_asdSound.first = value;
        FUN_00121028(g_asdSound.object, value);
    }
}

} /* extern "C" */
