#include "shard/Shard003B.h"

extern "C" {

typedef struct Rec16 {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 unk16;
} Rec16;

extern u32 scrGetArg(s32 index);
extern Rec16 *dataTable00FindById(u16 id);
extern void scrSetResult(u32 value);

/* Script command: result is the record's halfword at +0x16, masked with 0x3F and shifted right by 5. */
u32 scrCommGetFlagBit5(s32 argIndex)
{
    Rec16 *rec = dataTable00FindById(scrGetArg(argIndex));

    scrSetResult((rec->unk16 & 0x3F) >> 5);
    return 1;
}

} /* extern "C" */
