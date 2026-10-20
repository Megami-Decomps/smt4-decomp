#include "common.h"

extern "C" {

typedef struct Triple {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
} Triple;

/* Clears the three words. */
void FUN_002f9e5c(Triple *object)
{
    object->a = 0;
    object->b = 0;
    object->c = 0;
}

} /* extern "C" */
