#include "common.h"

extern "C" {

typedef struct Pair {
    /* 0x00 */ u32 word;
    /* 0x04 */ u16 half;
} Pair;

/* Clears the word and the halfword. */
void FUN_001a90e0(Pair *object)
{
    object->word = 0;
    object->half = 0;
}

} /* extern "C" */
