/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336aec` (_code @ 0x336aec, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_5_stack;


void FUN_00336aec(int param_1,int param_2,int param_3,unsigned char param_4,int param_5)

{
  int temp_v0;
  
  temp_v0 = param_1 + param_3;
  param_1 = param_1 + param_3 * 4;
  *(unsigned char *)(temp_v0 + 0x40d8) = 1;
  *(char *)(temp_v0 + 0x4125) = (char)param_5;
  *(unsigned char *)(temp_v0 + 0x4120) = param_4;
  *(unsigned int *)(param_1 + 0x410c) = 0;
  if (param_5 != 0) {
    if (param_5 == 1) {
      *(int *)(param_1 + 0x40f8) = param_2 + *(int *)(param_1 + 0x40f8);
    }
    return;
  }
  *(int *)(param_1 + 0x40e4) = param_2 + *(int *)(param_1 + 0x40e4);
  return;
}
