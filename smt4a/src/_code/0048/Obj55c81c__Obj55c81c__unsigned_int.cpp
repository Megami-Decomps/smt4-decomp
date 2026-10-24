/* NON_MATCHING: retail stores `owner` ([r0,#8]) right after loading the vtable and reuses r1 for the zeros; built schedules that store after the flag byte. */
#include "classes/Obj55c81c.h"

Obj55c81c::Obj55c81c(u32 owner)
    : owner(owner)
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
