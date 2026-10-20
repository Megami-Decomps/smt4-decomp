#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ u8 data[0x10];
    /* 0x68 */ u8 hasData;
} Record;

void *rt_memcpy(void *dst, const void *src, u32 size);

/* Copies the record's 16-byte data block to `out`, if the record has one and `out` is given. */
void FUN_001208fe(Record *record, void *out)
{
    if (record->hasData != 0 && out != NULL) {
        rt_memcpy(out, record->data, 0x10);
    }
}

} /* extern "C" */
