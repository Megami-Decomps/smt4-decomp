#include "common.h"

extern "C" {

struct FUN_00123baaTarget;

struct FUN_00123baaTargetVtable {
    u8 unk00[0x64];
    void (*method)(FUN_00123baaTarget *self);
};

struct FUN_00123baaTarget {
    const FUN_00123baaTargetVtable *vtable;
};

struct FUN_00123baaView {
    u8 unk00[0x90];
    FUN_00123baaTarget * target;
};

void FUN_00123baa(FUN_00123baaView *self)
{
    if (self->target != NULL) {
        self->target->vtable->method(self->target);
    }
}

} /* extern "C" */
