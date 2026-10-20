/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001653a0` (_code @ 0x1653a0, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char DAT_005b4028; /* 0x5b4028 */


void FUN_001653a0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  
  if (*(int *)((*(int *)((unsigned char *)&DAT_005b4028 + 0x8)) + 0x30) != 0 && param_1 != 0) {
    puVar3 = (unsigned int *)(param_1 + 0x1410);
    *(float *)(param_1 + *puVar3 * 0x14 + 0x10) = in_s0;
    *(float *)(param_1 + *puVar3 * 0x14 + 0x14) = in_s1;
    *(float *)(param_1 + *puVar3 * 0x14 + 0x18) = in_s2;
    *(float *)(param_1 + *puVar3 * 0x14 + 0x1c) = in_s3;
    temp_v1 = param_1 + *puVar3 * 0x14;
    *(unsigned int *)(temp_v1 + 0x20) = param_2;
    temp_v0 = *puVar3;
    *puVar3 = temp_v0 + 1;
    if (temp_v0 + 1 >= 0x100) {
      (**(romwright_code **)((*(int *)((unsigned char *)&DAT_005b4028 + 0x8)) + 0x30))
                (param_1 + 0x10,0x100,*(romwright_code **)((*(int *)((unsigned char *)&DAT_005b4028 + 0x8)) + 0x30),temp_v1,param_4);
      *puVar3 = 0;
    }
    return;
  }
  (**(romwright_code **)((*(int *)((unsigned char *)&DAT_005b4028 + 0x8)) + 0x28))((int)in_s0,(int)in_s1,(int)in_s2,(int)in_s3,param_2);
  return;
}

} /* extern "C" */
