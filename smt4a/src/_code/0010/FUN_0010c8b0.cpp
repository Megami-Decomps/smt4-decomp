#include "common.h"

extern "C" {

struct FUN_0010c8b0Target;

struct FUN_0010c8b0TargetVtable {
    u8 unk00[0x40];
    void (*method)(FUN_0010c8b0Target *self, u32 value);
};

struct FUN_0010c8b0Target {
    const FUN_0010c8b0TargetVtable *vtable;
};

struct FUN_0010c8b0View {
    u8 unk00[0x90];
    FUN_0010c8b0Target * target;
};

void FUN_0010c8b0(FUN_0010c8b0View *self, u32 value)
{
    if (self->target != NULL) {
        self->target->vtable->method(self->target, value);
    }
}

} /* extern "C" */
