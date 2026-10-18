/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00514cb0` (_code @ 0x514cb0, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00128cf2. */
/* Supplied declaration required: FUN_002eb338. */
/* Supplied declaration required: FUN_002eb5c0. */
/* Supplied declaration required: FUN_00433ac4. */


void FUN_00514cb0(int param_1,unsigned int param_2,unsigned char *param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  float temp_v2;
  float temp_v3;
  unsigned char temp_v4 [8];
  unsigned char temp_v5 [16];
  
  temp_v2 = 1.0f;
  temp_v3 = *(float *)(*(int *)(param_1 + 0x1c) + 0x18);
  FUN_00433ac4();
  if (temp_v3 <= temp_v2) {
    puVar2 = (unsigned int *)(*(int *)(param_1 + 0x1c) + 0x10);
    temp_v1 = *puVar2;
    temp_v0 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
    if (temp_v0 != 0) {
      FUN_002eb5c0(temp_v0,puVar2);
      FUN_002eb338(temp_v5,param_3,temp_v1);
      param_3 = temp_v5;
    }
    FUN_002eb338(temp_v4,param_3);
    FUN_00128cf2(param_1,param_2,temp_v4);
  }
  return;
}
