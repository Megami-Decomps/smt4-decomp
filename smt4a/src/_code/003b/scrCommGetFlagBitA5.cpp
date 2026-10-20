#include "shard/Shard003B.h"

extern "C" {

typedef struct RecA5 {
    /* 0x00 */ u8 unk00[0xA5];
    /* 0xA5 */ u8 unkA5;
} RecA5;

extern u32 scrGetArg(s32 index);
extern RecA5 *FUN_0019cac4(u16 id);
extern void scrSetResult(u32 value);

/* Script command: result is bit 1 of the record's byte at +0xA5 (mask 3, shifted right by 1). */
u32 scrCommGetFlagBitA5(s32 argIndex)
{
    u16 id = scrGetArg(argIndex);
    RecA5 *rec = FUN_0019cac4(id);

    scrSetResult((rec->unkA5 & 3) >> 1);
    return 1;
}

} /* extern "C" */
