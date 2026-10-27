#include "common.h"

extern "C" {

struct FUN_0010c906Target;

struct FUN_0010c906TargetVtable {
    u8 unk00[0x58];
    void (*method)(FUN_0010c906Target *self, u32 value);
};

struct FUN_0010c906Target {
    const FUN_0010c906TargetVtable *vtable;
};

struct FUN_0010c906View {
    u8 unk00[0x90];
    FUN_0010c906Target * target;
};

void FUN_0010c906(FUN_0010c906View *self, u32 value)
{
    if (self->target != NULL) {
        self->target->vtable->method(self->target, value);
    }
}

} /* extern "C" */
