#include "common.h"

extern "C" {

/* Copyable record: a header assigned by FUN_002e7194, a word, two 0x78-byte blocks and a trailing word. */
typedef struct {
    u8 unk00[4];
    u8 header[0x30];    /* 0x04 */
    u32 unk34;          /* 0x34 */
    u8 blockA[0x78];    /* 0x38 */
    u8 blockB[0x78];    /* 0xb0 */
    u32 unk128;         /* 0x128 */
} Record;

int FUN_002e7194(u8 *dest, u8 *source);
int rt_memcpy_w(u8 *dest, u8 *source, int size);

/* Assignment: copies every part of `source` into `dest` and returns `dest`. */
Record *FUN_00103674(Record *dest, Record *source)
{
    FUN_002e7194(dest->header, source->header);
    dest->unk34 = source->unk34;
    rt_memcpy_w(dest->blockA, source->blockA, 0x78);
    rt_memcpy_w(dest->blockB, source->blockB, 0x78);
    dest->unk128 = source->unk128;
    return dest;
}

} /* extern "C" */
