#include "common.h"

extern "C" {

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u32 first;
    /* 0x84 */ u32 second;
} Inner;

typedef struct Global59dbc0 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Inner *inner;
} Global59dbc0;
extern Global59dbc0 g_asdCamera;

/* Returns the word at 0x84 of the inner object of the global at 0x59DBC0 when `id` is 2, otherwise the word at 0x80. */
u32 FUN_001c5b4c(s32 id)
{
    u32 value;

    if (id == 2) {
        value = g_asdCamera.inner->second;
    } else {
        value = g_asdCamera.inner->first;
    }
    return value;
}

} /* extern "C" */
