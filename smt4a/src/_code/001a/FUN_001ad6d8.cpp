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
extern Global59dbc0 DAT_0059dbc0;

/* Points the inner object's two pointers at its areas at 0x88 and 0x594. */
void FUN_001ad6d8(void)
{
    Inner *inner;
    u8 *areaB;

    inner = DAT_0059dbc0.inner;
    areaB = DAT_0059dbc0.inner->areaB;
    DAT_0059dbc0.inner->first = DAT_0059dbc0.inner->areaA;
    inner->second = areaB;
}

} /* extern "C" */
