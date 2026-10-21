/* Built with -Ospace (see flags_W4Match4b.txt). */
#include "common.h"

extern "C" {

typedef struct Vector8 {
    /* 0x0 */ u8 *begin;  /* 8-byte elements */
    /* 0x4 */ u8 *end;
} Vector8;

void strHolderAssignU32(u32 holder, u32 *value);
void strHolderAssignU64Alias(u32 holder, u8 *value);
u32 vectorCount8_0030d3b2(Vector8 *vec);

/* Assigns the element count, then each 8-byte element, to the holder. */
void strHolderAssignVector(u32 holder, Vector8 *vec)
{
    u32 count = vectorCount8_0030d3b2(vec);
    u8 *end;
    u8 *it;

    strHolderAssignU32(holder, &count);
    end = vec->end;
    for (it = vec->begin; it != end; it += 8) {
        strHolderAssignU64Alias(holder, it);
    }
}

} /* extern "C" */
