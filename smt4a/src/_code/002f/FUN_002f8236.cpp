#include "common.h"

extern "C" {

typedef struct Quad {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
    /* 0x0C */ u32 d;
} Quad;

/* Clears the four words. */
void FUN_002f8236(Quad *object)
{
    object->a = 0;
    object->b = 0;
    object->c = 0;
    object->d = 0;
}

} /* extern "C" */
