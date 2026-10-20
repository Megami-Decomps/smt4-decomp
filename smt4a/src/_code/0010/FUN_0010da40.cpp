#include "common.h"

extern "C" {

typedef struct IndexHolder {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ s32 index;
} IndexHolder;

/* Returns 1 when the index is in 1..299. */
u32 FUN_0010da40(IndexHolder *object)
{
    if ((u32)(object->index - 1) < 299) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
