#include "common.h"

extern "C" {

struct FUN_0010c9aaTarget;

struct FUN_0010c9aaTargetVtable {
    u8 unk00[0x28];
    void (*method)(FUN_0010c9aaTarget *self);
};

struct FUN_0010c9aaTarget {
    const FUN_0010c9aaTargetVtable *vtable;
};

struct FUN_0010c9aaView {
    u8 unk00[0x90];
    FUN_0010c9aaTarget * target;
};

void FUN_0010c9aa(FUN_0010c9aaView *self)
{
    if (self->target != NULL) {
        self->target->vtable->method(self->target);
    }
}

} /* extern "C" */
