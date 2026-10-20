#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ u8 member4C[1];
} Object;

Object *gameGetPlayerData(void);

/* Returns the address of the member at 0x4C of the object gameGetPlayerData returns. */
u8 *FUN_0015687c(void)
{
    return gameGetPlayerData()->member4C;
}

} /* extern "C" */
