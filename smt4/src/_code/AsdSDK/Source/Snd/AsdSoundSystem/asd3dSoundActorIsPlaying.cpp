/* NON_MATCHING: compiler anchors sound-state literals at interior fields and avoids retail's saved r4. */
#include "common.h"
extern "C" {
struct SoundActorState {
    /* 0x0000 */ u8 unk0000[0x1000];
    /* 0x1000 */ u32 handles[16];
    /* 0x1040 */ u8 unk1040[0x184];
    /* 0x11C4 */ u32 playingMask;
    /* 0x11C8 */ u8 unk11C8[4];
    /* 0x11CC */ u8 enabled;
};
extern SoundActorState g_asdSound;
extern u32 DAT_004e312c;
/* Clear stale actor bits and report whether this actor is playing. */
u32 asd3dSoundActorIsPlaying(u32 index)
{
    u32 playing = 0;
    if (g_asdSound.enabled != 0 && index < 16) {
        u32 bit = 1u << index;
        if (g_asdSound.handles[index] == 0) DAT_004e312c = g_asdSound.playingMask & ~bit;
        if ((g_asdSound.playingMask & bit) != 0) playing = 1;
    }
    return playing;
}
}
