#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 value;
} Record;
extern Record *g_sWin;

/* Returns whether the word at 0x8 of the record at 0x57F57C is nonzero. */
u8 FUN_00208b68(void)
{
    return g_sWin->value != 0;
}

} /* extern "C" */
