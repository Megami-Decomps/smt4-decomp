/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00289f18` (_code @ 0x289f18, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_5_stack;


void FUN_00289f18(int param_1,int param_2,int param_3,unsigned char param_4,int param_5)

{
  int temp_v0;
  
  temp_v0 = param_1 + param_3 * 4;
  param_1 = param_1 + param_3;
  *(unsigned char *)(param_1 + 0x37bc) = 1;
  *(char *)(param_1 + 0x3809) = (char)param_5;
  *(unsigned char *)(param_1 + 0x3804) = param_4;
  *(unsigned int *)(temp_v0 + 0x37f0) = 0;
  if (param_5 != 0) {
    if (param_5 == 1) {
      *(int *)(temp_v0 + 0x37dc) = *(int *)(temp_v0 + 0x37dc) + param_2;
    }
    return;
  }
  *(int *)(temp_v0 + 0x37c8) = *(int *)(temp_v0 + 0x37c8) + param_2;
  return;
}

} /* extern "C" */
