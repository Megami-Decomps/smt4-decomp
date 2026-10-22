/* NON_MATCHING: literal pool order (retail places the 0.0f before the table address) swaps r5/r6
 * and moves two scheduled instructions; the stores otherwise match. */
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
    DAT_00447a28.count = 0;
    for (s32 i = 0; i < 160; i++) {
        CullVolume *volume = &DAT_004a1264[i];
        for (s32 j = 0; j < 8; j++) {
            volume->corners[j].x = 0.0f;
            volume->corners[j].y = 0.0f;
            volume->corners[j].z = 0.0f;
        }
        volume->center.x = 0.0f;
        volume->center.y = 0.0f;
        volume->center.z = 0.0f;
        for (s32 j = 0; j < 6; j++) {
            volume->planeNormals[j].x = 0.0f;
            volume->planeNormals[j].y = 0.0f;
            volume->planeNormals[j].z = 0.0f;
            volume->planeDistances[j] = 0.0f;
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
