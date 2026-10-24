#include "common.h"

struct ChildOwner9c {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ f32 value;
    /* 0x0c */ u8 unk0c[0x90];
    /* 0x9c */ void * child;
};

extern "C" {

void FUN_002198b4(void *child);

/* Virtual setter: stores the value, then lets the child object react. */
void FUN_002f892c(ChildOwner9c *self, f32 value)
{
    self->value = value;
    FUN_002198b4(self->child);
}

} /* extern "C" */
