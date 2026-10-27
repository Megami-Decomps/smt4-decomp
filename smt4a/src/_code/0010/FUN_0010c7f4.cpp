#include "common.h"

extern "C" {

struct FUN_0010c7f4Target;

struct FUN_0010c7f4TargetVtable {
    u8 unk00[0x2c];
    void (*method)(FUN_0010c7f4Target *self);
};

struct FUN_0010c7f4Target {
    const FUN_0010c7f4TargetVtable *vtable;
};

struct FUN_0010c7f4View {
    u8 unk00[0x90];
    FUN_0010c7f4Target * target;
};

void FUN_0010c7f4(FUN_0010c7f4View *self)
{
    if (self->target != NULL) {
        self->target->vtable->method(self->target);
    }
}

} /* extern "C" */
