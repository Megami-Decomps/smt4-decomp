/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034f744` (_code @ 0x34f744, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
extern unsigned long long FUN_0023a784(unsigned int);
extern int FUN_0024ddb0(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5ff4. */
extern int FUN_0034e828(unsigned int, int, unsigned int);


unsigned char FUN_0034f744(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned long long temp_v4;
  
  temp_v3 = *(int *)(param_1 + 0x18);
  temp_v4 = FUN_0023a784(*(unsigned int *)(param_1 + 0xc));
  temp_v0 = FUN_0024ddb0((int)temp_v4,(int)((unsigned long long)temp_v4 >> 0x20),
                       *(unsigned int *)(*(int *)(param_1 + 8) + 0xc));
  temp_v1 = *(int *)(param_1 + 0x14) - (temp_v3 - temp_v0);
  temp_v0 = *(int *)(param_1 + 0x20);
  temp_v2 = *(int *)(param_1 + 0x14) - temp_v0;
  if (temp_v2 < param_3) {
    temp_v1 = temp_v1 - temp_v2;
    temp_v0 = 0;
  }
  if ((param_3 <= temp_v1) && (temp_v0 = *(int *)(param_1 + 0x10) + temp_v0, temp_v0 != 0)) {
    FUN_002c5ff4(temp_v0,param_2,param_3);
    temp_v3 = FUN_0034e828(*(unsigned int *)(param_1 + 0xc),temp_v0,param_3);
    if (temp_v3 != 0) {
      temp_v1 = *(unsigned int *)(param_1 + 0x18);
      *(unsigned int *)(param_1 + 0x18) = temp_v1 + param_3;
      *(unsigned int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (unsigned int)romwright_carry_4(temp_v1,param_3);
      *(unsigned int *)(param_1 + 0x20) = (temp_v0 - *(int *)(param_1 + 0x10)) + param_3;
    }
    return temp_v3 != 0;
  }
  return 0;
}
