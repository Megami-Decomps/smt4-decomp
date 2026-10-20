/* Tail call into the function that follows (the relative pointer at +8 turned into an address). */
#include "common.h"

extern "C" {

struct Obj0036ead8 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 offset; /* from this field; 0: none */
};

void FUN_0036eaf0(void *a, void *b, void *c);

void relativePtrForward(Obj0036ead8 *o, void *a, void *c)
{
    s32 *field = &o->offset;
    u32 target = *field;

    if (target != 0) {
        target += (u32)field;
    }
    FUN_0036eaf0(a, (void *)target, c);
}

}
