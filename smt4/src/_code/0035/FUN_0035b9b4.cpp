#include "common.h"

extern "C" {

typedef struct Dest {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 unk09;
    /* 0x0A */ u16 unk0A;
} Dest;

typedef struct Source {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 *values;
    /* 0x10 */ int position;
} Source;

/* Reads the next halfword of the source into dest->unk0A and clears dest->unk08. */
u32 FUN_0035b9b4(Source *source, Dest **dest)
{
    (*dest)->unk08 = 0;
    (*dest)->unk0A = source->values[source->position];
    source->position = source->position + 1;
    return 0;
}

} /* extern "C" */
