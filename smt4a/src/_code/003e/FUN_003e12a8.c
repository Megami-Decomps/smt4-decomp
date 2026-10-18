/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e12a8` (_code @ 0x3e12a8, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_0039ba24. */
/* Supplied declaration required: FUN_003e2038. */
/* Supplied declaration required: FUN_003e8b78. */
/* Supplied declaration required: FUN_003ed1f8. */
extern int FUN_003efad8(int, unsigned int);
/* Supplied declaration required: FUN_003efb68. */
extern unsigned int FUN_00409fe8(unsigned int, unsigned int);


void FUN_003e12a8(unsigned int *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4 [43];
  
  puVar1 = temp_v4;
  FUN_003e8b78(param_2);
  temp_v1 = *(unsigned int *)(param_2 + 0x1ec4);
  FUN_001b4a90(temp_v4,0xa8,0xffffffff);
  FUN_0039ba24(temp_v4,0x2a,temp_v1);
  temp_v3 = 0;
  temp_v2 = 0;
  if (temp_v2 < (int)puVar1) {
    do {
      temp_v0 = FUN_003efad8(param_2,temp_v4[temp_v2]);
      if (temp_v0 == 0) {
        temp_v1 = FUN_00409fe8(temp_v4[temp_v2],1);
        FUN_003efb68(param_2,temp_v1);
        *(unsigned int *)(param_2 + temp_v3 * 8 + 0x2020) = temp_v4[temp_v2];
        FUN_003ed1f8(param_2,(int)(short)temp_v4[temp_v2]);
        temp_v3 = temp_v3 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < (int)puVar1);
  }
  *param_1 = 0xb;
  param_1[4] = 0;
  param_1[2] = temp_v3;
  param_1[3] = 0;
  FUN_003e2038(param_1,param_2);
  return;
}
