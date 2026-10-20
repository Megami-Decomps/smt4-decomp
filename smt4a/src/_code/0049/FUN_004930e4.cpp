#include "common.h"

extern "C" {

typedef struct ModeLock {
    /* 0x0 */ s32 depth;   /* nesting count; the mode is only taken by the first entry */
    /* 0x4 */ s32 mode;
} ModeLock;

extern ModeLock DAT_00587fdc;

extern void FUN_0014afd0(s32 group, s32 index);

/* Enters a mode scope: the outermost entry records `mode` and, for modes 0x65-0x67, starts the matching group-0x13 item. */
void FUN_004930e4(s32 mode)
{
    if (DAT_00587fdc.depth == 0) {
        DAT_00587fdc.mode = mode;
        if (DAT_00587fdc.mode == 0x65) {
            FUN_0014afd0(0x13, 6);
        }
        if (DAT_00587fdc.mode == 0x66) {
            FUN_0014afd0(0x13, 7);
        }
        if (DAT_00587fdc.mode == 0x67) {
            FUN_0014afd0(0x13, 8);
        }
    }
    DAT_00587fdc.depth++;
}

} /* extern "C" */
