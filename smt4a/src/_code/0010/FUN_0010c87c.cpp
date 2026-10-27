#include "common.h"

extern "C" {

struct FUN_0010c87cTarget;

struct FUN_0010c87cTargetVtable {
    u8 unk00[0x30];
    void (*method)(FUN_0010c87cTarget *self);
};

struct FUN_0010c87cTarget {
    const FUN_0010c87cTargetVtable *vtable;
};

struct FUN_0010c87cView {
    u8 unk00[0x90];
    FUN_0010c87cTarget * target;
};

void FUN_0010c87c(FUN_0010c87cView *self)
{
    if (self->target != NULL) {
        self->target->vtable->method(self->target);
    }
}

} /* extern "C" */
