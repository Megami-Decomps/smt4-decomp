/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d92b8` (_code @ 0x4d92b8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;


void FUN_004d92b8(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_1 + 1;
  piVar1 = param_1 + 1;
  *param_1 = (int)piVar2;
  param_1[1] = (int)piVar1;
  param_1[2] = (int)piVar1;
  param_1[3] = (int)piVar1;
  *(unsigned char *)(param_1 + 4) = 0;
  param_1[5] = (int)piVar2;
  param_1[8] = param_2;
  param_1[6] = (int)piVar2;
  param_1[7] = 0;
  return;
}
