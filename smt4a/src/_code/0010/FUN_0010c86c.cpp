#include "common.h"

extern "C" {

struct FUN_0010c86cTarget;

struct FUN_0010c86cTargetVtable {
    u8 unk00[0x20];
    void (*method)(FUN_0010c86cTarget *self);
};

struct FUN_0010c86cTarget {
    const FUN_0010c86cTargetVtable *vtable;
};

struct FUN_0010c86cView {
    u8 unk00[0x90];
    FUN_0010c86cTarget * target;
};

void FUN_0010c86c(FUN_0010c86cView *self)
{
    if (self->target != NULL) {
        self->target->vtable->method(self->target);
    }
}

} /* extern "C" */
