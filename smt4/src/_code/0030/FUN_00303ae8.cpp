#include "common.h"

struct Target00303ae8 {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 value;
};

struct Object00303ae8 {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ Target00303ae8 **target;
};

extern "C" {

extern u32 DAT_00472560;

/* Copies DAT_00472560 into the object's target (0x3c, through one more pointer). */
void FUN_00303ae8(Object00303ae8 *object)
{
    (*object->target)->value = DAT_00472560;
}

} /* extern "C" */
