#include "shard/Shard0038.h"

extern "C" {

typedef struct HandlePair {
    /* 0x00 */ u8 unk00[0xCC];
    /* 0xCC */ u32 unkCC;
    /* 0xD0 */ u32 unkD0;
} HandlePair;

extern void FUN_00222104(u32 handle);
extern void FUN_00222434(u32 handle);
extern u32 FUN_00201890(u32 handle);
extern u32 FUN_00201940(u32 handle);

/* Replaces `dst`'s handle with a copy of `src`'s (the +0xD0 kind wins over the +0xCC kind). */
void handlePairCopy(HandlePair *dst, HandlePair *src)
{
    if (src->unkD0 != 0) {
        if (dst->unkD0 != 0) {
            FUN_00222104(dst->unkD0);
        }
        dst->unkD0 = FUN_00201890(src->unkD0);
    } else if (src->unkCC != 0) {
        if (dst->unkCC != 0) {
            FUN_00222434(dst->unkCC);
        }
        dst->unkCC = FUN_00201940(src->unkCC);
    }
}

} /* extern "C" */
