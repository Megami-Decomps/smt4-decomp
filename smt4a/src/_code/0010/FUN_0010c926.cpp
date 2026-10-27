#include "common.h"

extern "C" {

struct FUN_0010c926Target;

struct FUN_0010c926TargetVtable {
    u8 unk00[0x60];
    void (*method)(FUN_0010c926Target *self);
};

struct FUN_0010c926Target {
    const FUN_0010c926TargetVtable *vtable;
};

struct FUN_0010c926View {
    u8 unk00[0x90];
    FUN_0010c926Target * target;
};

void FUN_0010c926(FUN_0010c926View *self)
{
    if (self->target != NULL) {
        self->target->vtable->method(self->target);
    }
}

} /* extern "C" */
