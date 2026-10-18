/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc744` (_code @ 0x2bc744, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002bc744(unsigned int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_lr; 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int unaff_r6;
  unsigned int in_lr;
  
  if (param_2 == 1) {
    puVar2 = (unsigned int *)0x2;
  }
  else {
    puVar2 = (unsigned int *)0x1;
  }
  puVar1 = (unsigned int *)0x1;
  if (param_3 == 0x501) {
    puVar1 = (unsigned int *)0x2;
  }
  param_1 = param_1 >> 8;
  *(unsigned int *)(param_1 * 2) = param_1;
  *puVar1 = unaff_r6;
  puVar1[1] = 1;
  puVar1[2] = in_lr;
  *(unsigned int *)(param_1 + (int)puVar2) = *puVar2;
  *(unsigned short *)((unsigned int *)(param_1 + (int)puVar2) + 1) = *(unsigned short *)(puVar2 + 1);
  return;
}
