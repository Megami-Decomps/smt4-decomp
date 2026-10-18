/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ca668` (_code @ 0x1ca668, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_0055b968; /* 0x55b968 */


void FUN_001ca668(int *param_1,unsigned int param_2)

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
    *puVar1 = (unsigned int)&DAT_0055b968;
    puVar1[7] = param_2;
  }
  return;
}
