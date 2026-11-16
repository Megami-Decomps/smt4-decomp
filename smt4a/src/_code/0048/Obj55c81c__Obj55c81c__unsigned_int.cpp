/* NON_MATCHING: store order now matches retail; only the vtable (r2) and the constant 1 (r3) swap registers. */
#include "classes/Obj55c81c.h"

Obj55c81c::Obj55c81c(u32 owner)
    : Obj55c81cOwner(owner)
{
    unk28 = 0;
    child = NULL;
    unk78 = 0;
    unk7c = 0;
    flags = 1;
    for (s32 i = 0; i < 4; i++) {
        unk10[i] = 0;
    }
    for (s32 i = 0; i < 3; i++) {
        unk2c[i] = 0.0f;
    }
    for (s32 i = 0; i < 3; i++) {
        unk44[i] = 0.0f;
    }
    for (s32 i = 0; i < 3; i++) {
        scale[i] = 1.0f;
    }
    unk94 = 0;
}
