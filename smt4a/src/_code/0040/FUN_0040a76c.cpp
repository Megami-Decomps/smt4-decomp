/* Built with --cpu=5TE (see flags_W4Match4b.txt). */
#include "common.h"

extern "C" {

typedef struct Half {
    /* 0x00 */ u8 flags;
    /* 0x01 */ u8 mode;
} Half;

Half *gameDataBlocksGetHalf280C4(void);

/* Sets the block's mode byte and sets flag 4 unless flag 2 is already set. */
void FUN_0040a76c(u32 unused, u8 mode)
{
    Half *half = gameDataBlocksGetHalf280C4();

    half->mode = mode;
    if ((half->flags & 2) == 0) {
        half->flags |= 4;
    }
}

} /* extern "C" */
