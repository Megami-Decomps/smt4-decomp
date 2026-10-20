#include "common.h"

extern "C" {

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u32 value;
} Inner;

typedef struct Global59dbc0 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Inner *inner;
} Global59dbc0;
extern Global59dbc0 DAT_0059dbc0;

/* Returns the word at 0x80 of the inner object of the global at 0x59DBC0. */
u32 FUN_00152f54(void)
{
    return DAT_0059dbc0.inner->value;
}

} /* extern "C" */
