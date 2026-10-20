#include "common.h"

extern "C" {

void FUN_002eeb98(void *object, u32 field, u32 a, u32 b);

typedef struct WordTriple {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ u32 third;
} WordTriple;

/* Calls FUN_002eeb98 with the object's third word. */
void FUN_0010715a(WordTriple *object, u32 a, u32 b)
{
    FUN_002eeb98(object, object->third, a, b);
}

} /* extern "C" */
