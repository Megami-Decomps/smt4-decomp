#include "common.h"

extern "C" {

struct FUN_0010c916Target;

struct FUN_0010c916TargetVtable {
    u8 unk00[0x3c];
    void (*method)(FUN_0010c916Target *self, u32 value);
};

struct FUN_0010c916Target {
    const FUN_0010c916TargetVtable *vtable;
};

struct FUN_0010c916View {
    u8 unk00[0x90];
    FUN_0010c916Target * target;
};

void FUN_0010c916(FUN_0010c916View *self, u32 value)
{
    if (self->target != NULL) {
        self->target->vtable->method(self->target, value);
    }
}

} /* extern "C" */
