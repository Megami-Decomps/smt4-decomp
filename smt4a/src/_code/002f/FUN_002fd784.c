/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd784` (_code @ 0x2fd784, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e9598. */


void FUN_002fd784(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e9598(param_1 + 0xe0,param_2 + 4);
  *(unsigned short *)(param_1 + 0xe8) = *(unsigned short *)(param_2 + 0xc);
  FUN_002e9598(param_1 + 0xec,param_2 + 0x10);
  *(unsigned short *)(param_1 + 0xf4) = *(unsigned short *)(param_2 + 0x18);
  *(unsigned char *)(param_1 + 0xf6) = *(unsigned char *)(param_2 + 0x1a);
  *(unsigned char *)(param_1 + 0xf7) = *(unsigned char *)(param_2 + 0x1b);
  *(unsigned int *)(param_1 + 0xf8) = *(unsigned int *)(param_2 + 0x1c);
  *(unsigned char *)(param_1 + 0xfc) = *(unsigned char *)(param_2 + 0x20);
  return;
}
