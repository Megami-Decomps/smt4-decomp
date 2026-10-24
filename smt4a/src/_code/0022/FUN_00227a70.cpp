#include "common.h"

struct MapCollision {
    u8 loaded;         // 0x00
    u8 ready;          // 0x01
    u8 unk02[2];       // 0x02
    u32 unk04;         // 0x04
    u32 unk08;         // 0x08
    u32 unk0C;         // 0x0C
    u32 unk10;         // 0x10
    u32 unk14;         // 0x14
    void *bufferA;     // 0x18
    void *bufferB;     // 0x1C
    void *bufferC;     // 0x20
    void *bufferD;     // 0x24
};

extern "C" {

extern MapCollision g_mapCollision;

void asdMemFree(void *block);

/* Frees the collision buffers and clears the collision state. */
void FUN_00227a70(void)
{
    if (g_mapCollision.bufferA != NULL) {
        asdMemFree(g_mapCollision.bufferA);
        g_mapCollision.bufferA = NULL;
    }
    if (g_mapCollision.bufferB != NULL) {
        asdMemFree(g_mapCollision.bufferB);
        g_mapCollision.bufferB = NULL;
    }
    if (g_mapCollision.bufferC != NULL) {
        asdMemFree(g_mapCollision.bufferC);
        g_mapCollision.bufferC = NULL;
    }
    if (g_mapCollision.bufferD != NULL) {
        asdMemFree(g_mapCollision.bufferD);
        g_mapCollision.bufferD = NULL;
    }
    g_mapCollision.unk04 = 0;
    g_mapCollision.unk08 = 0;
    g_mapCollision.unk0C = 0;
    g_mapCollision.unk10 = 0;
    g_mapCollision.unk14 = 0;
    g_mapCollision.loaded = 0;
    g_mapCollision.ready = 0;
}

} /* extern "C" */
