#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x000 */ u8 unk000[0xE8];
    /* 0x0E8 */ s32 index;
} Holder;

/* Returns 1 when the index is in 1..299. */
u32 FUN_00302fce(Holder *object)
{
    if (object->index - 1U < 299) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
