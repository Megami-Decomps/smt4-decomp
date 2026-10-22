#include "ui/FrameTex.h"

extern "C" {

extern FrameWorkA *g_frameTex;

/* Sets the flag at 0x148C and clears the bytes at 0xFAE and 0xFAD of the record at 0x57F65C. */
void FUN_002c2610(void)
{
    FrameWorkA *record;

    record = g_frameTex;
    g_frameTex->unk148C = 1;
    record->unkFAE = 0;
    record->unkFAD = 0;
}

} /* extern "C" */
