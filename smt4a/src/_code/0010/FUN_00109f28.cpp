#include "common.h"

extern "C" {

void FUN_002f2faa(u8 *member);
void sharedRefRelease(void *buffer);

typedef struct BufferOwner {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ u8 member78[1];
} BufferOwner;

/* Destroys the member at 0x78 and frees `buffer`; returns 1, or 0 when there is no buffer. */
u32 FUN_00109f28(BufferOwner *owner, void *buffer)
{
    if (buffer != NULL) {
        FUN_002f2faa(owner->member78);
        sharedRefRelease(buffer);
        return 1;
    }
    return 0;
}

} /* extern "C" */
