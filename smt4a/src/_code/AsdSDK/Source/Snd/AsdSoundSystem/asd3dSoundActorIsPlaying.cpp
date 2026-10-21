/* NON_MATCHING: retail uses `push {r4}` where armcc emits `mov r2, #0`. */
#include "common.h"

extern "C" {

struct Asd3dSoundSystemApoc {
    /* 0x0000 */ u8 unk0000[0x1110];
    /* 0x1110 */ u32 actorHandles[16];
    /* 0x1150 */ u8 unk1150[0x184];
    /* 0x12d4 */ u32 playingMask;
    /* 0x12d8 */ u32 unk12d8;
    /* 0x12dc */ u8 enabled;
};
extern Asd3dSoundSystemApoc g_asdSoundSystem;

u32 asd3dSoundActorIsPlaying(u32 index)
{
    u32 playing = 0;
    if (g_asdSoundSystem.enabled != 0 && index < 16) {
        u32 bit = 1u << index;
        if (g_asdSoundSystem.actorHandles[index] == 0) {
            g_asdSoundSystem.playingMask &= ~bit;
        }
        if ((bit & g_asdSoundSystem.playingMask) != 0) {
            playing = 1;
        }
    }
    return playing;
}

} /* extern "C" */
