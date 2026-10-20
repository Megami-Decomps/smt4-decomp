#include "common.h"

extern "C" {

typedef struct Triple {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 unk8;
} Triple;

void FUN_002c29c4(Triple *triple)
{
    triple->unk0 = 0;
    triple->unk4 = 0;
    triple->unk8 = 0;
}

} /* extern "C" */
