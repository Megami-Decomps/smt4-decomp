#include "shard/Shard0048.h"

extern "C" {

typedef struct TbcrBlock {
    /* 0x00 */ s32 magic;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s32 unk08;
} TbcrBlock;

/* The word at +8 of a "TBCR" block, or 0 when it is not one. */
s32 FUN_0048168c(TbcrBlock *block)
{
    s32 value;

    if (block != NULL && block->magic == 0x52434254) {
        value = block->unk08;
    } else {
        value = 0;
    }
    return value;
}

} /* extern "C" */
