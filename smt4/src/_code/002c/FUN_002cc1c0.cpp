/* NON_MATCHING: retail addresses the actor/position arrays through separately added section offsets (+0x784 and +0x1184) and copies the position with two VFP loads and an integer move; armcc folds the constants and uses vldm */
/* Moves 3D sound actor `index` to `position` (ignored when 3D sound is off or the index is out of range). */
#include "common.h"

extern "C" {
struct SoundVec3 {
    /* 0x0 */ f32 x;
    /* 0x4 */ f32 y;
    /* 0x8 */ f32 z;
};

/* A 3D sound actor (0x84 bytes). */
struct Sound3DActor {
    /* 0x00 */ u8 unk00[0x84];
};

struct AsdSoundState {
    /* 0x0000 */ u8 unk0000[0x7C0];
    /* 0x07C0 */ Sound3DActor actors[16];
    /* 0x1000 */ u8 unk1000[0x40];
    /* 0x1040 */ SoundVec3 positions[16];
    /* 0x1100 */ u8 unk1100[0xCC];
    /* 0x11CC */ u8 enabled3d;
};

extern AsdSoundState g_asdSound;
void nw_snd_Sound3DActor_SetPosition(Sound3DActor *actor, const SoundVec3 *position);

void FUN_002cc1c0(u32 index, const SoundVec3 *position)
{
    if (g_asdSound.enabled3d != 0 && index < 16) {
        g_asdSound.positions[index] = *position;
        nw_snd_Sound3DActor_SetPosition(&g_asdSound.actors[index], &g_asdSound.positions[index]);
    }
}
}
