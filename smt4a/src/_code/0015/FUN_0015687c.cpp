#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ u8 member4C[1];
} Object;

Object *FUN_001801a4(void);

/* Returns the address of the member at 0x4C of the object FUN_001801a4 returns. */
u8 *FUN_0015687c(void)
{
    return FUN_001801a4()->member4C;
}

} /* extern "C" */
