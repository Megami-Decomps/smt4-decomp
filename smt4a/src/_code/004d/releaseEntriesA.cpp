#include "shard/Shard004D.h"

extern "C" {

typedef struct CountAt30 {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ s16 count;
} CountAt30;

extern void FUN_001641c4(void);

/* Releases `count` entries (halfword at +0x30) and clears the count. */
void releaseEntriesA(CountAt30 *obj)
{
    s32 i;

    for (i = 0; i < obj->count; i++) {
        FUN_001641c4();
    }
    obj->count = 0;
}

} /* extern "C" */
