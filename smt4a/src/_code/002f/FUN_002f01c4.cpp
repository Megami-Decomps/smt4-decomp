#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x000 */ u8 unk000[0x598];
    /* 0x598 */ u16 value;
} Scene;
extern Scene *DAT_00588fe8;

/* Stores `value` in the halfword at 0x598 of the scene at 0x588FE8, if there is one. */
void FUN_002f01c4(u16 value)
{
    if (DAT_00588fe8 != NULL) {
        DAT_00588fe8->value = value;
    }
}

} /* extern "C" */
