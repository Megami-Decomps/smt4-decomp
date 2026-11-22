#include "shard/S1Mover.h"
#include "game/GameState.h"

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


extern "C" {
extern CullVolumeCounts g_entryTableInfo;
extern CullVolume g_namedEntryTable[160];

/* Clears every culling volume and the volume counts. */
void cullVolumeTableClear(void)
{
    s32 i;
    s32 j;
    g_entryTableInfo.count = 0;
    for (i = 0; i < 160; i++) {
        for (j = 0; j < 8; j++) {
            g_namedEntryTable[i].corners[j].x = 0.0f;
            g_namedEntryTable[i].corners[j].y = 0.0f;
            g_namedEntryTable[i].corners[j].z = 0.0f;
        }
        g_namedEntryTable[i].center.x = 0.0f;
        g_namedEntryTable[i].center.y = 0.0f;
        g_namedEntryTable[i].center.z = 0.0f;
        for (j = 0; j < 6; j++) {
            g_namedEntryTable[i].planeNormals[j].x = 0.0f;
            g_namedEntryTable[i].planeNormals[j].y = 0.0f;
            g_namedEntryTable[i].planeNormals[j].z = 0.0f;
            g_namedEntryTable[i].planeDistances[j] = 0.0f;
        }
        g_namedEntryTable[i].unk174 = 0;
        g_namedEntryTable[i].unk176 = 0;
        g_namedEntryTable[i].unk15c = 0;
        g_namedEntryTable[i].unk166 = 0;
        g_namedEntryTable[i].unk168 = 0;
        g_namedEntryTable[i].unk16a = 0;
        g_namedEntryTable[i].unk16c = 0;
        g_namedEntryTable[i].unk16d = 0;
    }
    g_entryTableInfo.unk04 = 0;
    g_gameState.area = -1;
}
}
