#include "sys/FlagBlock.h"

extern "C" {


/* 300-byte record. */
typedef struct {
    u8 data[300];
} Record;

/* Owner with an inline default record at 0x0c and a record array pointer at 0x08. */
typedef struct {
    u8 unk00[8];
    Record *records;    /* 0x08 */
    Record fallback;    /* 0x0c */
} RecordOwner;


int FUN_002f8548(u32 id);

/* Returns the record selected by the global id (1-based index into the array), or the owner's fallback record. */
Record *FUN_00301454(RecordOwner *owner)
{
    int index;

    if (g_flagBlock.flag0d != 0 && (index = FUN_002f8548(g_flagBlock.id94)) != 0) {
        return owner->records + index;
    }
    return &owner->fallback;
}

} /* extern "C" */
