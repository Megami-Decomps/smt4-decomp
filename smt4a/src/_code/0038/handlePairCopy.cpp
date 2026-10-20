#include "shard/Shard0038.h"

extern "C" {

typedef struct HandlePair {
    /* 0x00 */ u8 unk00[0xCC];
    /* 0xCC */ u32 unkCC;
    /* 0xD0 */ u32 unkD0;
} HandlePair;

extern void handleBlockRefDrop(u32 handle);
extern void handleBlockUnref(u32 handle);
extern u32 handleBlockRefCreate(u32 handle);
extern u32 handleRefIncrement(u32 handle);

/* Replaces `dst`'s handle with a copy of `src`'s (the +0xD0 kind wins over the +0xCC kind). */
void handlePairCopy(HandlePair *dst, HandlePair *src)
{
    if (src->unkD0 != 0) {
        if (dst->unkD0 != 0) {
            handleBlockRefDrop(dst->unkD0);
        }
        dst->unkD0 = handleBlockRefCreate(src->unkD0);
    } else if (src->unkCC != 0) {
        if (dst->unkCC != 0) {
            handleBlockUnref(dst->unkCC);
        }
        dst->unkCC = handleRefIncrement(src->unkCC);
    }
}

} /* extern "C" */
