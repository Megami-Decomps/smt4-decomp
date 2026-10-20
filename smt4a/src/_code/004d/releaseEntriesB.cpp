#include "shard/Shard004D.h"

extern "C" {

typedef struct CountAt5A {
    /* 0x00 */ u8 unk00[0x5a];
    /* 0x5a */ s16 count;
} CountAt5A;

extern void FUN_001641c4(void);

/* Releases `count` entries (halfword at +0x5a) and clears the count. */
void releaseEntriesB(CountAt5A *obj)
{
    s32 i;

    for (i = 0; i < obj->count; i++) {
        FUN_001641c4();
    }
    obj->count = 0;
}

} /* extern "C" */
