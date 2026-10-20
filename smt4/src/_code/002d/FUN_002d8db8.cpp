/* NON_MATCHING: the code is identical; retail has one extra, unreferenced literal word (0x38) in front of the pool that the built code does not emit */
/* Script command: asks the sequence to switch to state 8 if the object is flagged or the global is not -1. Returns 1. */
#include "common.h"

extern "C" {

struct Obj002d8db8 {
    /* 0x000 */ u8 unk000[0x2f8];
    /* 0x2f8 */ u8 flagged;
};

extern s32 DAT_0049fd14;

void asdSequenceRequest(s32 state, const void *arg, u32 size);

u32 FUN_002d8db8(Obj002d8db8 *obj)
{
    if (obj->flagged != 0 || DAT_0049fd14 != -1) {
        asdSequenceRequest(8, NULL, 0);
    }
    return 1;
}

}
