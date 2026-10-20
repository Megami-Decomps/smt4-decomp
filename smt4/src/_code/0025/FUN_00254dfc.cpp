#include "common.h"

extern "C" {

typedef struct Triple {
    /* 0x0 */ u16 a;
    /* 0x2 */ u16 b;
    /* 0x4 */ u16 c;
} Triple;

void FUN_00254dfc(Triple *triple)
{
    triple->a = 0;
    triple->b = 0;
    triple->c = 0;
}

} /* extern "C" */
