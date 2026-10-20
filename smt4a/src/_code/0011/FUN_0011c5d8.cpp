/* NON_MATCHING: retail has one 16-bit nop (not a two-halfword removed call) after the stores and builds the inner pointer from r4 + 0x80. */
#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

/* The object is built around an inner part at +0x80; `part` points at that inner part. */
typedef struct InnerPart {
    u8 unk00[0xc];
    u32 unk0c; /* 0x0c */
} InnerPart;

typedef struct Outer {
    u8 unk00[0x7c];
    u32 unk7c; /* 0x7c */
    InnerPart inner; /* 0x80 */
} Outer;

extern u8 DAT_0055a838;
extern u32 *FUN_0011e894(void);
extern u8 *FUN_002ed094(u32 *base);
extern InnerPart *FUN_003112b4(u8 *sub);

Outer *FUN_0011c5d8(void)
{
    u32 *base = FUN_0011e894();
    Outer *outer;

    *base = (u32)&DAT_0055a838;
    outer = (Outer *)((u8 *)FUN_003112b4(FUN_002ed094(base + 0x18) + 0x20) - 0x80);
    outer->unk7c = 0;
    outer->inner.unk0c = 3;
    asdDebugHookPtr(&outer->inner);
    return outer;
}

} /* extern "C" */
