#include "common.h"

extern "C" {

typedef struct Pair {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
} Pair;

/* Clears the two words. */
void clearWords2Alt(Pair *object)
{
    object->a = 0;
    object->b = 0;
}

} /* extern "C" */
