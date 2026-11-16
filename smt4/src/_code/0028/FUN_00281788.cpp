/* NON_MATCHING: only r5/r6 swap (retail keeps the counts in r6 and the volume table in r5). */
#include "shard/S1Mover.h"

/* One culling volume (0x178 bytes): eight corners, a center and six bounding planes. */
struct CullVolume {
    /* 0x000 */ Vec3f corners[8];
    /* 0x060 */ u8 unk060[0xc];
    /* 0x06c */ Vec3f center;
    /* 0x078 */ u8 unk078[4];
    /* 0x07c */ Vec3f planeNormals[6];
    /* 0x0c4 */ f32 planeDistances[6];
    /* 0x0dc */ u8 unk0dc[0x80];
    /* 0x15c */ u16 unk15c;
    /* 0x15e */ u8 unk15e[8];
    /* 0x166 */ u16 unk166;
    /* 0x168 */ u16 unk168;
    /* 0x16a */ u16 unk16a;
    /* 0x16c */ u8 unk16c;
    /* 0x16d */ u8 unk16d;
    /* 0x16e */ u8 unk16e[6];
    /* 0x174 */ u16 unk174;
    /* 0x176 */ u16 unk176;
};

struct CullVolumeCounts {
    /* 0x00 */ s32 count;
    /* 0x04 */ s32 unk04;
};

struct GameStateCullView {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 cullVolume; /* -1: none */
};

extern "C" {
extern CullVolumeCounts DAT_00447a28;
extern CullVolume DAT_004a1264[160];
extern GameStateCullView g_gameState;

/* Clears every culling volume and the volume counts. */
void FUN_00281788(void)
{
    f32 zero = 0.0f;
    s32 i;
    s32 j;
    DAT_00447a28.count = 0;
    for (i = 0; i < 160; i++) {
        CullVolume *volume = &DAT_004a1264[i];
        for (j = 0; j < 8; j++) {
            volume->corners[j].x = zero;
            volume->corners[j].y = zero;
            volume->corners[j].z = zero;
        }
        volume->center.x = zero;
        volume->center.y = zero;
        volume->center.z = zero;
        for (j = 0; j < 6; j++) {
            volume->planeNormals[j].x = zero;
            volume->planeNormals[j].y = zero;
            volume->planeNormals[j].z = zero;
            volume->planeDistances[j] = zero;
        }
        volume->unk174 = 0;
        volume->unk176 = 0;
        volume->unk15c = 0;
        volume->unk166 = 0;
        volume->unk168 = 0;
        volume->unk16a = 0;
        volume->unk16c = 0;
        volume->unk16d = 0;
    }
    DAT_00447a28.unk04 = 0;
    g_gameState.cullVolume = -1;
}
}
