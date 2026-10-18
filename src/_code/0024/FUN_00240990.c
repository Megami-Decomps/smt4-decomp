/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240990` (_code @ 0x240990, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00294090(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c424c. */
/* Supplied declaration required: FUN_0030a728. */
/* Supplied declaration required: FUN_00334838. */
/* Supplied declaration required: FUN_00336da8. */
/* Supplied declaration required: FUN_00338318. */
extern int FUN_003391d0(int, unsigned int);
/* Supplied declaration required: FUN_00339210. */


void FUN_00240990(unsigned int *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4 [43];
  
  puVar1 = temp_v4;
  FUN_00336da8(param_2);
  temp_v1 = *(unsigned int *)(param_2 + 0x1e88);
  FUN_002c424c(temp_v4,0xa8,0xffffffff);
  FUN_0030a728(temp_v4,0x2a,temp_v1);
  temp_v3 = 0;
  temp_v2 = 0;
  if (temp_v2 < (int)puVar1) {
    do {
      temp_v0 = FUN_003391d0(param_2,temp_v4[temp_v2]);
      if (temp_v0 == 0) {
        temp_v1 = FUN_00294090(temp_v4[temp_v2],1);
        FUN_00339210(param_2,temp_v1);
        *(unsigned int *)(param_2 + temp_v3 * 8 + 0x1fe8) = temp_v4[temp_v2];
        FUN_00338318(param_2,(int)(short)temp_v4[temp_v2]);
        temp_v3 = temp_v3 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < (int)puVar1);
  }
  *param_1 = 5;
  param_1[2] = temp_v3;
  FUN_00334838(param_1,param_2);
  return;
}
