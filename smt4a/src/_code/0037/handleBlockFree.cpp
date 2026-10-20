#include "shard/Shard0037.h"

extern "C" {

typedef struct HandleBlock {
    /* 0x000 */ u8 unk000[0x13C];
    /* 0x13C */ u32 unk13C;
    /* 0x140 */ void *unk140;
    /* 0x144 */ void *unk144;
} HandleBlock;

extern void handleBlockUnref(void *p);
extern void handleBlockRefDrop(void *p);
extern void geometryDestroy(u32 handle);
extern void asdMemFree(void *ptr);

/* Releases the handles held by the object, then the object. */
void handleBlockFree(HandleBlock *block)
{
    if (block->unk140 != NULL) {
        handleBlockUnref(block->unk140);
    }
    if (block->unk144 != NULL) {
        handleBlockRefDrop(block->unk144);
    }
    geometryDestroy(block->unk13C);
    asdMemFree(block);
}

} /* extern "C" */
