#include "classes/Obj5586e0.h"
#include "classes/Obj558be0.h"

extern "C" {
extern const u8 _ZTV9Obj558be0[];
void _ZN9Obj55afc4D1Ev(u8 *base);
void FUN_002f30e0(void *self, u32 child);
u8 *_ZN9Obj5586e0D1Ev(u8 *member);
u8 *FUN_002f30fc(u8 *member);

/* Kept as a C entry point: untyped subobject destructors return adjusted owners. */
void _ZN9Obj558be0D1Ev(Obj558be0 *self)
{
    u8 *member;
    *(const void **)self = _ZTV9Obj558be0 + 8;
    self->stop();
    FUN_002f30e0(self, self->childB);
    FUN_002f30e0(self, self->childA);
    member = _ZN9Obj5586e0D1Ev((u8 *)self + 0x120);
    member = FUN_002f30fc(member - 0x58);
    member = FUN_002f30fc(member - 0x50);
    _ZN9Obj55afc4D1Ev(member - 0x78);
}
} /* extern "C" */
