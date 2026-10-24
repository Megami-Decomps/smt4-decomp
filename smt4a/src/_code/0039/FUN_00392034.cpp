#include "common.h"

struct Target00392034 {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 value;
};

struct Object00392034 {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ Target00392034 **target;
};

extern "C" {

extern u32 DAT_005c1130;

/* Copies DAT_005c1130 into the object's target (0x3c, through one more pointer). */
void FUN_00392034(Object00392034 *object)
{
    (*object->target)->value = DAT_005c1130;
}

} /* extern "C" */
