#include "common.h"

extern "C" {

typedef struct Triple {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
} Triple;

/* Copies the three words. */
void _ZN18OnlineResultRecordaSERKS_(Triple *dest, const Triple *source)
{
    dest->a = source->a;
    dest->b = source->b;
    dest->c = source->c;
}

} /* extern "C" */
