#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u8 value;
} Scene;
extern Scene *g_infoWin;

/* Stores `value` in the byte at 0x30 of the scene. */
void infoWinSetValue(u8 value)
{
    g_infoWin->value = value;
}

} /* extern "C" */
