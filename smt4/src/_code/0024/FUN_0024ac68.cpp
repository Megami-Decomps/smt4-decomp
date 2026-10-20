#include "common.h"

extern "C" {

typedef struct Work {
    /* 0x000 */ u8 unk000[0xEDC];
    /* 0xEDC */ u8 value;
} Work;

extern Work *g_frameTex;

void FUN_0024ac68(u8 value)
{
    g_frameTex->value = value;
}

} /* extern "C" */
