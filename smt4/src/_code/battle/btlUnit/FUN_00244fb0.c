/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00244fb0` (_code @ 0x244fb0, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;


void FUN_00244fb0(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
  unsigned int temp_v0;
  
  param_1 = param_1 + param_2 * 4;
  *(unsigned int *)(param_1 + 0x4a24) = 4;
  *(unsigned int *)(param_1 + 0x4a2c) = 0;
  *(unsigned int *)(param_1 + 0x4a34) = param_4;
  *(int *)(param_1 + 0x4a3c) = param_3;
  *(unsigned int *)(param_1 + 0x4a14) = *(unsigned int *)(param_1 + 0x4a0c);
  temp_v0 = *(unsigned int *)(param_3 * 4 + 0x439a3c);
  *(unsigned int *)(param_1 + 0x4a1c) =
       (temp_v0 << 0x18) | (((temp_v0 >> 8) & 0xff) << 0x10) | (((temp_v0 >> 0x10) & 0xff) << 8) | param_5
  ;
  return;
}
