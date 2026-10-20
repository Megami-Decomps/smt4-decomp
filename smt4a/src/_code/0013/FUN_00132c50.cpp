/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00132c50` (_code @ 0x132c50, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_malloc(...);

extern int FUN_0012d436(unsigned int, int *, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: rt_malloc. */


void FUN_00132c50(int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 1;
  if (param_2 == 0) {
    if (*param_1 != 0) {
      temp_v0 = *(unsigned int *)(*param_1 + 4);
    }
    else {
      temp_v0 = 0;
    }
    temp_v2 = FUN_0012d436(temp_v0,param_1,param_3,param_4,param_4);
  }
  piVar2 = (int *)rt_malloc(0xc);
  temp_v1 = rt_malloc();
  piVar2[2] = temp_v1;
  temp_v1 = *param_1;
  piVar2[1] = temp_v2;
  *piVar2 = temp_v1;
  *param_1 = (int)piVar2;
  temp_v1 = piVar2[2];
  param_1[3] = temp_v1 + temp_v2 * 0xc;
  param_1[2] = temp_v1;
  return;
}

} /* extern "C" */
