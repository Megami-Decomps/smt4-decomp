#include "common.h"

extern "C" {

typedef struct Global5c1bec {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
} Global5c1bec;
extern Global5c1bec DAT_005c1bec;

/* Returns the word at 0x4 of the global at 0x5C1BEC. */
u32 FUN_001af3a8(void)
{
    return DAT_005c1bec.unk04;
}

} /* extern "C" */
