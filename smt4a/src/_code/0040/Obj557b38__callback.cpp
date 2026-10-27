#include "common.h"

struct ProgressCounter {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 position;
    /* 0x08 */ u8 unk08[0xc];
    /* 0x14 */ s32 limit;
};

extern "C" {

/* Virtual slot: answers whether the position has reached the limit. */
u32 _ZN9Obj557b388callbackEv(const ProgressCounter *self)
{
    return self->position >= self->limit;
}

} /* extern "C" */
