#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 value;
} Object;
extern Object *DAT_0057f578;

/* Stores `value` in the byte at 0x10 of the object at 0x57F578. */
void FUN_00284f90(u8 value)
{
    DAT_0057f578->value = value;
}

} /* extern "C" */
