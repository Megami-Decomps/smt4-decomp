#include "shard/Shard003B.h"

extern "C" {

typedef struct HandlePair144 {
    /* 0x000 */ u8 unk000[0x140];
    /* 0x140 */ u32 unk140;
    /* 0x144 */ u32 unk144;
} HandlePair144;

extern void handleBlockRefDrop(u32 handle);
extern void handleBlockUnref(u32 handle);
extern u32 handleBlockRefCreate(u32 handle);
extern u32 handleRefIncrement(u32 handle);

/* Replaces `dst`'s handle with a copy of `src`'s (the +0x144 kind wins over the +0x140 kind). */
void handlePair144Copy(HandlePair144 *dst, HandlePair144 *src)
{
    if (src->unk144 != 0) {
        if (dst->unk144 != 0) {
            handleBlockRefDrop(dst->unk144);
        }
        dst->unk144 = handleBlockRefCreate(src->unk144);
    } else if (src->unk140 != 0) {
        if (dst->unk140 != 0) {
            handleBlockUnref(dst->unk140);
        }
        dst->unk140 = handleRefIncrement(src->unk140);
    }
}

} /* extern "C" */
