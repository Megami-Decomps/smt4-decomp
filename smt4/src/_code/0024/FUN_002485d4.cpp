#include "common.h"
#include "code/Code0024_Smt4.h"

extern "C" {

typedef struct Source {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 words[8];
} Source;

/* Copies the 8 halfwords at +0x34 of `source` (if any) into `dst`. */
void FUN_002485d4(Source *source, u16 *dst)
{
    if (source != NULL) {
        dst[0] = source->words[0];
        dst[1] = source->words[1];
        dst[2] = source->words[2];
        dst[3] = source->words[3];
        dst[4] = source->words[4];
        dst[5] = source->words[5];
        dst[6] = source->words[6];
        dst[7] = source->words[7];
    }
}

} /* extern "C" */
