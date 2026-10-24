#include "common.h"

struct Vec4 {
    f32 x, y, z, w;
};

struct Vec4Slot10 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Vec4 value;
};

struct Vec4Owner {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Vec4Slot10 *target;
};

extern "C" {

/* Virtual setter: copies a four-float vector into the owned object's offset 0x10. */
void FUN_0030c064(Vec4Owner *self, const Vec4 *value)
{
    self->target->value = *value;
}

} /* extern "C" */
