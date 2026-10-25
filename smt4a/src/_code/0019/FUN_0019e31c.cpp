#include "common.h"
#include "shard/FUN_0019e31c.h"

extern "C" {

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ u32 value;
} Inner;

typedef struct Global59dbc0 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Inner *inner;
} Global59dbc0;
extern Global59dbc0 g_asdCamera;

/* Returns the word at 0x84 of the inner object of the global at 0x59DBC0. */
u32 FUN_0019e31c(void)
{
    return g_asdCamera.inner->value;
}

} /* extern "C" */
