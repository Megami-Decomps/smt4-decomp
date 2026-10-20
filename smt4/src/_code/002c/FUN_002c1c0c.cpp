#include "common.h"

extern "C" {

typedef struct File {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u32 unk8;
} File;

extern File *asdTMTexTableCallFileB(void);

u32 FUN_002c1c0c(void)
{
    File *file = asdTMTexTableCallFileB();

    return file->unk8;
}

} /* extern "C" */
