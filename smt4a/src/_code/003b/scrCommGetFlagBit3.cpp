#include "shard/Shard003B.h"

extern "C" {

typedef struct Rec16 {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 unk16;
} Rec16;

extern u32 scrGetArg(s32 index);
extern Rec16 *dataTable00FindById(u16 id);
extern void scrSetResult(u32 value);

/* Script command: result is the record's halfword at +0x16, masked with 0xf and shifted right by 3. */
u32 scrCommGetFlagBit3(s32 argIndex)
{
    u16 id = scrGetArg(argIndex);
    Rec16 *rec = dataTable00FindById(id);

    scrSetResult((rec->unk16 & 0xf) >> 3);
    return 1;
}

} /* extern "C" */
