#include "shard/Shard003B.h"

extern "C" {

typedef struct HandlePair144 {
    /* 0x000 */ u8 unk000[0x140];
    /* 0x140 */ u32 unk140;
    /* 0x144 */ u32 unk144;
} HandlePair144;

extern void FUN_00222104(u32 handle);
extern void FUN_00222434(u32 handle);
extern u32 FUN_00201890(u32 handle);
extern u32 FUN_00201940(u32 handle);

/* Replaces `dst`'s handle with a copy of `src`'s (the +0x144 kind wins over the +0x140 kind). */
void handlePair144Copy(HandlePair144 *dst, HandlePair144 *src)
{
    if (src->unk144 != 0) {
        if (dst->unk144 != 0) {
            FUN_00222104(dst->unk144);
        }
        dst->unk144 = FUN_00201890(src->unk144);
    } else if (src->unk140 != 0) {
        if (dst->unk140 != 0) {
            FUN_00222434(dst->unk140);
        }
        dst->unk140 = FUN_00201940(src->unk140);
    }
}

} /* extern "C" */
