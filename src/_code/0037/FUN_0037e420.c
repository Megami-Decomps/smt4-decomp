/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e420` (_code @ 0x37e420, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002a49d0. */
/* Supplied declaration required: FUN_0037e8cc. */


void FUN_0037e420(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_0037e8cc();
  *(unsigned char *)(param_1 + 0x5d) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0x3f800000;
  *(unsigned char *)(param_1 + 0x5e) = 0x40;
  *(unsigned int *)(param_1 + 100) = 0;
  *(unsigned int *)(param_1 + 0x6c) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x68) = 0;
  *(unsigned int *)(param_1 + 0x88) = 0x3f800000;
  *(unsigned char *)(param_1 + 0x91) = 0x40;
  *(unsigned char *)(param_1 + 0x92) = 0;
  *(unsigned char *)(param_1 + 0x94) = 0;
  *(unsigned char *)(param_1 + 0x95) = 0;
  *(unsigned char *)(param_1 + 0x93) = 0x7f;
  FUN_002a49d0(param_1 + 0x78);
  *(unsigned char *)(param_1 + 0x5c) = 0;
  *(unsigned int *)(param_1 + 0x98) = 0;
  return;
}
