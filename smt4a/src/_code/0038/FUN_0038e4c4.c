/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038e4c4` (_code @ 0x38e4c4, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00184758. */


/* WARNING: Removing unreachable block (ram,0x0038e4f0) */
/* WARNING: Removing unreachable block (ram,0x0038e528) */
/* WARNING: Removing unreachable block (ram,0x0038e514) */
/* WARNING: Removing unreachable block (ram,0x00184c30) */
/* WARNING: Removing unreachable block (ram,0x0038e53c) */
/* WARNING: Removing unreachable block (ram,0x0038e548) */
/* WARNING: Removing unreachable block (ram,0x0038e554) */
/* WARNING: Removing unreachable block (ram,0x0038e54c) */
/* WARNING: Removing unreachable block (ram,0x0038e504) */
/* WARNING: Removing unreachable block (ram,0x0038e510) */
/* WARNING: Removing unreachable block (ram,0x0038e508) */
/* WARNING: Removing unreachable block (ram,0x0038e540) */
/* WARNING: Removing unreachable block (ram,0x0038e560) */

void FUN_0038e4c4(int param_1)

{
/* irregular: 14 native warning(s); review required */
  FUN_00184758(param_1 + 0x12b8,0,0);
  if (*(int *)(param_1 + 0x1310) != 0) {
    *(unsigned short *)(param_1 + 0x1314) = 0x2d;
    *(unsigned short *)(param_1 + 0x1316) = 0;
    *(unsigned char *)(param_1 + 0x133f) = 0;
    *(unsigned char *)(param_1 + 0x1342) = 0;
    *(unsigned char *)(param_1 + 0x1318) = 0;
    *(unsigned int *)(param_1 + 0x12d8) = *(unsigned int *)(*(int *)(param_1 + 0x1310) + 0x21c);
  }
  return;
}
