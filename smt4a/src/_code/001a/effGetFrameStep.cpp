#include "common.h"

extern "C" {

typedef struct Global5b3268 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
} Global5b3268;
extern Global5b3268 DAT_005b3268;

/* Returns the word at 0x4 of the global at 0x5B3268. */
u32 effGetFrameStep(void)
{
    return DAT_005b3268.unk04;
}

} /* extern "C" */
