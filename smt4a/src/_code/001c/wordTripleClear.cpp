#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u16 c;
} Record;

/* Clears the record. */
void wordTripleClear(Record *record)
{
    record->a = 0;
    record->b = 0;
    record->c = 0;
}

} /* extern "C" */
