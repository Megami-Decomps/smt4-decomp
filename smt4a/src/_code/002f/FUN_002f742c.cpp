/* Returns 1 if the global flag byte is clear and the object's mode is not 0x40000000, else 0. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ s32 mode;
} Object;

typedef struct Globals {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ s8 locked;
} Globals;

extern Globals g_flagBlock;

u32 FUN_002f742c(Object *obj)
{
    if (g_flagBlock.locked == 0 && obj->mode != 0x40000000) {
        return 1;
    }
    return 0;
}

}
