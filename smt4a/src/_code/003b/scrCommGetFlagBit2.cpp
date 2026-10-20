#include "shard/Shard003B.h"

extern "C" {

typedef struct Rec16 {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 unk16;
} Rec16;

extern u32 scrGetArg(s32 index);
extern Rec16 *FUN_0019cac4(u16 id);
extern void scrSetResult(u32 value);

/* Script command: result is the record's halfword at +0x16, masked with 0x7 and shifted right by 2. */
u32 scrCommGetFlagBit2(s32 argIndex)
{
    u16 id = scrGetArg(argIndex);
    Rec16 *rec = FUN_0019cac4(id);

    scrSetResult((rec->unk16 & 0x7) >> 2);
    return 1;
}

} /* extern "C" */
