#include "common.h"

struct ByteStatus {
    /* 0x000 */ u8 unk000[0x330];
    /* 0x330 */ s8 state;
};

extern "C" {

/* Returns the signed state byte. */
s32 FUN_00121e50(const ByteStatus *work)
{
    return work->state;
}

} /* extern "C" */
