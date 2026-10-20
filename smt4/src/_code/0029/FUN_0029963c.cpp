/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029963c` (_code @ 0x29963c, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002945a4(...);

extern unsigned char g_gameGlobals; /* 0x44e140 */

/* Supplied declaration required: FUN_002945a4. */


void FUN_0029963c(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 == 2) {
        FUN_002945a4(*(unsigned int *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e80),2,param_2,7);
      }
      temp_v0 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4));
      *(unsigned int *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x10) = 0;
      *(unsigned int *)(temp_v0 + 0x12dc) = 6;
      return;
    }
    temp_v1 = *(unsigned int *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e80);
    temp_v2 = 1;
  }
  else {
    temp_v1 = *(unsigned int *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x1e80);
    temp_v2 = 0;
  }
  FUN_002945a4(temp_v1,temp_v2,param_2,7);
  temp_v0 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4));
  *(unsigned int *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x12dc) = 6;
  return;
}

} /* extern "C" */
