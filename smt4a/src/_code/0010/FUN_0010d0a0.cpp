#include "common.h"

extern "C" {

struct FUN_0010d0a0Target;

struct FUN_0010d0a0TargetVtable {
    u8 unk00[0x24];
    void (*method)(FUN_0010d0a0Target *self);
};

struct FUN_0010d0a0Target {
    const FUN_0010d0a0TargetVtable *vtable;
};

struct FUN_0010d0a0View {
    u8 unk00[0x94];
    FUN_0010d0a0Target * target;
};

void FUN_0010d0a0(FUN_0010d0a0View *self)
{
    if (self->target != NULL) {
        self->target->vtable->method(self->target);
    }
}

} /* extern "C" */
