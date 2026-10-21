#include "common.h"

extern "C" {

typedef struct Inner {
    /* 0x000 */ u8 unk000[0x80];
    /* 0x080 */ u8 *first;
    /* 0x084 */ u8 *second;
    /* 0x088 */ u8 areaA[0x50C];
    /* 0x594 */ u8 areaB[1];
} Inner;

typedef struct Global59dbc0 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Inner *inner;
} Global59dbc0;
extern Global59dbc0 g_asdCamera;

/* Points the inner object's two pointers at its areas at 0x88 and 0x594. */
void asdCameraInitAreas(void)
{
    Inner *inner;
    u8 *areaB;

    inner = g_asdCamera.inner;
    areaB = g_asdCamera.inner->areaB;
    g_asdCamera.inner->first = g_asdCamera.inner->areaA;
    inner->second = areaB;
}

} /* extern "C" */
