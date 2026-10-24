#include "common.h"

extern "C" {

/* The map collision state: a loaded flag, five counters and four owned buffers. */
struct MapCollision {
    /* 0x00 */ u8 loaded;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 counters[5];
    /* 0x18 */ void *bufferA;
    /* 0x1C */ void *bufferB;
    /* 0x20 */ void *bufferC;
    /* 0x24 */ void *bufferD;
};

extern MapCollision g_mapCollision;
void asdMemFree(void *block);

/* Frees the collision buffers and clears the collision state. */
void mapCollisionRelease(void)
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
    g_mapCollision.counters[0] = 0;
    g_mapCollision.counters[1] = 0;
    g_mapCollision.counters[2] = 0;
    g_mapCollision.counters[3] = 0;
    g_mapCollision.counters[4] = 0;
    g_mapCollision.loaded = 0;
}

} /* extern "C" */
