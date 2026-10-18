/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012abe4` (_code @ 0x12abe4, 0xf8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_6_stack;

/* Supplied declaration required: FUN_002b43b0. */
/* Supplied declaration required: FUN_002b4454. */


void FUN_0012abe4(int *param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  *param_1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x188;
  FUN_002b4454(param_1,param_2,param_3,param_4,param_5,param_6);
  temp_v3 = (param_3 << 0x10) >> 0x18 != 0;
  *param_1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x100;
  temp_v0 = 0;
  if (temp_v3) {
    temp_v0 = *(int *)(param_2 + 0x28);
  }
  if ((!temp_v3 || temp_v0 == 0) || temp_v0 < 0) {
    return;
  }
  temp_v0 = *(int *)(param_2 + 0x2c);
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + param_2 + 0x2c;
  }
  else {
    temp_v0 = 0;
  }
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v2 = *(int *)(temp_v0 + 0x28);
    if (temp_v2 != 0) {
      temp_v1 = temp_v2 + temp_v0 + 0x28;
    }
  }
  *param_1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x68;
  FUN_002b43b0(param_1,temp_v1,1);
  return;
}
