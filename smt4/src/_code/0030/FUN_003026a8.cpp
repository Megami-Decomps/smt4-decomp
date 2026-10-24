#include "common.h"

struct ChildOwner9c {
    /* 0x00 */ u8 unk00[0x9c];
    /* 0x9c */ void * child;
};

struct Vec4;

extern "C" {

void FUN_0030c064(void *owner, const Vec4 *value);

/* Virtual setter: forwards the vector to the child object. */
void FUN_003026a8(ChildOwner9c *self, const Vec4 *value)
{
    FUN_0030c064(self->child, value);
}

} /* extern "C" */
