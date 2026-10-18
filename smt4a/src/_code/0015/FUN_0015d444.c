/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d444` (_code @ 0x15d444, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_0055b7f8; /* 0x55b7f8 */


void FUN_0015d444(unsigned int *param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x10,4);
  if (puVar1 != (unsigned int *)0x0) {
    temp_v0 = *param_1;
    *puVar1 = (unsigned int)&DAT_0055b7f8;
    puVar1[1] = (unsigned int)param_2;
    puVar1[2] = temp_v0;
    *(unsigned char *)(puVar1 + 3) = 1;
  }
  return;
}
