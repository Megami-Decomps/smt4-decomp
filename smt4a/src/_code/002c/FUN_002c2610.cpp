#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x000 */ u8 unk000[0xFAD];
    /* 0xFAD */ u8 unkFAD;
    /* 0xFAE */ u8 unkFAE;
    /* 0xFAF */ u8 unkFAF[0x4DD];
    /* 0x148C */ u8 flag;
} Record;
extern Record *g_frameTex;

/* Sets the flag at 0x148C and clears the bytes at 0xFAE and 0xFAD of the record at 0x57F65C. */
void FUN_002c2610(void)
{
    Record *record;

    record = g_frameTex;
    g_frameTex->flag = 1;
    record->unkFAE = 0;
    record->unkFAD = 0;
}

} /* extern "C" */
