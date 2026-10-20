/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013f354` (_code @ 0x13f354, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_004215fc; /* 0x4215fc */


void FUN_0013f354(int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,0x20,4);
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[1] = (unsigned int)param_1;
    *(unsigned char *)(puVar1 + 2) = 0;
    *(unsigned char *)((int)puVar1 + 9) = 0;
    puVar1[3] = 0x3f000000;
    puVar1[4] = 0x3f000000;
    puVar1[5] = 0x3f000000;
    puVar1[6] = 0x3f000000;
    *puVar1 = (unsigned int)&DAT_004215fc;
    puVar1[7] = param_2;
  }
  return;
}

} /* extern "C" */
