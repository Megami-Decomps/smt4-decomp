/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00373d68` (_code @ 0x373d68, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

extern unsigned char DAT_00421868; /* 0x421868 */

/* Supplied declaration required: FUN_002ac9cc. */


unsigned int *
FUN_00373d68(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4,
            unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  piVar1 = &temp_v2;
  temp_v1 = 0;
  *param_1 = (unsigned int)&DAT_00421868;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_5;
  param_1[9] = param_4;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  if (*(int *)(param_3 + 0x284) != 0) {
    temp_v2 = param_3 + 0x284 + *(int *)(param_3 + 0x284);
  }
  else {
    temp_v2 = 0;
  }
  FUN_002ac9cc();
  temp_v0 = piVar1[0xb];
  if (temp_v0 != 0) {
    temp_v0 = (int)(piVar1 + 0xb) + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  piVar1 = (int *)(temp_v0 + *(int *)(param_3 + 0x28c) * 4);
  temp_v0 = *piVar1;
  if (temp_v0 != 0) {
    temp_v1 = temp_v0 + (int)piVar1;
  }
  param_1[8] = temp_v1;
  return param_1;
}
